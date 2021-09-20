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

//һ���Զ������ͣ����������������һ�ຯ����
//һ�����Ϊ�գ���ΧֵΪvoid�ĺ���
using func_type = void (*)();
using func_type_num = void (*)(Derived *, int);
// �൱����������c���Ե�д��
// typedef void (*Fun)(void);

int main() {
    Derived *d2 = new Derived();

    printf("d2->_vptr:\t%x\n", d2->_vptr);           //������ָ��
    func_type *vt_tbale = (func_type *)(d2->_vptr);  //���������ת��

    for (int i = 0; i < 4; i++) {
    
        if (i == 1) {
            func_type_num f = (func_type_num)vt_tbale[i];
            f(d2, 100);
            printf("The %dst func addr\t:%x\n", i, f);
        } else {
            func_type f = vt_tbale[i];
            //�����麯�����е�i�������ĵ�ַ
            f();
            printf("The %dst func addr\t:%x\n", i, f);
        }
    }

    return 0;
}


