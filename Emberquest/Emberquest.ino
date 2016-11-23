/*
 Emberquest by Rose Sheldon
 */
#include <MeggyJrSimple.h>
int jump = 0;
//boolean homescreen = true;
//boolean playerjump = false;
int direction = 0;
int p1y;
int p1x;
void setup() 
 {
    MeggyJrSimpleSetup();
 }

//MeggyJr_CustomColors.pde
void loop() 
 {
//  boolean homescreen = true;
  drawHome();
  p1x = 1;
  p1y = 0;
  drawPlayer();
  updatePlayer();
  DisplaySlate();
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
    DrawPx(3,4,Yellow);
    DrawPx(3,3,Yellow);
    DrawPx(4,4,Yellow);
    DrawPx(4,3,Yellow);
    DrawPx(0,0,Yellow);
    DrawPx(0,7,Yellow);
    DrawPx(7,0,Yellow);
    DrawPx(7,7,Yellow);
    DisplaySlate();
    boolean homescreen = true;
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
    DrawPx(0,0,Yellow); 
    DisplaySlate();
    boolean homescreen = false;
 }

void drawPlayer()
{
  DrawPx(p1x,p1y,Red);
  updatePlayer();
}
void updatePlayer()
{
  {
    CheckButtonsPress();
    if(Button_Up)
      direction = 0;
    if(Button_Down)
      direction = 180;
    if(Button_Left)
      direction = 270;  
    if(Button_Right)
      direction = 90;
  }
    if (direction == 0)
    {
    if (boolean homescreen = true)
      {
        if (p1y < 7)             // Corrects for out of bounds
          {
            if (ReadPx(p1x,(p1y + 1))==Green)
              {
              }
            else
              {
                p1y++;
              }
            if (ReadPx(p1x,(p1y + 1))==Orange)
              {
              }
            else
              {
                p1y++;
              }
               if (ReadPx(p1x,(p1y + 1))==Violet)
              {
              }
            else
              {
                p1y++;
              }
               if (ReadPx(p1x,(p1y + 1))==Blue)
              {
              }
            else
              {
                p1y++;
              }
            }
         else
            {
            }
          }
          drawPlayer();
          DisplaySlate();
      }
    if (direction == 180)
   {
    if (boolean homescreen = true)
    {
        if (p1y > 1)             // Corrects for out of bounds
          {
            if (ReadPx(p1x,(p1y - 1))==Green)
              {
              }
            else
              {
                p1y--;
              }
            if (ReadPx(p1x,(p1y - 1))==Orange)
              {
              }
            else
              {
                p1y--;
              }
               if (ReadPx(p1x,(p1y - 1))==Violet)
              {
              }
            else
              {
                p1y--;
              }
               if (ReadPx(p1x,(p1y - 1))==Blue)
              {
              }
            else
              {
                p1y--;
              }
            }
         else
            {
            }
      }
      drawPlayer();
      DisplaySlate();
   }
    if (direction == 270)
    {
        if (p1x > 1)             // Corrects for out of bounds
          {
            if (ReadPx((p1x - 1),p1y)==Green)
              {
              }
            else
              {
                p1x--;
              }
            if (ReadPx((p1x - 1),p1y)==Orange)
              {
              }
            else
              {
                p1x--;
              }
               if (ReadPx((p1x - 1),p1y)==Violet)
              {
              }
            else
              {
                p1x--;
              }
               if (ReadPx((p1x - 1),p1y)==Blue)
              {
              }
            else
              {
                p1x--;
              }
            }
         else
            {
            }
      }
      drawPlayer();
      DisplaySlate();
      
    if (direction == 90)
     {
        if (p1x < 7)             // Corrects for out of bounds
          {
            if (ReadPx((p1x + 1),p1y)==Green)
              {
              }
            else
              {
                p1x++;
              }
            if (ReadPx((p1x + 1),p1y)==Orange)
              {
              }
            else
              {
                p1x++;
              }
               if (ReadPx((p1x + 1),p1y)==Violet)
              {
              }
            else
              {
                p1x++;
              }
               if (ReadPx((p1x + 1),p1y)==Blue)
              {
              }
            else
              {
                p1x++;
              }
              if (ReadPx((p1x + 1),p1y)==White)
              {
              }
            else
              {
                p1x++;
              }
            }
         else
            {
            }
      }
      drawPlayer();
      DisplaySlate();
   if (boolean homescreen = true)
   {
    if ((p1x == 7) && (p1y == 7))
    drawLevelA();
    DisplaySlate();
   }
}


