//
// main.c
// displays a few pixels on the screen
//

#include <tonc.h>

int main() {
  REG_DISPCNT = DCNT_MODE3 | DCNT_BG2;

  m3_plot(120, 80, CLR_RED);
  m3_plot(136, 80, CLR_LIME);
  m3_plot(120, 96, CLR_BLUE);

  // loop forever
  while (1);

  return 0;
}
