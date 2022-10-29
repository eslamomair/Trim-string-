#include <string>

#include <iostream>
using namespace std;
string ReadString()
{
    string S1;
    cout << "Please enter a string\n";
    getline(cin, S1);
    return S1;
}
string TrimLeft(string  S1 , string Delimr)
{
    short Pos = 0;
    string Sword;
    while ((Pos = S1.find(Delimr)) != std::string::npos)
    {
        Sword = S1.substr(0, Pos);
        if (Sword != "")
        {

        }
        S1.erase(0, Pos + Delimr.length());
    }
    if (S1!="")
    {

    }
    return S1;
    
}
int main()
{
    std::cout << "Hello World!\n";
}
