#include <iostream>
#include "str_easy.h"

using namespace std;

string itc_cmp_str(string str1, string str2, int num)
{
    string a;
    
    for (int i=0; i<str1.length(); i++)
    {
        if (i==num)
        {
          for (int j=0; j<str2.length(); j++)
            {
              a+=str2[j];
            }
        }
        a+=str1[i];
    }
  return itc_slice_str(a, 0, str1.length()-1);
}

int itc_find_str(string str1, string str2)
{
    for(int i=0; i<str1.length()-str2.length()+1; i++)
    {
        if (itc_slice_str(str1, i, i+str2.length()-1)==str2)
        {
            return i;
        }
    }
    return -1;
}

string itc_three_str(string str1, string str2, string str3)
{
    string a="";
    if (itc_find_str(str1, str2)==-1)
    {
        return str1;
    }
    while (itc_find_str(str1, str2)!=-1)
    {
        int temp=itc_find_str(str1, str2);
        for (int i=0; i<temp; i++)
        {
            a+=str1[i];
        }
        a+=str3;
        if (temp+str2.length()>str1.length()-1)
        {
            break;
        }
        str1=itc_slice_str(str1, temp+str2.length(), str1.length()-1);
    }
    if (itc_find_str(str1, str2)==-1)
    {
        for (int i=0; i<str1.length(); i++)
        {
            a+=str1[i];
        }
    }
    return answer;
}

int itc_max_char_on_end(string str)
{
    int a=0;
    int b=0;
    for (int i=1; i<str.length(); i++)
    {
        if (str[i]>='0' and str[i]<='9')
        {
            b++;
            if (b>a)
            {
                a=b;
            }    
        }
        else
        {
            b=0;
        }
    }
  return a;
}
