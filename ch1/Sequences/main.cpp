#include <iostream>

using namespace std;

int recseq(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if(n==1)
    {
        return -1;
    }
    return ((3*recseq(n-1))-(2*recseq(n-2)));
}

void showterm(int n)
{

    int t1 = 1, t2 = -1, nextTerm = 0;

    for (int i = 0; i <= n; ++i)
    {
        // Prints the first two terms.
        if(i == 0)
        {
            cout << t1 << ", ";
            continue;
        }
        if(i == 1)
        {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = 3*t2-2*t1;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << ", ";

    }
}

int main()
{

    showterm(10);
    /*cout<<endl;
    for(int i=0; i<=10; i++)
    {
        cout<< recseq(i);
        cout<<", ";
    }*/
    return 0;
}
