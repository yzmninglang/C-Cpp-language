#include <iostream>
#include<math.h>
using namespace std;
float sroot(double a)
{
    return sqrt(a);
}
float sroot(int a)
{
    return sqrt(a);
}
float sroot(long a)
{
    return sqrt(a);
}
int main() {
    cout<<sroot(12456788)<<endl;
    cout<<sroot(21.32)<<endl;
    cout<<sroot(21)<<endl;

}
