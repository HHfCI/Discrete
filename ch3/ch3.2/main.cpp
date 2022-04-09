#include <iostream>

using namespace std;

int permutations(int n,int r)
{

    int perm=1;
    if(r<=n)
    {
        for(int i=n; i>=(n-r+1); i--)
        {

            perm=perm*i;

        }

        return perm;
    }
    else
    {

        return 0;
    }
}

int main()
{

    int n, r;
    cin>>n;
    cin>> r;
    int i=1;
    while(i<=n)
    {

        cout<<i<<"\t"<<permutations(i,r)<<endl;

        i++;
    }
    return 0;
}
