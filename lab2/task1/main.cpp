#include <iostream>

using namespace std;

int main()
{
    string testInp;
    cout<<"enter testing string"<<endl;
    cin>>testInp;

    bool check = true;
    for (char a : testInp){
        if(a<='0' || a>='9'){
           check=false;
            break;
        }
    }
    if(check==true){
        cout<<"numeric constant"<<endl;

    }else{
    cout<<"not numeric"<<endl;
    }
    return 0;
}
