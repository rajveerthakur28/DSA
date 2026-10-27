class Solution {
public:
    int strStr(string haystack, string needle) {
         int ans =-1 ;
        for(int i = 0; i<haystack.length(); i++){
            int t =i;
            int l = 0;
            while( l < needle.length() && haystack[t] == needle[l]){
                t++;
                l++;
            }
            if(l == needle.length()){
                return i;
            }
              
        }
     return -1;
        
    }
};