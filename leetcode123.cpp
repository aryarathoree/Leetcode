/*
Leetcode 123 Best Time to Buy and Sell Stock III Hard

You are given an array prices where prices[i] is the price of a given stock on the ith day.
Find the maximum profit you can achieve. You may complete at most two transactions.
Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again). 
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy1=INT_MAX, buy2=INT_MAX;
        int prof1=0, prof2=0;
        int p=prices.size();
        for(int i = 0; i < p;i++){
            buy1=min(buy1,prices[i]);
            prof1=max(prof1,prices[i]-buy1);
            buy2=min(buy2, prices[i]-prof1);
            prof2=max(prof2,prices[i]-buy2);
        }
        return prof2;
    }
};