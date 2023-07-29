#include <msp430.h>
#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "draw_shapes.h"
#include "switches.h"

void main()
{
    configureClocks();
    lcd_init();
    clearScreen(COLOR_BLACK);
    init_shapes();
    draw_shapes();
    switch_init();

    or_sr(0x18);
}