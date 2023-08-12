#include <iostream>
#include <vector>
#include <string.h>

using namespace std;
#include <algorithm>
/*string defangipaddr(string address)
{    string str;
        for(int i=0;i<address.size();i++){
            if(address[i]=='.'){
                str+='[';
                str+='.';
                str+=']';
            }
            else
            str+=address[i];
        }
        return str;
}*/
int main()
{ 
    string address =  "0121.1.1.1";
    cout<<defangipaddr(address);
}