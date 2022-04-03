#include <iostream>

using namespace std;

bool is_tautology(){


return false;
}

bool is_contradiction(){


return false;
}

bool is_contengency(){


return false;
}

bool is_equlivant(){


return false;
}


int main()
{
    bool a,b;
    cout<<("\t\tTruth Table\n\n");
    cout<<(" A\tB\tA.B\tA+B\t!A\tA->B\tA <->B\n");
    bool ar[4];
    for(int i = 0; i <= 3; i++)
    {
        a = (i / 2==0)? false: true;
        b = (i % 2==0)?false: true;
        cout<<a<<"\t"<<b<<"\t"<<(a&&b)<<"\t"<<(a||b)<<"\t"<<(!a)<<"\t"<<(!a||b)<<"\t"<<((!a||b)&&(!b||a))<<endl;
        ar[i]=((!a||b)&&(!b||a));
    }

    bool taut=false;
    for(int i = 0; i <= 3; i++)
    {
        if(ar[i])
        {
            taut=true;

        }
        else
        {
            taut=false;
            cout<<"not tautology"<<endl;
            break;
        }

    }
    if(taut)
        cout<<"taut"<<endl;


    bool cont=false;
    for(int i = 0; i <= 3; i++)
    {
        if(!ar[i])
        {
            cont=true;

        }
        else
        {
            cont=false;
            cout<<"not contradiction"<<endl;;
            break;
        }

    }
    if(cont)
        cout<<"taut"<<endl;


        if(!taut&&!cont)
            cout<<"contengency"<<endl;


    return 0;
}
