#include <iostream>

using namespace std;

int main()
{
   string checkInp;
   cout<<"write testing input:"<<endl;
   cin>>checkInp;

   string var[]={"int","char", "float", "double","for","while", "if", "else"};
   bool valid = true;
   for(char a:checkInp){
    if((a>='a'&& a<='z')||(a>='A'&& a<='Z')||a=='_'||(a>='0'&& a<='9')){
        continue;
    }else{
    valid=false;
    }
   }
   for (string ab : var){
    if(checkInp == ab){
        valid=false;
        break;
    }
   }

    if(!(checkInp[0]>='a'&& checkInp[0]<='z')&&!(checkInp[0]>='A' && checkInp[0]<='Z')&&(checkInp[0]>='0'&& checkInp[0]<='9')&&checkInp[0] != '_'  ){
        valid=false;
    }

   if(valid){
    cout<<"valid identifier"<<endl;
   }else{
   cout<<"not valid"<<endl;
   }


    return 0;
}
