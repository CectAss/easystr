#include <iostream>
#include <string>

using namespace std;

string itc_even_place(string str)
{
    string a;
    if(str.length()<2)
    {
        return "-1";
    }
    for(int i = 0; i<str.length(); i++)
    {
        if(i%2)
        {
            a+=str[i];
        }
    }
    return a;
}

double itc_percent_lower_uppercase(string str)
{
    int upper = 0;
    int lower = 0;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            upper++;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            lower++;
        }
    }
    return double(lower)/double(upper);
}

string itc_reverse_str(string str)
{
    string a;
    for(int i=str.length()-1; i>=0; i--)
    {
        a+=str[i];
    }
    return a;
}

string itc_slice_str(string str, int start, int end)
{
    if(end>str.length()-1)
    {
        end=str.length()-1;
    }
    if(start>end)
    {
        return str;
    }
    string a;
    for(int i = start; i <= end; i++)
    {
        a+=str[i];
    }
    return a;
}

bool itc_equal_reverse(string str)
{
    return(str==itc_reverse_str(str));
}