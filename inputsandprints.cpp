#include <iostream>

using namespace std;

int main()
{
    string s;
    cout << "Enter the character in string\n";
    
    getline(cin,s); //you enter the character
    
    
    cout<<"you have enter:";
    cout<<s<<endl; //prints entered character
    
    s.push_back('Y');
    cout<<"after push : "<<s<<endl;//push the new character at the end of string
    
    s.pop_back();
    cout<<"after pop : "<<s<<endl;//pop the new character at the end of string

    return 0;
}