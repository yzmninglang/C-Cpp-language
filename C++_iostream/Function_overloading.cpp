#include <iostream>
using namespace std;
int square(int i)
{
    return i*i;
}
long square(long i)
{
    return i*i;
}
double square(double i)
{
    return i*i;
}
int main()
{
    int i =12;
    long j =1234;
    double k =1.23;
    cout<<"int i'quare is "<<square(i)<<endl;
    cout<<"long j's quare is "<<square(j)<<endl;
    cout<<"double k's quare is "<<square(k)<<endl;
    return 0;
}

