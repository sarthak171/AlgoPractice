#include <iostream>

using namespace std;

int main()
{
    int n,p,v,t,solve;
    solve = 0;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>p>>v>>t;
        if(p+v+t>=2){
            solve++;
        }
    }
    cout<<solve<<endl;
    return 0;
}
