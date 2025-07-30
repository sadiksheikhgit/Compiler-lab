#include <iostream>

using namespace std;

int main()
{
    string testInp;
    cout << "Enter testing string" << endl;
    getline(cin,testInp);

    bool test=false;

    for(int i=0; i<testInp.length();i++){
        if(testInp[i]=='/' && testInp[i+1]=='/'){
            test=true;
            cout<<"single line commment"<<endl;

        }
        if(testInp[i]=='/' && testInp[i+1]=='*'){
            test=true;
            cout<<"multi line commment"<<endl;

        }
    }
    if(!test){
        cout<<"no comment"<<endl;
    }
    return 0;
}
