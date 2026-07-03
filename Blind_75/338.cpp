class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> final(n+1,0);
        for(int i=1;i<=n;i++){
            int cnt=0;
            string binary="";
            int n=i;
            while(n>0){
                binary+=(n%2)+'0';
                n/=2;
            }
            //reverse(binary.begin(),binary.end());
            for(char c:binary){
                if(c=='1'){
                    cnt++;
                }
            }
            final[i]=cnt;
        }
        return final;
        
    }
};