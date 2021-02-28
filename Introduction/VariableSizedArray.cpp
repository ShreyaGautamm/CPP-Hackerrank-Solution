#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q,s=0;
    cin>>n>>q;
    int *a[n];
    while(n--)
    {
        int k;
        cin>>k;
        a[s]= new int[k];
        for(int i=0; i<k; i++)
        {
            cin>>a[s][i];
        }
        s++;
    }

    while(q--)
    {
        int x,y;
        cin>>x>>y;
        cout<<a[x][y]<<endl;
    }
    return 0;
}
