#include<bits/stdc++.h>
using namespace std;
    
vector<pair<int,int>> findSubarrayWithSum_0(vector<int>arr){
    int n=arr.size();
    vector<pair<int,int>> ans;
    for(int i=0;i<n;i++){
        int subsum=0;
        for(int j=i;j<n;j++){
            subsum+=arr[j];
            if(subsum==0){
                ans.push_back({i,j});
            }
        }
        
    }
    return ans;
}
int main(){

vector<int> arr={1, 2, -3, 3, -1, 2};
vector<pair<int,int>> ans=findSubarrayWithSum_0(arr);
cout<<"[ ";
for(int i=0;i<ans.size();i++){
    cout<<"["<<ans[i].first<<","<<ans[i].second<<"],";
}
cout<<"]"<<endl;

return 0;
}