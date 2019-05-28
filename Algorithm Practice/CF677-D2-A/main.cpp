#include <iostream>

using namespace std;

int main()
{
    int n,h,fh,cnt=0;
    cin>>n>>h;
    for(int i=0;i<n;i++){
        cin>>fh;
        if(fh>h) cnt+=2;
        else cnt+=1;
    }
    cout<<cnt;
    return 0;
}
