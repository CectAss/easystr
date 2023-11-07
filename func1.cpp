#include <iostream>
#include <string>

using namespace std;

string itc_hello_str(string str)
{
    return "Hello, "+str;
}

long long itc_len(string str)
{
    return str.length();
}

void itc_print_copy_str(string str, int num)
{
    string a;
    for(int i = 0; i<num; i++)
    {
        a+=str;
    }
    cout << a;
}

void itc_first_end_three(string str)
{
    if(str.length()>5)
    {
        cout << str[0]<<str[1]<<str[2]<<str[str.length()-3]<<str[str.length()-2]<<str[str.length()-1];
    }
    else
    {
        for(int i = 0; i<str.length(); i++)
        {
            cout << str[0];
        }
    }
}

int itc_count_char_in_str(char ch, string str)
{
    int temp = 0;
    for(int i = 0; i<str.length(); i++)
    {
        if(str[i]==ch)
        {
            temp++;
        }
    }
    return temp;
}