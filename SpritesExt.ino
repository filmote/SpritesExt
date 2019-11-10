#include <Arduboy2.h>
#include "src/SpritesExt/SpritesExt.h"

const byte PROGMEM ball[] = {
  16, 16, 
  0xE0, 0xF8, 0xFC, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3E, 0x3E, 0xFC, 0xF8, 0xE0,
  0x07, 0x1F, 0x3F, 0x7F, 0x7F, 0xFF, 0xFF, 0xDF, 0xDF, 0xCF, 0xE7, 0x63, 0x7B, 0x3F, 0x1F, 0x07,
};

const byte PROGMEM ball_Mask[] = {
  0xE0, 0xF8, 0xFC, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFC, 0xF8, 0xE0,
  0x07, 0x1F, 0x3F, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x3F, 0x1F, 0x07,
};

Arduboy2 arduboy;

void setup() {

  arduboy.boot();
  arduboy.clear();

  // for (uint8_t x = 0; x < 192; x= x + 4) {

  //   arduboy.drawLine(x, 0, 0, x);

  // }


  SpritesExt::drawExternalMask(80, 2, ball, ball_Mask, 0, 0, false);
  SpritesExt::drawExternalMask(100, 2, ball, ball_Mask, 0, 0, true);
  SpritesExt::drawExternalMask(120, 2, ball, ball_Mask, 0, 0, true);

  SpritesExt::drawOverwrite(80, 28, ball, 0, false);
  SpritesExt::drawOverwrite(100, 28, ball, 0, true);
  SpritesExt::drawOverwrite(120, 28, ball, 0, true);


  SpritesExt::drawExternalMask(32, 2, ball, ball_Mask, 0, 0, false);
  SpritesExt::drawExternalMask(12, 2, ball, ball_Mask, 0, 0, true);
  SpritesExt::drawExternalMask(-8, 2, ball, ball_Mask, 0, 0, true);

  SpritesExt::drawOverwrite(32, 28, ball, 0, false);
  SpritesExt::drawOverwrite(12, 28, ball, 0, true);
  SpritesExt::drawOverwrite(-8, 28, ball, 0, true);


  arduboy.display();

}

void loop() { 

}



