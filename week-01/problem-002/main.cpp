#include<iostream>

typedef long long ll;

using namespace std;

int main(void)
{
    ll sum = 2;
    ll num1=3,num2=5,temp;
    while(num2<4000000)
    {
        temp = num1+num2;
        num1 = num2;
        num2 = temp;
        if(!(temp&1))
        {
            sum += temp;
        }
    }
    std::cout<<sum<<"\n";
}