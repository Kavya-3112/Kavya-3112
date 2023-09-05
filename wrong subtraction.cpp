#include<iostream>
using namespace std;
int main()
{
    int num,k;
    cin>>num>>k;
    while(k){
        if(num%10==0){
            num=num/10;
            k--;
            
        }
        else{
            num-=1;
            k--;
        }
    
    }
    cout<<num;
    return 0;
}
