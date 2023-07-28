#include <msp430.h>
#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "draw_shapes.h"

void main()
{
    configureClocks();
    lcd_init();
    clearScreen(COLOR_BLACK);
    init_shapes();
    draw_moving_shapes();

    or_sr(0x18);
}