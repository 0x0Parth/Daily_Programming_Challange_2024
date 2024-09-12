#include<bits/stdc++.h>
using namespace std;
    
    
int main(){

vector<int> arr1={1,3,5,7};
vector<int> arr2={2,4,6,8};

arr1.insert(arr1.end(),arr2.begin(),arr2.end());
sort(arr1.begin(),arr1.end());
cout<<" Merged Array is : "<<endl;
for(int i:arr1){
    cout<<i<<" ";
}cout<<endl;

return 0;
}