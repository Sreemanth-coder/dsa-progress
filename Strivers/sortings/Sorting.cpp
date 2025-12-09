#include <iostream>
using namespace std;


//Selection sort [5,3,6]
void selection_sort(int arr[],int n){
    int i,j;
    for(i=0;i<=n-2;i++){
        int min=i;
        for(j=i;j<=n-1;j++){
            if(arr[j]<arr[min]){
                
                min=j;
                //swap arr[i] with arr[j]
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
            //[,5,3,6]
            }
            
        }


    }

}


//Bubble sort
void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        int doswap=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                //swap 
                int temp=arr[j+1];
                arr[j+1]=arr[j];             //[4,2,3,1] n=4
                arr[j]=temp;
                doswap=1;
            }
        }
        if(doswap==0){
            break;
        }
        cout<<"runs\n";
    }
    
}

//insertion sort
void insertion_sort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            //swap arr[j-1] and arr[j]
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
            //[2,6,4,8]
        }
    }
}



int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

selection_sort(arr,n);
//bubble_sort(arr,n);
//insertion_sort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

return 0;

}