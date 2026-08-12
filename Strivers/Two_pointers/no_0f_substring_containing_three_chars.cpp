class Solution {
   
public:
    int numberOfSubstrings(string s) {
        //brute force
        /*
        int cnt=0;
        for(int i=0;i<s.size();i++){
            int a=0,b=0,c=0;
            for(int j=i;j<s.size();j++){
                if(s[j]=='a') a++;
                else if(s[j]=='b') b++;
                else if(s[j]=='c') c++;
                if(a>=1 && b>=1 && c>=1) cnt++;

            }
        }
        return cnt;
        */
        int n=s.size();
        int left=0;
        int cnt=0;
        vector<int> freq(3,0);
        for(int right=0;right<n;right++){
            freq[s[right]-'a']++;
            while(freq[0]>0 && freq[1]>0 && freq[2]>0){
                cnt+=n-right;

                freq[s[left]-'a']--;
                left++;
            }
        }
        return cnt;
        
    }
};