#include<iostream>
using namespace std;
 
int main(){
    string word;
    string hello="hello";
    cin>>word;
    int j=0, cnt=0;
    for(int i=0; i<word.length();i++){
        if(word[i]==hello[j]){
            j++;
            cnt++;
        }
    }
    if(cnt==5){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
