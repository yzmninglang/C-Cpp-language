#include <iostream>
#include <typeinfo>
using namespace std;

class Base {
   private:
   public:
    Base() {}
    ~Base() {}
    virtual void function() { std::cout << "Base::function" << std::endl; }
    virtual void function1(int num) {
        std::cout << "Base::function1 - " << num << std::endl;
    }
};

class Derived : public Base {
   public:
    void function() override { std::cout << "Derived::function" << std::endl; }
    virtual void function2() { std::cout << "Derived::function3" << std::endl; }

   private:
    virtual void function3() { std::cout << "Derived::function5" << std::endl; }
};

//一个自定义类型，这个类型用来定义一类函数，
//一类入参为空，范围值为void的函数
using func_type = void (*)();
using func_type_num = void (*)(Derived *, int);
// 相当于下面这种c语言的写法
// typedef void (*Fun)(void);

int main() {
    Derived *d2 = new Derived();

    printf("d2->_vptr:\t%x\n", d2->_vptr);           //这是虚指针
    func_type *vt_tbale = (func_type *)(d2->_vptr);  //做虚表类型转换

    for (int i = 0; i < 4; i++) {
    
        if (i == 1) {
            func_type_num f = (func_type_num)vt_tbale[i];
            f(d2, 100);
            printf("The %dst func addr\t:%x\n", i, f);
        } else {
            func_type f = vt_tbale[i];
            //这是虚函数表中第i个函数的地址
            f();
            printf("The %dst func addr\t:%x\n", i, f);
        }
    }

    return 0;
}


