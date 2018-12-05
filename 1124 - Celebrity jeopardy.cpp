#include <iostream>

using namespace std;

int main()
{
    string str;

    while(getline(cin, str))
    {
        for(int i=0; i<str.length();i++)
        {
            cout<<str.at(i);
        }
        cout<<endl;
    }



    return 0;
}
