#include<iostream>

using namespace std;

int main(void) 
{

    int sum = 0;
    for(int i=3;i<1000;++i)
    {
        if(i%3==0 || i%5==0)
        {
            sum += i;
        }
    }    
    std::cout<<"Sum of multiples of 3 and 5 between 1 and 1000 are "<<sum<<"\n";
    return 0;
}