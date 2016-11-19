/*
 Emberquest by Rose Sheldon
 */
#include <MeggyJrSimple.h>
int jump = 0;
boolean homescreen = true;
boolean playerjump = false;
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
  drawHome();
  drawPlayer();
  //CustomColor
  {
    byte i,j;
    i = 0;
    while (i < 4)
      {
        j = 1 - i;
        EditColor(CustomColor0, i, 0, j); 
        EditColor(CustomColor7, j, 0, i);
        delay(100);                  // wait 100 milliseconds
        DisplaySlate();                  // Write the drawing to the screen. 
        i++;
      }
    }
      delay(500);                  // wait 500 milliseconds
  }

void drawHome() 
 {
    ClearSlate();
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
 }
  
void drawLevelA()
 {
    ClearSlate();
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
 
void updateJump()
{
  // Jumping is only possible (boolean playerJump = true) in the mazes and not on the homescreen
  // There are 6 phases to jumping
  // This code doesn't really work for the maze right now, just wanted to get the movement down, will update later
  {
      if (jump == 0)
      {
        p1x = p1x;
        p1y = p1y; 
        if (boolean playerJump = true)
        {
          jump == 1;
        }
      }
      if (jump == 1)
      {
        p1x = p1x;
        p1y = p1y + 1; 
        jump == 2;
      }
       if (jump == 2)
      {
        p1x = p1x;
        p1y = p1y + 1; 
        jump == 3;
      }
       if (jump == 3)
      {
        p1x = p1x + 1;
        p1y = p1y; 
        jump == 4;
      }
       if (jump == 4)
      {
        p1x = p1x - 1;
        p1y = p1y; 
        jump == 5;
      }
       if (jump == 5)
      {
        p1x = p1x;
        p1y = p1y - 1; 
      }
if (boolean homescreen = true);
  {
    boolean playerJump = false;
  }
if (boolean homescreen = false);
  {
    boolean playerJump = true;
  }

if (jump > 0)
  {
    updateJump();
  }

    //{
    //  if (jump < 5)
    //    {
    //      p1x++;
   //     }
   //   else
  //      {
  //     (jump = 0);
  //      }
 //   }
 //   {
 //     if (jump < 3)
 //     {
 //       p1y++;
 //     }
 //     else 
 //     {
  //      p1y--;
 //     }
  }
}
void drawPlayer()
{
  DrawPx(p1x,p1y,Red);
  if (boolean homescreen = true)
    p1x = 7;
    p1y = 3;
  if (boolean homescreen = false)
    p1x = 1;
    p1y = 0;
}
void updatePlayer()
{
  {
    CheckButtonsPress();
    ClearSlate();
    if(Button_Up)
      direction = 0;
    if(Button_Down)
      direction = 180;
    if(Button_Left)
      direction = 270;  
    if(Button_Right)
      direction = 90;
    if(Button_B)
      (jump = 1);
    if(Button_A)
      {
        drawLevelA();
      }
      
    DisplaySlate();
  }
    if (direction = 0)
      p1y = p1y + 1;          // Moves Player up 1
      if (p1y > 7)             // Corrects for out of bounds
      {
        p1y = 8;
      }
    if (direction = 180)
      p1y = p1y - 1;          // Moves Player down 1
      if (p1y < -1)            // Corrects for out of bounds
      {
        p1y = 0;
      }
    if (direction = 270)
      p1x = p1x + 1;          // Moves Player right 1
       if (p1x > 7)            // Corrects for out of bounds
      {
        p1x = 8;
      }
    if (direction = 90)
      p1x = p1x - 1;          // Moves Player left 1
       if (p1x < -1)           // Corrects for out of bounds
      {
        p1x = 0;
      }   
}

