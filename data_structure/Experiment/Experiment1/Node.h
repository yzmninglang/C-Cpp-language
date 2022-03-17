template <class T> class SingleList;
template <class T> 
class Node
{
private:
	T element;
	Node<T> *link;
	friend class SingleList<T>;
};
