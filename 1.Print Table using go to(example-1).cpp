#include <iostream>
using namespace std;
int main(){
    int number=2;
    int i=1;
    skip:
    cout<<"2x"<<i<<"="<<number*i<<"\n";
    i++;
    if(i<=10)
    {
        goto skip;
    }
}