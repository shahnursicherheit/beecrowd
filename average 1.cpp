#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b;
    cin>>a>>b;
    if(a<=10&&a>=0&&b<=10&&b>=0)
    {
        float x;
        x=((a*3.5+b*7.5)/(3.5+7.5));
        cout<<"MEDIA = "<<fixed<<setprecision(5)<<x<<endl; // fixed use to fixing the point to start 
    }                                                      // and setprecision use to how many number we need
    return 0;
}