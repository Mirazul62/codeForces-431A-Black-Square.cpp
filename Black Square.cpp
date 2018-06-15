#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,a,b,c,d,sum=0;
    string s;
    cin>>a>>b>>c>>d;
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='1')
            sum+=a;
      else  if(s[i]=='2')
            sum+=b;
      else   if(s[i]=='3')
        sum+=c;
      else if(s[i]=='4')
        sum+=d;
    }
    cout<<sum;
}
