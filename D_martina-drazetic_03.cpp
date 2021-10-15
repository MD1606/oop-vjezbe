//3. Napisati iterativnu funkciju za traženje najveæeg i najmanjeg broja u nizu
#include <iostream>
#include <iomanip>
int maxx(int niz[])
{
   int a;
   int najveci=niz[0];
   for(a=1;a<5;a++)
   {if(niz[a]>najveci)
   najveci=niz[a];
   }

   return najveci;

}
int minn(int niz[])
{
   int a;
   int najmanji=niz[0];
   for(a=1;a<5;a++)
   {if(niz[a]<najmanji)
   najmanji=niz[a];}

   return najmanji;

}
int main()
{
    int niz[]={2,5,1,8,10};
    std::cout<<"najveci broj u nizu je: "<<maxx(niz)<<std::endl;
    std::cout<<"najmanji broj u nizu je: "<<minn(niz);
   return 0;

}
