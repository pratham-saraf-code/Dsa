class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int i=0;
        int cnt=0;
        while (i<s.size()){
            if(s[i]=='('){
                cnt++;
                ans=max(cnt,ans);
                i++;
            }
            else if(s[i]==')'){
                cnt--;
                i++;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};
