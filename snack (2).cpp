#include<iostream>
#include<conio.h>
#include<windows.h>
#include<time.h>
using namespace std;
void set(int x,int y);

void fruit();
void border();

int a,b,c,d=0,s=0,k=20,l=10,score=0,tail=0,i;
int *p=&a;
void input()
{
    if(kbhit())
    {
        switch(getch())
        {
            case 'd':
            p=&a;
            d=0;
            break;
            case 's':
            p=&b;
            d=0;
            break;
            case 'w':
            p=&b;
            d=1;
            
            break;
            case 'a':
            p=&a;
            d=1; 
             break;
             case 'x':
             s=1;
             break;
        }
    }
}
void snack()
{   Sleep(60);
      if(d!=1)
{   *p=*p+1;
 system("cls"); 
}
else
{
    *p=*p-1; 
    system("cls"); 

}
   
      set(10+a,10+b);
      cout<<"0 ";
      if(10+a>=24 || 10+a<=0 )
      {   Sleep(20);
         s=1;

      }
      else if(10+b>=14 || 10+b<=0)
      {  Sleep(20);
        s=1;
      }
      

      
      if(10+a==k && 10+b==l)
      { score=score+1;
        
        srand(time(0));
        k=rand()%20+1;
        l=rand()%10+1;
      }

      
      

}
void set(int x,int y)
{   HANDLE handle;
    COORD coor;
    handle=GetStdHandle(STD_OUTPUT_HANDLE);
     coor.X=x;
     coor.Y=y;
     SetConsoleCursorPosition(handle,coor);

}
void fruit()
{   
    set(k,l);
    cout<<"$";
}  //114 14//
void border()
{    set(0,0);
    cout<<"#########################\n"
        <<"#\t\t\t#  Score:"<<score<<"\n"                     
        <<"#\t\t\t# \n"                                                                   
        <<"#\t\t\t#\n"                                                             
        <<"#\t\t\t#      Rwtgaming (;\n"                                                                   
        <<"#\t\t\t#\n"                                                                   
        <<"#\t\t\t#\n"                                                                   
        <<"#\t\t\t#\n"                                                                   
        <<"#\t\t\t#\n"                                                                   
        <<"#\t\t\t#\n"                                                                   
        <<"#\t\t\t#\n"                                                                   
        <<"#\t\t\t#\n"                                                                   
        <<"#\t\t\t#\n"                                                                   
        <<"#\t\t\t#\n"                                                                   
        <<"#\t\t\t# Ankit Rawat :)  \n"
        <<"#########################################";
}

int main()
{    
      while(s!=1)
    {   border();
        input();
        snack();
        fruit();
        
               
    }
       system("cls");
        cout<<"Game Over :("<<endl<<"wait..";
        getch();
        Sleep(2000);
        cout<<"Your score is:"<<score<<endl<<"see you again! subscribe RWT gaming "<<endl<<endl<<"press any button to exit :)";
        getch();

    
    

    return 0;

}