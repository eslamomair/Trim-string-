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
string TrimLeft(string S1)
{
    for (short i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ')
        {
            return    S1. substr(  i ,( S1.length()  - i  )) ;
        }              
    }
   
    return "";
}
string TrimRight(string S1)
{
    for (int  i = S1.length(); i > 0; i--)
    {
        if (S1[i]!=' ')
        {
            return S1.substr(S1.length() - i,i);
        }
    }
    return"";
}
string Print(string S1 )
{
     
    return TrimLeft(TrimRight(S1));
}
int main()
{
    string Namee = "     Ali Mohamed Ahmed            AS             ";


    cout << "String              =  " << Namee << endl;

    cout << "String trim  Left   =  " << TrimLeft(Namee) << endl;

    cout << "String trim  Right  =  " << TrimRight(Namee) << endl;

    cout << "String trim         =  " <<  Print(Namee );
}
