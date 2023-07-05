class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low=prices[0];
        int max = 0;
        for(int i =0; i < prices.size(); i++)
        {
            if(low >= prices[i])
            {
                low=prices[i];
            }
            else
            {
                if(max < (prices[i]-low))
                {
                    max= prices[i]-low;
                }
            }
        }
        return max;
    }
};
