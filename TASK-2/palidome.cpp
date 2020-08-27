#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
    string str;cin>>str;

    if(str.size()==1)
    {
        cout<<"No, it is not a palindrome as in english language single letter is not considered as a palindrome"<<endl;
        return 0;

    }
    
    std::stack<char> palindrome;
    for(int i =0; i<str.size(); i++)
    {
        palindrome.push(str[i]);

    }

    string temp;
    while(!palindrome.empty())
    {
        temp = temp + palindrome.top();
        palindrome.pop();
    }

    if(temp == str)
    {
        cout<<"yes it is a palindrome"<<endl;
    }
    else
    {
        cout<<"no,it is not a palindrome"<<endl;
    }
    
    return 0;
}