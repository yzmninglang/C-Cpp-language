
template<class T>
class LinearList{
public:
	LinearList();
	~LinearList();
	virtual int Size() const =0;
	virtual int Length() const =0;
	virtual int Search(T x)const =0; //����iλ�õ�ֵ
	virtual bool Insert(int i,T x)=0;  //��i�ĺ������ֵ
	virtual bool Remove(int i,T &x)=0; //ɾ��ֵ���ҷ��ظ�ֵ
	virtual void Sort()=0;  //����
	virtual void Output()=0;  //���
	virtual LinearList<T>operator=(LinearList<T> &L)=0; //����"="����

};