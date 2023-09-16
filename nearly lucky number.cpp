#include<iostream>
#include<string>
using namespace std;
int main()
{
    string c;
    cin>>c;
    int cnt=0;
    
    for(int i=0;i<c.size();i++){
        if (c[i]=='4'||c[i]=='7')
        {
            cnt++;
            
        }
    }
    if(cnt==4 || cnt==7)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
