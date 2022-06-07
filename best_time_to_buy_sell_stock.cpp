#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
   int min=prices[0];
        int profit=0;
        int n=prices.size();
        for(int i=1;i<n;i++){
            if(prices[i]>min){
                int temProfit=prices[i]-min;
                profit=max(profit,temProfit);
            }
            else{
                min=prices[i];
            }
        }
        return profit;
}