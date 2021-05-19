#include <bits/stdc++.h>
using namespace std;
void display(int a[], int n)
{
    for (int i = 0; i < n; i++) 
    {
        cout << a[i] << "  ";
    }
    cout << endl;
}
void findPermutations(int a[], int n)
{
    sort(a, a + n);
    do {
        display(a, n);
    } while (next_permutation(a, a + n));
}
int main()
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    cin>>a[i];
    findPermutations(a, n);
    return 0;
}
/*
3
1 2 3
1  2  3  
1  3  2  
2  1  3  
2  3  1  
3  1  2  
3  2  1  

output
3
1 2 1
1  1  2  
1  2  1  
2  1  1  



*/
