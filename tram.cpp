#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int curtvalue=0;
    int ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        curtvalue-=a;
        curtvalue+=b;
        ans=max(ans,curtvalue);
    }
    cout<<ans;

    return 0;
}
