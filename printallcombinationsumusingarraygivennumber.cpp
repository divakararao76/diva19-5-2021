#include <bits/stdc++.h>
using namespace std;
// finding the sum of the elements in a vector
void findNumbers(vector<int>& ar, int sum,vector<vector<int> >& res, vector<int>& r, int i)
{
    if (sum == 0) 
    {
        res.push_back(r);
        return;
    }
    while (i < ar.size() && sum - ar[i] >= 0) 
    {
         r.push_back(ar[i]); 
         findNumbers(ar, sum - ar[i], res, r, i);
         i++;
         r.pop_back();
    }
}
vector<vector<int> > combinationSum(vector<int>& ar,int sum)
{
    sort(ar.begin(), ar.end());   // sort a vector element in ascending order
    ar.erase(unique(ar.begin(), ar.end()), ar.end());   // remove the end of the element in a vector
    vector<int> r;
    vector<vector<int> > res;
    findNumbers(ar, sum, res, r, 0);
    return res;
}
int main()
{
    int n;
    cin>>n;
    int a[n],i;
    vector<int> ar;
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    ar.push_back(a[i]);
    }
    
    int sum ;
    cin>>sum;
    vector<vector<int> > res = combinationSum(ar, sum);
    if (res.size() == 0) 
    {
        cout << "Emptyn";
        return 0;
    }
 
    for (int i = 0; i < res.size(); i++) 
    {
        if (res[i].size() > 0) 
        {
            for (int j = 0; j < res[i].size(); j++)
                cout << res[i][j] << " ";
            cout << endl;
        }
    }
}
/*
output:1
1
2
1
Emptyn
output: 2
4
2 4 6 8
8
2 2 2 2 
2 2 4 
2 6 
4 4 
8 




