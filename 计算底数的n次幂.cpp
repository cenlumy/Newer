#include<iostream>
using std::cin;
using std::cout;
int main()
{int base, exponent;
long result=1;
cout<<"Enter base and Exponent:"<<endl;
if(exponent<0)
{cout<<"Exponent can't be smaller than 0"<<endl;
return -1;
}
if(exponent>0)
{int cnt=1;cnt<=exponent;++cnt)
result*=base;
}
cout<<base
<<"Raiseed to the power of"
<<exponent
<<":"
<<result<<endl;
return 0;
}
 
