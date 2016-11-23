
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
  CheckButtonsPress();
  updatePlayer();
  if(Button_Up)
  {
    if (homescreen == true) // Up button function in homescreen causes player to move up one, which is different from its function in the maze, as that is a side view and causes the player to jump
        {
          if (ReadPx(p1x,(p1y + 1))!=Blue)
          {
            if (p1y < 8)    // Out of bounds
              {
                p1y = p1y +1;
              }
          }
        }
     else 
     {
      if (ReadPx(p1x,(p1y + 1))!=Blue)
          {
            if (p1y < 8)    // Out of bounds
            {
              p1y++;        // Jump
              delay(500);
              p1y++;
              delay(500);
              p1y--;
              delay(500);
              p1y--;
            }
     }
  }
  }
           
  if(Button_Down)
   {
    if (homescreen == true) // Up button function in homescreen causes player to move up one, which is different from its function in the maze, as that is a side view and causes the player to jump
        {
          if (ReadPx(p1x,(p1y - 1))!=Blue)
          {
            if (p1y > 0)    // Out of bounds
              {
                p1y = p1y - 1;
              }
          }
        }
   }

  if(Button_Left)
  {
    if (homescreen == true)
    {
      if (ReadPx((p1x-1),p1y)!=Blue)
        {
        if (p1x > 0)             // Corrects for out of bounds
          {
            p1x--;
          }
        }
    }
    else
      {
        if (ReadPx((p1x-1),p1y)!=White) 
         {
           if (p1x > 0) 
             {
                p1x--;
             }
         }
      }
  }
  
      
  if(Button_Right)
   {
    if (homescreen == true)
    {
      if (ReadPx((p1x+1),p1y)!=Blue)
        {
        if (p1x < 8)             // Corrects for out of bounds
          {
            p1x++;
          }
        }
    }
    else
      {
        if (ReadPx((p1x+1),p1y)!=White) 
         {
           if (p1x < 8) 
             {
                p1x++;
             }
         }
      }
  }
 drawPlayer();
 DisplaySlate();
 delay(100);
 ClearSlate();
  {
    if (homescreen == true)
    {
      drawHome();
    }
  }
 }

void drawHome() 
 {
    DrawPx(3,5,Blue);
    DrawPx(2,5,Blue);
    DrawPx(5,5,Blue);
    DrawPx(2,2,Blue);
    DrawPx(3,5,Blue);
    DrawPx(4,5,Blue);
    DrawPx(5,4,Blue);
    DrawPx(5,3,Blue);
    DrawPx(4,2,Blue);
    DrawPx(3,2,Blue);
    DrawPx(2,3,Blue);
    DrawPx(2,4,Blue);
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

void drawWinning()
  {
    DrawPx(3,5,Blue);
    DrawPx(2,5,Blue);
    DrawPx(5,5,Blue);
    DrawPx(5,2,Blue);
    DrawPx(2,2,Blue);
    DrawPx(3,5,Blue);
    DrawPx(4,5,Blue);
    DrawPx(5,4,Blue);
    DrawPx(5,3,Blue);
    DrawPx(4,2,Blue);
    DrawPx(3,2,Blue);
    DrawPx(2,3,Blue);
    DrawPx(2,4,Blue);
    DrawPx(3,4,Yellow);
    DrawPx(3,3,Yellow);
    DrawPx(4,4,Yellow);
    DrawPx(4,3,Yellow);
    DrawPx(0,0,Yellow);
    DrawPx(0,7,Yellow);
    DrawPx(7,0,Yellow);
    DrawPx(7,7,Yellow); 
  }

void drawGameWon1()
  {
    DrawPx(3,4,Yellow);
    DrawPx(3,3,Yellow);
    DrawPx(4,4,Yellow);
    DrawPx(4,3,Yellow);
    DrawPx(0,0,Yellow);
    DrawPx(0,7,Yellow);
    DrawPx(7,0,Yellow);
    DrawPx(7,7,Yellow); 
  }

void drawGameWon2()
  {
    // Taken from ColorDisplay
    for (int i = 0; i < 8; i++)
    {
      for (int j = 0; j <8; j++)
      {
        DrawPx(i,j,Green);
      }
    }
  }

void updatePlayer()
  {
    if (homescreen == true)
    {
      if (ReadPx(p1x,p1y)==Yellow) // If touching yellow, go to Level A screen
         {
            ClearSlate();
            drawLevelA();
            DisplaySlate();
            drawPlayer();
            p1x = 1;
            p1y = 1;
         }
    }
    else
    {
      if (ReadPx(p1x,p1y)==Blue) // If touching blue, go to winning screen
         {
            ClearSlate();
            drawWinning();
            delay(3000);
            drawGameWon1();
            delay(3000);
            drawGameWon2();
         }
    }
  }


