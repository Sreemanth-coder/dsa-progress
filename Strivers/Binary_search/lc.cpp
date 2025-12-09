#include <bits/stdc++.h>
#include <omp.h>

using namespace std;

int main(){
    
    #pragma omp parallel
    {
        cout<<"hi"<<omp_get_thread_num()<<endl;
    }
}

/*
int main(){
    int a[4]={1,2,3,4};
    int b[4]={1,2,3,4};
    int sum=0;

   double start =omp_get_wtime();
    #pragma omp parallel for reduction(+:sum)
    for(int i=0;i<4;i++){
         sum+=a[i]*b[i];
    }
    double end=omp_get_wtime();
    cout<<(end-start)<<"s";
     
}
*/

