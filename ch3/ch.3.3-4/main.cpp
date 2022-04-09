#include <iostream>

using namespace std;

int factorial(int n)
{
    int fact=1;

    if (n < 0)
    {
        cout << "Error! Factorial of a negative number doesn't exist."<<endl;
        return -1;
    }
    else
    {
        for(int i = 1; i <= n; ++i)
        {
            fact *= i;
        }
        return fact;
    }

}

int combination( int n, int r)
{
    int c;
    if(r<=n)
    {
        c= factorial(n)/(factorial(r)*factorial(n-r));
        return c;
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

    int i=0;
    while(i<=n)
    {


        cout <<i<< "\t"<< combination(i,r) << endl;

        i++;
    }
    return 0;
}
