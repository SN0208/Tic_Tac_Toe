#include <iostream>

using namespace std;
string name1,name2;

int check(char a[][3],int count)
{
   int t=count%2;

  if(a[0][0]==a[0][1] && a[0][0]==a[0][2])
  {
      if(t) cout<<endl<<endl<<"****** "<<name1<<" is the winner ******"<<endl;
      else  cout<<endl<<endl<<"****** "<<name2<<" is the winner ******"<<endl;
      return 0;
  }
  else if(a[1][0]==a[1][1] && a[1][0]==a[1][2])
  {
     if(t) cout<<endl<<endl<<"****** "<<name1<<" is the winner ******"<<endl;
      else  cout<<endl<<endl<<"****** "<<name2<<" is the winner ******"<<endl;
      return 0;
  }
   else if(a[2][0]==a[2][1] && a[2][0]==a[2][2])
  {
     if(t) cout<<endl<<endl<<"****** "<<name1<<" is the winner ******"<<endl;
      else  cout<<endl<<endl<<"****** "<<name2<<" is the winner ******"<<endl;
      return 0;
  }
   else if(a[0][0]==a[1][0] && a[0][0]==a[2][0])
  {
    if(t) cout<<endl<<endl<<"****** "<<name1<<" is the winner ******"<<endl;
      else  cout<<endl<<endl<<"****** "<<name2<<" is the winner ******"<<endl;
      return 0;
  }
  else if(a[0][1]==a[1][1] && a[0][1]==a[2][1])
  {
     if(t) cout<<endl<<endl<<"****** "<<name1<<" is the winner ******"<<endl;
      else  cout<<endl<<endl<<"****** "<<name2<<" is the winner ******"<<endl;
      return 0;
  }
  else if(a[0][2]==a[1][2] && a[0][2]==a[2][2])
  {
     if(t) cout<<endl<<endl<<"****** "<<name1<<" is the winner ******"<<endl;
      else  cout<<endl<<endl<<"****** "<<name2<<" is the winner ******"<<endl;
      return 0;
  }
  else if(a[0][0]==a[1][1] && a[0][0]==a[2][2])
  {
     if(t) cout<<endl<<endl<<"****** "<<name1<<" is the winner ******"<<endl;
      else  cout<<endl<<endl<<"****** "<<name2<<" is the winner ******"<<endl;
      return 0;
  }
  else if(a[0][2]==a[1][1] && a[0][2]==a[2][0])
  {
     if(t) cout<<endl<<endl<<"****** "<<name1<<" is the winner ******"<<endl;
      else  cout<<endl<<endl<<"****** "<<name2<<" is the winner ******"<<endl;
      return 0;
  }
  else if(a[0][0]=='1' || a[0][1]=='2' || a[0][2]=='3' || a[1][0]=='4' || a[1][1]=='5' || a[1][2]=='6' || a[2][0]=='7' || a[2][1]=='8' || a[2][2]=='9')
  {
      return 1;
  }
  else
  {
      cout<<endl<<"******GAME DRAW********"<<endl;
      return 0;
  }
}

void draw(char a[][3])
{
    cout<<endl;
    cout<<"       |       |       "<<endl;;
    cout<<"   "<<a[0][0]<<"   |   "<<a[0][1]<<"   |   "<<a[0][2]<<"   "<<endl;
    cout<<"       |       |       "<<endl;
    cout<<"-------+-------+-------"<<endl;
    cout<<"       |       |       "<<endl;;
    cout<<"   "<<a[1][0]<<"   |   "<<a[1][1]<<"   |   "<<a[1][2]<<"   "<<endl;
    cout<<"       |       |       "<<endl;
    cout<<"-------+-------+-------"<<endl;
    cout<<"       |       |       "<<endl;;
    cout<<"   "<<a[2][0]<<"   |   "<<a[2][1]<<"   |   "<<a[2][2]<<"   "<<endl;
    cout<<"       |       |       "<<endl;
    //cout<<"-------+-------+-------"<<endl;

}

void move(char a[][3])
{
    int key;static int count=0;
    cin>>key;
    count=count+1;
    int r,c;
    while(key<1 || key>9)
    {
        cout<<"Please enter correct key ";
        cin>>key;
    }
   if(key%3==0)
   {
       r=(key/3)-1;
       c=2;
   }
   else
   {
       r=key/3;
       c=(key%3)-1;
   }
   while(a[r][c]=='X' || a[r][c]=='O')
   {
       cout<<"Enter key which is unoccupied ";
       cin>>key;
       if(key%3==0)
   {
       r=(key/3)-1;
       c=2;
   }
   else
   {
       r=key/3;
       c=(key%3)-1;
   }
   }

   if(count%2!=0)
   {
      a[r][c]='X';
   }
   else
   {
     a[r][c]='O';
   }
   draw(a);
   int s=check(a,count);
   if(s)
   {
       if(count%2)
       {
          cout<<name2<<"'s turn : press key ";
          move(a);
       }
       else
       {
          cout<<name1<<"'s turn : press key ";
          move(a);
       }
   }
}

int main()
{
    int game=1;
    while(game)
    {
   char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
   cout<<"welcome to tic tac toe game"<<endl;
   cout<<"Enter player 1 name :";
   cin>>name1;
   cout<<"Enter player 2 name :";
   cin>>name2;
   draw(a);
   cout<<name1<<"'s turn : press key ";
   move(a);
   cout<<endl<<endl<<"To play another game , Press 1 else Press 0 "<<endl;
   cin>>game;
   cout<<endl;
    }

}


