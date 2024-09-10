#include <iostream>
#include <vector>
using namespace std;

int FindMissingInSorted(vector<int> v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (    v[i] != i + 1)
            return i + 1;
    }
    return -1;
}


int main() {
    vector<int> v = {1, 2, 4, 5};  
    int ans = FindMissingInSorted(v);
    cout << "Missing Element from the array is: " << ans << endl;

    return 0;
}
