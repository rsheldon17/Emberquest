/*
 Emberquest by Rose Sheldon
 */
#include <MeggyJrSimple.h>
int jump = 0;
boolean homescreen = true;
int direction = 0;
int n = 7;
int m = 3;
struct Point
{
  int x;
  int y;
};
Point p1 = {n,m};
void setup() 
 {
    MeggyJrSimpleSetup();
 }

//MeggyJr_CustomColors.pde
void loop() 
 {
  {
    byte i,j;
    i = 0;
    while (i < 16)
    {
      j = 16 - i;
      EditColor(CustomColor0, i, 0, j); 
      EditColor(CustomColor7, j, 0, i);
      delay(100);                  // wait 100 milliseconds
      drawHome();
      DisplaySlate();                  // Write the drawing to the screen. 
      i++;
    }
      delay(500);                  // wait 500 milliseconds
   
    while (i > 0)
    {
      j = 16 - i;
      EditColor(CustomColor0, i, 0, j); 
      EditColor(CustomColor7, j, 0, i);
      delay(100);                  // wait 100 milliseconds
      drawHome();
      DisplaySlate();                  // Write the drawing to the screen. 
      i--;
    }
      delay(500);                  // wait 500 milliseconds
  }
  {
  if (jump > 0)
  {
    updateJump();
  }
}
 }

void drawHome() 
 {
    DrawPx(3,5,Blue);
    DrawPx(4,5,Blue);
    DrawPx(5,4,Violet);
    DrawPx(5,3,Violet);
    DrawPx(4,2,Orange);
    DrawPx(3,2,Orange);
    DrawPx(2,3,Green);
    DrawPx(2,4,Green);
    DrawPx(3,4,CustomColor0);
    DrawPx(3,3,CustomColor0);
    DrawPx(4,4,CustomColor0);
    DrawPx(4,3,CustomColor0);
    DrawPx(0,0,CustomColor7);
    DrawPx(0,7,CustomColor7);
    DrawPx(7,0,CustomColor7);
    DrawPx(7,7,CustomColor7);
 }
  
void drawLevelA()
 {
    DrawPx(3,4,White);
    DrawPx(4,4,White);
    DrawPx(5,4,White);
    DrawPx(6,4,White);
    DrawPx(7,4,White);
    DrawPx(4,1,White);
    DrawPx(3,1,White);
    DrawPx(2,1,White);
    DrawPx(1,1,White);
    DrawPx(0,1,White);
    DrawPx(0,3,White);
    DrawPx(0,2,White);
    DrawPx(1,2,White);
    DrawPx(0,6,White);
    DrawPx(1,6,White);
    DrawPx(2,6,White);
    DrawPx(3,6,White);
    DrawPx(4,6,White);
    DrawPx(0,7,Blue);
    DrawPx(0,0,CustomColor7); 
 }
  
void drawLevelB()
 {
    DrawPx(3,4,White);
    DrawPx(4,4,White);
    DrawPx(5,4,White);
    DrawPx(6,4,White);
    DrawPx(7,4,White);
    DrawPx(4,1,White);
    DrawPx(3,1,White);
    DrawPx(2,1,White);
    DrawPx(1,1,White);
    DrawPx(0,1,White);
    DrawPx(0,3,White);
    DrawPx(0,2,White);
    DrawPx(1,2,White);
    DrawPx(0,6,White);
    DrawPx(1,6,White);
    DrawPx(2,6,White);
    DrawPx(3,6,White);
    DrawPx(4,6,White);
    DrawPx(0,7,Blue);
    DrawPx(0,0,CustomColor7); 
 }
void updateJump()
{
  if (homescreen = true)
    {
      if (jump < 5)
        {
          jump++;
        }
      else
        {
       (jump = 0);
        }
    }
    {
      if (jump < 3)
      {
        p1.y++;
      }
      else 
      {
        p1.y--;
      }
    }
}
