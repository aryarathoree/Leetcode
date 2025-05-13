/*
Leetcode 122 Best Time to Buy and Sell Stock II Medium

You are given an integer array prices where prices[i] is the price of a given stock on the ith day.
On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. 
However, you can buy it then immediately sell it on the same day.
Find and return the maximum profit you can achieve.
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        vector<int> profitArray;
        int profit=0;
        for(int i = 1 ; i < prices.size(); i++ ){
            int cal=0;
            cal=prices[i]-prices[i-1];
            profitArray.push_back(cal);
        }
        for(int i = 0; i < profitArray.size(); i++){
            if(profitArray[i]>0)
            profit+=profitArray[i];
        }
        return profit;
    }
};