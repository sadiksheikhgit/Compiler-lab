#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main()
{
    string filePath = R"(D:\AIUB\sem8\mid\compiler\lab\lab3\test.txt)";
    ifstream inputFile(filePath);
    if (!inputFile.is_open()){
        cout<<"not open"<<endl;
    }

    string checkInp;
    string var[]={"int","char", "float", "double","for","while", "if", "else"};
    string cons[]={"1","2","3"};
    string punc[]={"(",")",",","[","]"};
    while(getline(inputFile,checkInp)){
        bool validId = true;
        bool validKey = false;
        bool constant=false;
        bool isPunc=false;

        for(char a:checkInp){
    if((a>='a'&& a<='z')||(a>='A'&& a<='Z')||a=='_'||(a>='0'&& a<='9')){
        continue;
    }
   }

    for (string ab:var){
        if(checkInp==ab){
            validKey=true;
            break;
        }
    }
    for (string ab:cons){
        if(checkInp==ab){
            constant=true;
            break;
        }
    }for (string ab:punc){
        if(checkInp==ab){
            isPunc=true;
            break;
        }
    }

     if(!(checkInp[0]>='a'&& checkInp[0]<='z')&&!(checkInp[0]>='A' && checkInp[0]<='Z')&&(checkInp[0]>='0'&& checkInp[0]<='9')&&checkInp[0] != '_'  ){
        validId=false;
    }

   if(validKey){
    cout<<checkInp<< " :keyword"<<endl;;
   }
   else if(validId){
        cout<<checkInp<< " : identifier"<<endl;
   }else if(constant){
   cout<<checkInp<<" :constant"<<endl;
   }else if(isPunc){
    cout<<checkInp<<" :punctuation"<<endl;
   }
   else{
   cout<<checkInp<<":not valid input"<<endl;
   }



    }
    inputFile.close();
    return 0;
}
