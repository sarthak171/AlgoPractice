#include <iostream>

using namespace std;

int size = 10;
int arr[10] = {4,2,6,7,3,7,1,3,2,8};

void insertion(){
	for(int i=1;i<size;i++){
		int init = arr[i];
		int j = i-1;
		while(j>=0 && init<arr[j]){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=init;
	}
}

int main(){
	insertion();
	for(int i = 0 ; i<size;i++){
		cout<<arr[i];
	}
	return 0;
}







