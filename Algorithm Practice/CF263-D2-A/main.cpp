#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x,y,z;
    for(int i =1;i<=5;i++){
        for(int j = 1 ; j<=5;j++){
            cin>>z;
            if(z==1){
                x=i;
                y=j;
            }
        }
    }
    cout<<abs(x-3)+abs(y-3);
    return 0;
}
