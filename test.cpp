#include<iostream>
using namespace std;

int main()
{
    string str = "NIMIT O!!!!!!!!!!!!!ZA";
    string str1 = "";
    for(int i = 0; i<str.size(); i++)
    {
        str[i] = tolower(str[i]);
    }
    
    cout<<str<<endl;
    return 0;

}