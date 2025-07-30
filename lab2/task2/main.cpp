#include <iostream>

using namespace std;

int main()
{
    string testInp;
    cout<<"enter testing string"<<endl;
    cin>>testInp;

    bool check=false;

    char op[]={'+','-','*','/','%','='};
    for(char a: testInp){
        for (char o :op){
            if(a==o){
                check=true;
                cout<< "Operator: "<< a<<endl;
            }
            /*else{
                //break;
                cout<<"no operator found"<<endl;
             break;
            }*/
        }

    }
    if(!check){
             cout<<"no operator found"<<endl;
        }

    return 0;
}
