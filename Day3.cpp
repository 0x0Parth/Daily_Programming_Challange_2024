#include<bits/stdc++.h>
using namespace std;
    
    int findDuplicate(int arr[],int n){
    
    int sum1=0,sum2=0;
    for(int i=1;i<n;i++){
        sum1+=i;
    }

    for(int i=0;i<n;i++){
        sum2+=arr[i];
    }
    return sum2-sum1;

    }

int main(){

int arr[]={3,1,3,4,2};
int n=sizeof(arr)/sizeof(int);
int ans=findDuplicate(arr,n);
cout<<ans<<endl;
return 0;
}