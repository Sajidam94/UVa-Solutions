#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    cin>>a;

    for(int i=0; i<a; i++)
    {
        cin>>b>>c;

        if(b>c) cout<<">"<<endl;
        else if(b<c) cout<<"<"<<endl;
        else if(b==c) cout<<"="<<endl;
    }

    return 0;
}
