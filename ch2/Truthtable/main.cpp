#include <iostream>

using namespace std;

int main()
{
    bool a,b;
    cout<<("\t\tTruth Table\n\n");
    cout<<(" A\tB\tA.B\tA+B\t!A\t!B \t A.!B\n");
    for(int i = 0;i <= 3;i++)
    {
        a = (i / 2==0)? false: true;
        b = (i % 2==0)? false: true;
        cout<<a<<"\t"<<b<<"\t"<<(a&&b)<<"\t"<<(a||b)<<"\t"<<!a<<"\t"<<!b<<"\t"<< (a&&!b)<<endl;
    }
    return 0;

}
