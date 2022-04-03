#include <iostream>

using namespace std;

bool is_belong(int A[],int s, int x)
{
    bool b=false;
    for (int i=0; i<s; i++)
    {

        if(A[i]==x)
        {
            b=true;
            break;
        }
    }

    return b;
}



bool is_subset(int A[],int s1, int B[], int s2)
{
    bool b=true;
    for (int i=0; i<s2; i++)
    {
        b=true;
        if(is_belong(A,s1,B[i]))
        {
        }
        else
        {
            b=false;
            break;
        }


    }
    return b;
}

int [] intersection(int A[],int s1, int B[], int s2)
{

    int s3= (s1>s2)? s2: s1;

    int res[s3]= {};
    //zero means empty element
    int index=0;

    for (int i=0; i<s1; i++)
    {
        if(is_belong(B,s2,A[i]))
        {
        res[index]=A[i];
      //      cout<<A[i];
        index++;
        }


    }

 return res;

}

int main()
{
    int A[]= {1,2,3,4};
    int B[]= {4,1,8};

    intersection(A,4,B,3);
    /*
        //cout<< x[0]<<" "<<x[1]<<endl;

        int x;
        cin>>x;

        //cout<<is_subset(A,4,B,3);
    //    int s= sizeof(A)/sizeof(A[0])

        if(is_belong(A, 4, x))
        {
            cout<<"True"<<endl;

        }
        else
        {

            cout<<"False"<<endl;

        }
        //cout << "Hello world!" << endl;
    */
    return 0;
}
