
#include <MeggyJrSimple.h>
boolean homescreen = true;
int p1y = 1;
int p1x = 0;
int obs1y = 1;
int obs1x = 0;
void setup() 
 {
    MeggyJrSimpleSetup();
 }

void loop() 
 {
  drawHome();
  CheckButtonsPress();
  if(Button_Up)
  {
    if (homescreen == true) // Up button function in homescreen causes player to move up one, which is different from its function in the maze, as that is a side view and causes the player to jump
        {
          if (p1y < 8)    // Out of bounds
            {
              p1y = p1y +1;
            }
        }
  }
           
  if(Button_Down)
  {
        if (homescreen == true)
          {
             if (p1y > 0) 
                {
                  p1y--;
               }
          }
     }

  if(Button_Left)
  {
    if (p1x > 0)             // Corrects for out of bounds
      {
        p1x--;
      }
  }
      
  if(Button_Right)
     {
        if (p1x < 8)             // Corrects for out of bounds
          {
          p1x++;  
      }
     }
 drawPlayer();
 DisplaySlate();
 delay(100);
 ClearSlate();
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
    homescreen = false;
 }

void drawPlayer()
  {
    DrawPx(p1x,p1y,Red);
  }
  



