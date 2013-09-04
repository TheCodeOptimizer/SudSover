/* thezillion */

#include <iostream.h>
#include <conio.h>
#include <process.h>
#include <ctype.h>

main() {
	clrscr();

	int x = 1, y = 1, n = 0;

	char c;

	// Use asdf to navigate through the 9x9 grid. Enter numbers where necessary. Use 'e' to exit

	while (c != 'e') {

		c = getch();
		if (c == 'e')
			exit(0);
		else {
			if (c == 'a' || c == 's' || c == 'd' || c == 'w') {
				switch (c) {
					case 'a':
						if (x > 1)
							x--;
						else
							x = 9;
						break;
					case 's':
						if (y < 9)
							y++;
						else
							y = 1;
						break;
					case 'd':
						if (x < 9)
							x++;
						else
							x = 1;
						break;
					case 'w':
						if (y > 1)
							y--;
						else
							y = 9;
						break;
				}
				gotoxy(x, y);
			} else if (isdigit(c)) {
				cout<<c;
			} else if (c == 'g') {
				clrscr();
				cout<<x<<","<<y<<","<<n;
			}
		}

	}

	getch();
}