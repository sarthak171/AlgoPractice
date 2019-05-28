#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,c;
    cin>>n;
    int arr[n] = {0};
    for(int i = 0 ; i<n;i++){
        cin>>c;
        arr[i] = c;
    }
    sort(arr,arr+n);
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
