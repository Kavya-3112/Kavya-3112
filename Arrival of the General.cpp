#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int max=0,min=1000,ind1=0,ind2=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
    if(x>max){
        max=x;
        ind1=i;
    }
    if(x<=min){
        min=x;
        ind2=i;
            
    }
    }
    if(ind1>ind2){
        cout<<(ind1-1)+(n-ind2)-1;
    }
    else{
        cout<<(ind1-1)+(n-ind2);
        
    }
    
}
