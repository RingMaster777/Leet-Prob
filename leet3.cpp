
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxprofit = 0;
        int leftIndex = 0, rightIndex = prices.size() - 1;

        while (leftIndex < rightIndex)
        {
            if (prices[rightIndex] - prices[leftIndex] > maxprofit)
            {
                maxprofit = prices[rightIndex] - prices[leftIndex];
                rightIndex--;
            }
            else
            {
                leftIndex--;
            }
        }
        // for (int i = 0; i < prices.size() - 1; i++)
        // {
        //     for (int j = i + 1; j < prices.size(); j++)
        //     {
        //         // cout << prices[j] - prices[i] << endl;
        //         if (prices[j] - prices[i] > maxprofit)
        //         {
        //             maxprofit = prices[j] - prices[i];
        //         }
        //     }
        // }

        return maxprofit;
    }
};

int main()
{
    // Fast I/O for faster input/output operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;
    v = {7, 1, 5, 3, 6, 4};
    Solution obj;
    int res = obj.maxProfit(v); // Call your function with necessary arguments
    cout << res;

    return 0;
}