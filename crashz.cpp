#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdio.h>
class user
{
public:
charuname[20],pass[20];
}u1;

char give[200],mname[20],gname[20],me[20],guy[20],word[100],choice,passw[20];
longptr,pos;
void function()
{
fstreamfm;                     fstreamfg;
strcpy(me,mname);              strcpy(guy,gname);
strcat(me,gname);               strcat(guy,mname);
strcat(me,".txt");              strcat(guy,".txt");
cout<<"Chat between "<<mname<<" and "<<gname<<'\n';
cout<<"\nYour friend's chat summary:\n";
fg.open(guy,ios::in|ios::app);

fg.seekg(0);
while(!fg.eof())
{
fg.getline(word,100);
puts(word);
ptr=fg.tellg();
}
fg.close();
int flag=1;
while(flag)
{
cout<<mname<<':'<<'\n';
gets(give);
fm.open(me,ios::in|ios::out|ios::app);
if(strcmp(give,"exit")==0)
flag=0;
else
{
fm<<mname<<':';
for(int i=0;i<strlen(give);i++)
{
fm<<give[i];
if(strcmp(give,"exit")==0)
flag=0;
}}
fm<<'\n';
fm.close();
fg.close();
char b[100];char ch2;
fg.open(guy,ios::in,ios::app);
fg.seekg(0);
while(!fg.eof())
{
fg>>ch2;
pos=fg.tellg();
}fg.close();
if(ptr!=pos)
{
fg.open(guy,ios::in,ios::app);
fg.seekg(ptr);
while(!fg.eof())
{fg.getline(b,100);
puts(b);
}
}
ptr=pos;
fg.close();
}
}

int main()
{
clrscr();
fstream f;
cout<<"\t\t***** WELCOME TO CRASHZ(Pvt.Ltd)*****\n";
f.open("signinup.txt",ios::out|ios::in|ios::app);
l:cout<<"Want to Sign in (i) ??  OR\n";
cout<<"Want to Sign up (u) ??\n";
cin>>choice;
if(choice=='i')
{
clrscr();
cout<<"\t\t***** WELCOME TO CRASHZ(Pvt.Ltd)*****\n";
cout<<"\nEnter your Name : ";
cin>>mname;
cout<<"\nEnter your password : ";
intfu=1;
intctw=0,ctg=0;
charcu,w[15];
while(fu)
{ctg++;
cin>>cu;
if(cu=='/')
fu=0;
else
{clrscr();
cout<<"\t\t***** WELCOME TO CRASHZ(Pvt.Ltd)*****\n";
cout<<"\nEnter your Name : "<<mname ;

cout<<"\n\nEnter your password : ";


for(int i=1;i<=ctg;i++)
cout<<'*';
w[ctw]=cu;ctw++;
}

}
w[ctw]='\0';
cout<<w;
strcpy(passw,w);
f.seekg(0);
while(!f.eof())
{
f.read((char*)&u1,sizeof(u1));
if(strcmp(u1.uname,mname)==0&&strcmp(u1.pass,passw)==0)
{
clrscr();
cout<<"\n--You are logged into your account--";goto e;
}
}
cout<<"\nYour account does not exist (or) incorrect password.";
cout<<"\nBut we invite you to CRASHZ(Pvt.Ltd)";
getch();return 1;
}
else
{
clrscr();
cout<<"\t\t***** WELCOME TO CRASHZ(Pvt.Ltd)*****\n";
cout<<"\nYour account will be opened shortly...";
cout<<"\nEnter your Name : ";
cin>>mname;
cout<<"\nEnter your new password : ";
cin>>passw;
clrscr();
cout<<"\n--You are logged into your account--";
f.seekg(0);
while(!f.eof())
{
f.read((char*)&u1,sizeof(u1));
if(strcmp(u1.uname,mname)==0)
{
cout<<"\nWe have got a guy with the same name.";
cout<<"\nHelp us by giving another name\n";
goto l;
}
}
strcpy(u1.uname,mname);
strcpy(u1.pass,passw);
f.close();
f.open("signinup.txt",ios::out|ios::in|ios::app);
f.write((char*)&u1,sizeof(u1));
f.close();
}
e:cout<<"\nUsers of CRASHZ :\n";
fstream f1;
f1.open("signinup.txt",ios::out|ios::in|ios::app);
f1.seekg(0);
int v;
while(!f1.eof())
{
cout<<u1.uname;
f1.read((char*)&u1,sizeof(u1));
v=strlen(u1.uname);
if(f1.eof())
{
for(int i=0;i<v;i++)
{
cout<<'\b';
}
}
cout<<'\n';
}
cout<<"Pick the guy you want to chat with : ";
f1.close();
cin>>gname;
f1.open("signinup.txt",ios::out|ios::in|ios::app);
f1.seekg(0);
while(!f1.eof())
{
f1.read((char*)&u1,sizeof(u1));
if(strcmp(u1.uname,gname)==0)
{
goto l1;
}
}
cout<<"\nThe guy hasn't yet come to CRASHZ.";
cout<<"\nCRASHZ team invites guys in the network";
getch();return 1;
l1:f1.close();
function();
cout<< "\n\t********** Thanks for using CRASHZ **********";
return 1;
}
