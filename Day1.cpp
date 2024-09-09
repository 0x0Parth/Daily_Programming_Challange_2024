#include<bits/stdc++.h>
using namespace std;



void SortArray_Optimal(vector<int> &v)
{
   
    int n = v.size();
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high)
    {
        if (v[mid] == 0)
        {
            swap(v[low], v[mid]);
            low++;
            mid++;
        }
        else if (v[mid] == 1)
        {
            mid++;
        }
        else
        {
           swap(v[high],v[mid]);
           high--; 
        }
    }
}

int main(){

vector<int> v={1,1,1,0,0,0,2,0,1,0,2,1,1,1,0,2,2,2,0,1,0,2};
cout<<" Original Array"<<endl;
for(int i:v){
cout<<i<<" ";
}cout<<endl;

cout<<"After Arranging" <<endl;
SortArray_Optimal(v);
for(int i:v){
cout<<i<<" ";
}cout<<endl;


return 0;
}