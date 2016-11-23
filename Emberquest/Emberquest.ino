
#include <MeggyJrSimple.h>
boolean homescreen = true;
int direction = 0;
int p1y = 1;
int p1x = 0;
void setup() 
 {
    MeggyJrSimpleSetup();
 }

void loop() 
 {
  drawHome();
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
    homescreen = true;
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
    DisplaySlate();
    homescreen = false;
 }

void drawPlayer()
{
  DrawPx(p1x,p1y,Red);
  updatePlayer();
  DisplaySlate();
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
    if (homescreen == true)
      {
        if (p1y < 7)             // Corrects for out of bounds
          {
            if (ReadPx(p1x,(p1y + 1))!=Green)
              {
                p1y++;
              }
            if (ReadPx(p1x,(p1y + 1))!=Orange)
              {
                p1y++;
              }
               if (ReadPx(p1x,(p1y + 1))!=Violet)
              {
                p1y++;
              }
               if (ReadPx(p1x,(p1y + 1))!=Blue)
              {
                p1y++;
              }
                if (ReadPx(p1x,(p1y + 1))==Yellow)
              {
                ClearSlate();
                drawLevelA();
                drawPlayer();
                p1x = 1;
                p1y = 1;
                DisplaySlate();
              }
            }
          DisplaySlate();
      }
      }
      
    if (direction == 180)
  {
    if (homescreen == true)
  {
        if (p1y > 1)             // Corrects for out of bounds
          {
            if (ReadPx(p1x,(p1y - 1))!=Green)
              {
                p1y--;
              }
            if (ReadPx(p1x,(p1y - 1))!=Orange)
              {
                p1y--;
              }
               if (ReadPx(p1x,(p1y - 1))!=Violet)
              {
                p1y--;
              }
               if (ReadPx(p1x,(p1y - 1))!=Blue)
             {
                p1y--;
              }
                if (ReadPx(p1x,(p1y - 1))!=Yellow)
              {
                p1y--;
              }
      
      DisplaySlate();
          }
  }
   }

    if (direction == 270)
    {
        if (p1x > 1)             // Corrects for out of bounds
          {
            if (ReadPx((p1x - 1),p1y)!=Green)
              {
                p1x--;
              }
            if (ReadPx((p1x - 1),p1y)!=Orange)
              {
                p1x--;
              }
               if (ReadPx((p1x - 1),p1y)!=Violet)
             {
                p1x--;
              }
               if (ReadPx((p1x - 1),p1y)!=White)
              {
                p1x--;
              }
              if (ReadPx((p1x - 1),p1y)==Blue)
              {
                ClearSlate();
                drawHome();
                DisplaySlate();
              }
              if (ReadPx((p1x - 1),p1y)==Yellow)
              {
                ClearSlate();
                drawLevelA();
                DisplaySlate();
              }
      }
      DisplaySlate();
    }  
    if (direction == 90)
     {
        if (p1x < 7)             // Corrects for out of bounds
          {
            if (ReadPx((p1x + 1),p1y)!=Green)
             {
                p1x++;
              }
              
              if (ReadPx((p1x + 1),p1y)!=Orange)
              {
                p1x++;
              }
              
              if (ReadPx((p1x + 1),p1y)!=Violet)
              {
                p1x++;
              }
              
              if (ReadPx((p1x + 1),p1y)!=White)
              {
                p1x++;
              }
              
              if (ReadPx((p1x + 1),p1y)==Blue)
              {
                ClearSlate();
                drawHome();
                DisplaySlate();
              }
              
              if (ReadPx((p1x + 1),p1y)==Yellow)
              {
                ClearSlate();
                drawLevelA();
                DisplaySlate();
              }
      }
      DisplaySlate();
     }
}



