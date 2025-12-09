//Reversing a integer and with best complexity

//If the input is greater than the bound like 10 digits then 
// worst complexity occurs
//Bound is[-2^31, (2^31) - 1]
/*
#include <iostream>
#include <cmath>
using namespace std;


int Reverse_Number(int num){
    int Reversed=0;
    int sign=1;
    if(num==INT32_MIN){
        return 0;
    }

    if(num<0){
        sign=-1;
        num=-num;
    }
    while(num!=0){
        int append=num%10;
        if((Reversed>INT32_MAX) || (Reversed==INT32_MAX) && append>7){
            return 0;
        }
        Reversed=(Reversed*10)+append;
        num/=10;

        
    }
    Reversed=Reversed *sign;

    cout<<"THe Reversd number  "<<Reversed<<endl;
    

}


int main(){

 Reverse_Number(231);
 Reverse_Number(-435);
 Reverse_Number(230);

 return 0;   
}

*/

///No to check weather a number palindrome
//Given an integer x, return true if x is a 
//palindrome
//, and false otherwise.

#include <iostream>
using namespace std;


bool Palindrome(int x){
    int reversed=0;
    if(x<0){
        return false;
    }

    int original=x;

    while(x!=0){
        int append= x%10;
        reversed=(reversed*10)+append;
        x/=10;

    }

    if(reversed==original){
        return true;
    }
}

int main(){
    Palindrome(121);

    return 0;
}
