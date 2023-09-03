include<iostream>
using namespace std;
int main()
{
    long long k,m;
    cin>>k>>m;
    if((k+1)/2>=m){
        cout<<m*2-1<<endl;
    }
    else{
        cout<<(m-(k+1)/2)*2<<endl;
    }
    return 0;

}
