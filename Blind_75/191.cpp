class Solution {
public:
    int hammingWeight(int n) {
        string binary="";
        while(n>0){
            binary+=(n%2)+'0';
            n/=2;
        }
        int cnt=0;
        for(char c:binary){
            if(c=='1'){
                cnt++;
            }
        }
        return cnt;
    }
};