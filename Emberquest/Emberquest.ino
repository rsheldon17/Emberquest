/*
 Emberquest by Rose Sheldon
 */
void setup() {
#include <MeggyJrSimple.h>
int xcoord = 3;
int ycoord = 4;
}
//MeggyJr_CustomColors.pde
void DrawBlock(int x, int y)
{
  DrawPx(x,y, Blue)
}
void loop() {
  // put your main code here, to run repeatedly:
{
  byte i,j;
  i = 0;
  while (i < 15)
  {
    j = 15 - i;
    EditColor(CustomColor0, i, 0, j); 
    EditColor(CustomColor7, j, 0, i);
    delay(100);                  // wait 100 milliseconds
    DisplaySlate();                  // Write the drawing to the screen. 
    i++;
  }
    delay(500);                  // wait 500 milliseconds
 
  while (i > 0)
  {
    j = 15 - i;
    EditColor(CustomColor0, i, 0, j); 
    EditColor(CustomColor7, j, 0, i);
    delay(100);                  // wait 100 milliseconds
    DisplaySlate();                  // Write the drawing to the screen. 
    i--;
  }
    delay(500);                  // wait 500 milliseconds
}
  DrawPx(2,5,White);
  DrawPx(3,5,White);
  DrawPx(4,5,White);
  DrawPx(5,5,White);
  DrawPx(5,4,White);
  DrawPx(5,3,White);
  DrawPx(5,2,White);
  DrawPx(4,2,White);
  DrawPx(3,2,White);
  DrawPx(2,2,White);
  DrawPx(2,3,White);
  DrawPx(2,4,White);
  DrawPx(3,4,CustomColor0);
  DrawPx(3,3,CustomColor0);
  DrawPx(4,4,CustomColor0);
  DrawPx(4,3,CustomColor0);
  DrawPx(0,0,CustomColor7);
  DrawPx(0,7,CustomColor7);
  DrawPx(7,0,CustomColor7);
  DrawPx(7,7,CustomColor7);
  {
    // Maze_Game.pde
    CheckButtonsPress();
    if (Button_Right)
    {  
      if (xcoord < 7)
        xcoord = xcoord + 1; // Also xcoord++;
    }
    DrawPx(xcoord,ycoord,Red); // Draws Dot
    DisplaySlate();
    delay(150); 
    ClearSlate();
  }
}
