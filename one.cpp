//first program
/*#include<iostream>
int main()
{
   std::cout<<"hello world";

    return 0;
}
*/

/*program to add 2 numbers*/\
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 2 no";
    cin>>a>>b; //notice no commas bw a and b
    c=a+b;
    cout<<"addition is"<<c;
    return 0;
}

//program to accept the name and display the name
#include<iostream>
using namespace std;
int main()
{
    string a;
    cout<<"Enter your name: ";
    cin>>a;
    //incase we have a long name,string takes only forst name
    //instead we can use the below commented part after uncommenting ,for the above purpose
    //getline(cin,a);
    cout<<"YOUR NAME IS: "<<a;
    return 0;
}
//hellooo