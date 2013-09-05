#include <iostream.h>
#include <conio.h>
#include <process.h>
#include <ctype.h>
#include <iomanip.h>
void main()
{
    clrscr();
    int x = 1, y = 1, n = 0;
    char c;
    cout<<"Fill The Dashes With The Unsolved Sudoku Numbers"<<endl;
    cout<<"Then Press Z To Solve And Press E To Finish"<<endl;
    // Use asdf to navigate through the 9x9 grid. Enter numbers where necessary. Use 'e' to exit
    cout<<"-------------------------"<<endl;
    cout<<"|"<<setw(8)<<"|"<<setw(8)<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<setw(8)<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<setw(8)<<"|"<<setw(8)<<"|"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"|"<<setw(8)<<"|"<<setw(8)<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<setw(8)<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<setw(8)<<"|"<<setw(8)<<"|"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"|"<<setw(8)<<"|"<<setw(8)<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<setw(8)<<"|"<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"|"<<setw(8)<<"|"<<setw(8)<<"|"<<endl;
    cout<<"-------------------------"<<endl;
    while (c != 'e')
    {
	c = getch();
	if (c == 'e')
	exit(0);
	else
	{
	    if (c == 'a' || c == 's' || c == 'd' || c == 'w')
	    {
		switch (c)
		{
		    case 'a':if (x > 1)
			     {
				x--;
				if(x==23)
				x=21;
				if(x==20)
				x=18;
				if(x==17)
				x=16;
				if(x==15)
				x=13;
				if(x==12)
				x=10;
				if(x==9)
				x=8;
				if(x==7)
				x=5;
				if(x==4)
				x=2;
				if(x==1)
				x=24;
			     }
			     else
			     x = 24;
			     if(y==1 || y==2 || y==3)
			     y=4;
			     break;
		    case 's':if (y < 14)
			     {
				 y++;
				 if(y==1 || y==2 || y==3)
				 y=4;
				 if(y==7)
				 y++;
				 if(y==11)
				 y++;
				 if(y==15)
				 y=4;
			     }
			     else
			     y = 4;
			     break;
		    case 'd':if (x < 25)
			     {
				x++;
				if(x==3)
				x=5;
				if(x==6)
				x=8;
				if(x==9)
				x=10;
				if(x==11)
				x=13;
				if(x==14)
				x=16;
				if(x==17)
				x=18;
				if(x==19)
				x=21;
				if(x==22)
				x=24;
				if(x==25)
				x=2;
			     }
			     else
			     x = 2;
			     if(y==1 || y==2 || y==3)
			     y=4;
			     break;
		    case 'w':if (y > 1)
			     {
				 y--;
				 if(y==15)
				 y--;
				 if(y==11)
				 y--;
				 if(y==7)
				 y--;
				 if(y==1 || y==2 || y==3)
				 y=14;
			     }
			     else
			     y = 14;
			     break;
		}
		gotoxy(x, y);
	    }
	    else if (isdigit(c))
	    {
		cout<<c;
	    }
	    else if (c == 'g')
	    {
		clrscr();
		cout<<x<<","<<y<<","<<n;
	    }
	}
    }
    getch();
}