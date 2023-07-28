#include <msp430.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "draw_shapes.h"

    Rectangle rectangle1;
    Rectangle rectangle2;

    Circle circle1;

void 
init_shapes()
{

    // Rectangle 1
    rectangle1.row = screenHeight/2;
    rectangle1.col = screenWidth / 1.1;
    rectangle1.old_row = screenHeight/2;
    rectangle1.old_col = screenWidth / 1.1;
    rectangle1.height = 50;
    rectangle1.width = 10;

    // Rectangle 2
    rectangle2.row = screenHeight/2;
    rectangle2.col = screenWidth / 8;
    rectangle2.old_row = screenHeight/2;
    rectangle2.old_col = screenWidth / 8;
    rectangle2.height = 50;
    rectangle2.width = 10;

    // Circle
    circle1.y = screenHeight/2;
    circle1.x = screenWidth / 2;
    circle1.old_y = screenHeight/2;
    circle1.old_x = screenWidth / 2;
    circle1.r = 5;
}


void
draw_shapes()
{
  int left_col1 = rectangle1.old_col - (rectangle1.width / 2);
  int top_row1  = rectangle1.old_row - (rectangle1.height / 2);
  int left_col2 = rectangle2.old_col - (rectangle2.width / 2);
  int top_row2  = rectangle2.old_row - (rectangle2.height / 2);

  // blank out the old rectangle
  fillRectangle(left_col1, top_row1, rectangle1.width, rectangle1.height, COLOR_WHITE);
  fillRectangle(left_col2, top_row2, rectangle2.width, rectangle2.height, COLOR_WHITE);
}