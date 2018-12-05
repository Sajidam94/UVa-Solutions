#include <iostream>
#include <string>
using namespace std;

int main ()
{

  string str;
  bool isOpen=true;


  while(getline(cin, str))
  {
     for (int index=0; index<str.length(); index++)
      {

          if(str.at(index)=='"')
          {
              if(isOpen) cout<<"``";

              else cout<<"''";

              isOpen=!isOpen;


          }


          else cout<<str.at(index);


      }
      cout<<endl;
  }
    return 0;
}



