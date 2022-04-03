#include <iostream>

using namespace std;

int main()
{
    bool p,q,r;
    cout<<("\t\tTruth Table\n\n");
    cout<<(" P\tQ\tR\t((P+Q)->R)\n");
    cout<<(" P\tQ\tR\t(~(P+Q)+R)\n");
    cout<<(" P\tQ\tR\t(~P.~Q+R)\n");
    cout<<(" ===============================\n");
    int cnt=1;
    q=true;
    for(int i = 0; i <= 7; i++)
    {
        p= (i / 4==0)? false: true;

        if(i%2==0)
        {
            q = !q;
        }
        else
        {
            q = q;
        }
        r= (i % 2==0)?false: true;

        cout<<p<<"\t"<<q<<"\t"<<r<<"\t"<<((!p&&!q)||r);
        cout<<endl;
    }
    return 0;
}
