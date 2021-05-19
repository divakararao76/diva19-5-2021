#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n;
int N;
void printcombinationsArray(int ind,int N,vector<int>&ds,int a[])
{
    if(n==ind)
    {
        if(N==0)
        {
            for(auto it:ds)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
       if(a[ind]<=N)
    {
        ds.push_back(a[ind]);
        printcombinationsArray(ind,N-a[ind],ds,a);
        ds.pop_back();
    }
    printcombinationsArray(ind+1,N,ds,a);
}
int main() {
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    cin>>a[i];
    cin>>N;
    vector<int>ans;
	printcombinationsArray(0,N,ans,a);
	return 0;
}

/*output
4
1 2 4 6
6
1 1 1 1 1 1 
1 1 1 1 2 
1 1 2 2 
1 1 4 
2 2 2 
2 4 
6 
