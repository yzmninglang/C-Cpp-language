template<class T>
class LinkList;
template<class T>
class Node
{
private:
    /* data */
    friend class LinkList<T>;
    Node *next;
    T data;
};


