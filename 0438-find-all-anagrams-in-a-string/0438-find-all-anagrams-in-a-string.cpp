class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>result;
         int sl=s.length();
         int pl=p.length();

         if(sl<pl)
         {
            return result;
         }

         vector<int>pfreq(26,0);

         for(int i=0;i<pl;i++)
         {
            pfreq[p[i]-'a']++;
         }

       int left=0;
       int right=pl-1;

       while(right<=(sl-1))
       {
        vector<int>sfreq(26,0);
         for(int j=left;j<=right;j++)
         {
            sfreq[s[j]-'a']++;
         } 
if(sfreq==pfreq)
result.push_back(left);

right++;
left++;

       }
       
       return result;

    }
};