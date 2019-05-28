#include <iostream>

using namespace std;

int main()
{
    int num,acnt =0,dcnt=0;
    string s;
    cin>>num;
    cin>>s;
    for(int i = 0; i <num;i++){
        if(s[i] == 'A') acnt++;
        else if(s[i]=='D') dcnt++;
    }
    if(acnt>dcnt) cout<<"Anton";
    else if(dcnt>acnt) cout<<"Danik";
    else cout<<"Friendship";
    return 0;
}
