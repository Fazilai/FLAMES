#include <iostream>
#include<string>
using namespace std;
void FLAMES(int);
int main()
   {
    string s1,s2;
   char ch;
   int i,j,l1,l2,match,um;
   match=um=0;
   cout<<"Enter name 1\n";
   cin>>s1;
   cout<<"Enter name 2\n";
   cin>>s2;
   l1 = s1.size(); 
   l2 = s2.size();
   for(i=0;i<l1;i++)
      {
      ch=s1[i]; 
      for(j=0;j<l2;j++)
         {
         if(ch==s2[j]) 
            {
             s1[i]=s2[j]='0';
            match=match+2;
           break;
            }
            }
            }
         um=l1+l2-match;
         cout<<"Unmatched letters = "<<um<<endl;
       FLAMES(um); 
       return 0;
}

   
       
       
void FLAMES(int um)
   {
   string s1 = "FLAMES";
   int i,j,um1,pos=0;
   um1=um;
   if(um>6)
      um1=um1%6;
   s1.erase(um1-1,1);
   pos=um1-1;
   do
   {
   for(i=pos,j=0;j<um;i++,j++)
      {
         if(s1[i]=='\0')
            i=0;
        pos=i;
      }
    s1.erase(pos,1);
   }while(s1.size()!=1);
   cout<<"VALUE = "<<s1<<endl;
   }
