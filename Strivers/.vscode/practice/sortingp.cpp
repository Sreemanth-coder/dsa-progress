#include <iostream>
using namespace std;

void selectionsort(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
                //swapp
                int temp=arr[min];
                arr[min]=arr[i];
                arr[i]=temp;
            }
        }
    }

}

int main(){
    int n;
    int arr[n];
    cout<<"Enter:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    selectionsort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}