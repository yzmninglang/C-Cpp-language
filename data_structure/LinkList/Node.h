

class LinkList;
template<class T>
class Node
{
private:
    /* data */
    friend class LinkList;
    Node *next;
    T data;

};


