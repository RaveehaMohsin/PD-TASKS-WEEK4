#include <iostream>
#include <windows.h>
using namespace std;

void printmaze();
void gotoxy(int x, int y);
void playermove(int x, int y);

main()

{

system("cls");
printmaze();

int x = 4;
int y = 4;
while(true)
{
playermove(x,y);

if(y < 16 )

{ y = y + 1;}



if(y==16)

{gotoxy(x,y-1);
cout << " ";
y = 4 ;

}

Sleep(500);

}


}

void printmaze()

{

cout << " ############################################################ " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " #                                                          # " << endl;
cout << " ############################################################ " << endl;



}









void gotoxy(int x, int y)

{

COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}


void playermove(int x, int y)

{


gotoxy(x,y-1);
cout << " ";
gotoxy(x,y);
cout << "P";


}








