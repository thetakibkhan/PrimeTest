#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    int k;
    ifstream f;
    f.open("input.txt");

    f>>k;

    int ff=0;
    for(int i=2;i<k;i++)
    {
        if(k%i==0)
        {
            ff=1;break;
        }
    }
    string s;
    if(ff)
    {
        s="Composite";
    }
    else
        s="Prime";

      ofstream m;
      m.open ("output.txt");
      m << s;
      m.close();

    return 0;
}

