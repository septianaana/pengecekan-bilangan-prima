#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int bil,jum,i;
    cout<<"MASUKKAN BILANGAN BULAT POSITIF = ";
    cin>>bil;
    jum = 0;
    for (i=1;i<=bil;i++)
    if (bil%i==0)
    jum++;
    if (jum==2)
        cout<<"BILANGAN TERSEBUT ADALAH BILANGAN PRIMA\n";
    else
        cout<<"BUKAN BILANGAN PRIMA\n";
    return 0;
}
