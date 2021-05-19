#include <bits/stdc++.h>
using namespace std;
void display(vector<int> a, int n)
{
    for(int i=0;i<n;i++) 
    cout << a[i] << " ";
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];
    do{
        display(a, n);
    }while(next_permutation(a.begin(), a.end())); 
    return 0;
}
/*
output
3
1 2 3
1 2 3 
1 3 2 
2 1 3 
2 3 1 
3 1 2 
3 2 1 


*/
