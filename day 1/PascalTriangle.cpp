class Solution {
public:
    vector<int> generateRow(int n)
    {
        vector<int> ans;
        ans.push_back(1);
        int t=1;
        for(int i =1;i < n; i++)
        {
            t=t*(n-i);
            t=t/i;
            ans.push_back(t);
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> p;
        for(int i =1; i <= numRows; i++)
        {
            p.push_back(generateRow(i));
        }   
        return p;
    }
};
