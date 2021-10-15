//4. Napisati rekurzivnu funkciju za traženje najveæeg i najmanjeg broja u niz

#include <iostream>
#include <iomanip>

int maxx(int niz[],int a)
{
    if (a==1)
        return niz[0];
    return std::max(niz[a-1],maxx(niz, a-1));
}
int minn(int niz[],int a)
{
    if (a==1)
        return niz[0];
    return std::min(niz[a-1],minn(niz, a-1));
}

int main()
{
    int niz[]={2,5,1,8,10};
    int a=5;
    std::cout<<"najveci broj u nizu je: "<<maxx(niz,a)<<std::endl;
    std::cout<<"najmanji broj u nizu je: "<<minn(niz,a);
   return 0;

}

