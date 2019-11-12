class Solution {
public:
    int numJewelsInStones(string J, string S) 
    {
        int res = 0;
        unordered_set<char> setJ(J.begin(), J.end());
        for(int i = 0; i < S.size(); i++)
        {
            if(setJ.count(S[i]))
            {
                res++;
            }
        }
        return res;
    }
};