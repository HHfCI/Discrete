#include <iostream>

using namespace std;

int main()
{

    int n, r;
    cin>>n;
    cin>> r;

    int perm=1;
    if(r<=n&& r>=1)
    {
        for(int i=n; i>=(n-r+1); i--)
        {

            perm=perm*i;

        }

        cout << perm << endl;
    }
    else
    {

        cout<<0;
    }
    return 0;
}
