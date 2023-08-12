#include <iostream>
#include <vector>
#include <string.h>

using namespace std;
#include <algorithm>
////////////////  character function /////////////////

/*int getlength( char name[])
{   int i=0;
    int length =0;
    while ( name[i]!='\0')
    {
        length++;
        i++;
    }
    return length;

}*/

/*void reversechararray(char name[])
{
    int n = strlen(name);
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }
}*/

/*void replacespace(char sentence[])
{
    int i=0;
    int n=strlen(sentence);
    for(int i=0;i<n;i++)
    {
        if(sentence[i]==' ')
        {
            sentence[i]='@';
        }
    }

}
*/

/*bool checkpalindrome(char word[])
{
    int s=0;
    int n= strlen(word);
    int e=n-1;
    while (s<=e)
    {
        if(word[s]==word[e])
        {
            s++;
            e--;
        }
        else{
            return false;
        }
    }
    return true;
}
*/

/*void convertupper(char word[])
{
    int n=strlen(word);
    for(int i =0; i<n;i++)
    {   if(word[i]==' ')
    {
        continue;
    }
    else
        {word[i]=word[i]-'a'+'A';}
    }
}*/

/*string remove_stringduplicates(string s)
{
    string ans = " ";
    int i = 0;
    while (i < s.length())
    {
        if ((ans.length() - 1) > 0)
        {
            if (ans[ans.length() - 1] == s[i])
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
        else
        {
            ans.push_back(s[i]);
        }
        i++;
    }
    return ans;
}*/


/////////////////// strings functions /////////////////////

int main()

{ // char name[50];
  //   cout << "enter the name" << endl;
  //   ////////////   *********  cin.getline(name,20); ****************
  //   // cin.getline(name,50);
  //   cin.getline(name, 50);
  //   cout<<"----------------------------"<<endl;
  ////////////////////////////////////////////////////////////////////
  //  // cout<<"lenght is " << getlength(name)<<endl;
  //  // cout<<"length using function is"<<strlen(name);
  //  cout << name << endl;
  //      cout<<"----------------------------"<<endl;
  //
  //  cout << "name aftr revrsal is " << endl;
  //  reversechararray(name);
  //  cout << name;
  /////////////////////////////////////////////////////////////////////////
  // char sentence[100];
  // cout<<"enter the sentence;"<<endl;
  // cin.getline(sentence,100);
  // replacespace(sentence);
  // cout<<sentence;
  ///////////////////////////////////////////////////////////////
    /* cout<<"enter the string"<<endl;
     //char arr[100];
     char word[100];
     cin>>word;
     //strcpy(brr,arr);
     //cout<<"copied string is"<<endl;
     cout<<checkpalindrome(word);

     */
    ////char word[100];
    /// cout<<"enter the lower case letter "<<endl;

    /// cin.getline(word,100);
    // convertupper(word);
    /// cout<<word;
    // cout<<getlength(word);

    ///////////////////////////////////////

    /* vector<string> boss(5);
     for (int i = 0; i < boss.size(); i++)
     {
         cout << "enter the " << i << " string " << endl;
         cin >> boss[i];
     }
     for (int i = 0; i < boss.size(); i++)
     {
         cout << boss[i] << "          ";
     }*/
    // string x="god is great";
    // //string y ="loverb";
    //
    // //int k=x.compare(y);
    // //cout<<k<<endl;
    // cout<<x.find("great");
}