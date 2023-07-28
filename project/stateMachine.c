#include <msp430.h>
#include "stateMachine.h"
#include "switches.h"

void state_advance(int state){
  switch(state){
  case 1:

    state = 0;
    break;
  case 2:

    state = 0;
    break;
  case 3:

    state = 0;
    break;
  case 4:

    state = 0;
    break;
  default:
    break;
  }
}
