#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &arr,int n){
    //Check the n value is normalized
    int len=arr.size();
    n=n%len;

    vector<int> rotated(len);

    //Adding last n elements of the arr[] as the first of the rotated[] 
    for(int i=0;i<n;i++){
        rotated[i]=arr[len-n+i];
    }

    //Adding first len-n elements to the rotated
    for(int i=0;i<len-n;i++){
        rotated[n+i]=arr[i];
    }

    arr=rotated;

}

int main(){
    vector<int> arr={3,4,2,1};
    int n=2;
    rotate(arr,n);
    for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
    }
      
    return 0;

}