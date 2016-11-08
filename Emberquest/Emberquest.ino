/*
 Emberquest by Rose Sheldon
 */
#include <MeggyJrSimple.h>
void setup() 
{
  MeggyJrSimpleSetup();
}
//MeggyJr_CustomColors.pde
void loop() 
{
  // put your main code here, to run repeatedly:
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


