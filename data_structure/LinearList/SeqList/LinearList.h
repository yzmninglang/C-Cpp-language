
template<class T>
class LinearList{
public:
	LinearList();
	~LinearList();
	virtual int Size() const =0;
	virtual int Length() const =0;
	virtual int Search(T x)const =0; //返回i位置的值
	virtual bool Insert(int i,T x)=0;  //在i的后面插入值
	virtual bool Remove(int i,T &x)=0; //删除值并且返回该值
	virtual void Sort()=0;  //排序
	virtual void Output()=0;  //输出
	virtual LinearList<T>operator=(LinearList<T> &L)=0; //重载"="复制

};