#include <bits/stdc++.h>
using namespace std;

vector<int> findLeaders(vector<int> arr)
{
    int n = arr.size();
    vector<int> leaders;
    int itr = n - 1;
    int maxele = INT_MIN;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > maxele)
        {
            leaders.push_back(arr[i]);
            maxele = arr[i];
        }
    }
    return leaders;
}

int main()
{

    vector<int> arr = {13,0, 11, 9, 1, 4, 2, 1};
     cout<<"\nOriginal Array : "<<endl;
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl<<endl;

    vector<int> ans = findLeaders(arr);
    reverse(ans.begin(),ans.end());
    cout<<"Leaders Array : "<<endl;
    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}