#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
        vector<vector<long long int>> ans;
        vector<long long int> temp;
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                    temp.push_back(1);
                }
                else{
                   temp.push_back(ans[i-1][j-1]+ans[i-1][j]); 
                }
            }
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
}
