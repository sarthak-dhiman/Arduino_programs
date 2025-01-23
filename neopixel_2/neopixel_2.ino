

*/
#include <Adafruit_NeoPixel.h>

class Strip
{
public:
uint8_t   effect;
uint8_t   effects;
uint16_t  effStep;
unsigned long effStart;
Adafruit_NeoPixel strip;
Strip(uint16_t leds, uint8_t pin, uint8_t toteffects) : strip(leds, pin, NEO_GRB + NEO_KHZ800) {
effect = -1;
effects = toteffects;
Reset();
}
void Reset(){
effStep = 0;
effect = (effect + 1) % effects;
effStart = millis();
}
};

struct Loop
{
uint8_t currentChild;
uint8_t childs;
bool timeBased;
uint16_t cycles;
uint16_t currentTime;
Loop(uint8_t totchilds, bool timebased, uint16_t tottime) {currentTime=0;currentChild=0;childs=totchilds;timeBased=timebased;cycles=tottime;}
};

Strip strip_0(7, 6, 7 );
struct Loop strip0loop0(1, false, 1);

//[GLOBAL_VARIABLES]

void setup() {



strip_0.strip.begin();
}

void loop() {



strips_loop();
}

void strips_loop() {
if(strip0_loop0() & 0x01)
strip_0.strip.show();
}

uint8_t strip0_loop0() {
uint8_t ret = 0x00;
switch(strip0loop0.currentChild) {
case 0:
ret = strip0_loop0_eff0();break;
}
if(ret & 0x02) {
ret &= 0xfd;
if(strip0loop0.currentChild + 1 >= strip0loop0.childs) {
strip0loop0.currentChild = 0;
if(++strip0loop0.currentTime >= strip0loop0.cycles) {strip0loop0.currentTime = 0; ret |= 0x02;}
}
else {
strip0loop0.currentChild++;
}
};
return ret;
}

uint8_t strip0_loop0_eff0() {
// Strip ID: 0 - Effect: Rainbow - LEDS: 7
// Steps: 8 - Delay: 87
// Colors: 7 (255.0.0, 0.255.0, 0.0.255, 255.157.0, 255.0.255, 0.255.255, 255.255.255, )
// Options: toLeft=true,
if(millis() - strip_0.effStart < 87 * (strip_0.effStep)) return 0x00;
float factor1, factor2;
uint16_t ind;
for(uint16_t j=0;j<7;j++) { ind = strip_0.effStep + j * 1.1428571428571428; switch((int)((ind % 8) / 1.1428571428571428)) { case 0: factor1 = 1.0 - ((float)(ind % 8 - 0 * 1.1428571428571428) / 1.1428571428571428); factor2 = (float)((int)(ind - 0) % 8) / 1.1428571428571428; strip_0.strip.setPixelColor(j, 255 * factor1 + 0 * factor2, 0 * factor1 + 255 * factor2, 0 * factor1 + 0 * factor2); break; case 1: factor1 = 1.0 - ((float)(ind % 8 - 1 * 1.1428571428571428) / 1.1428571428571428); factor2 = (float)((int)(ind - 1.1428571428571428) % 8) / 1.1428571428571428; strip_0.strip.setPixelColor(j, 0 * factor1 + 0 * factor2, 255 * factor1 + 0 * factor2, 0 * factor1 + 255 * factor2); break; case 2: factor1 = 1.0 - ((float)(ind % 8 - 2 * 1.1428571428571428) / 1.1428571428571428); factor2 = (float)((int)(ind - 2.2857142857142856) % 8) / 1.1428571428571428; strip_0.strip.setPixelColor(j, 0 * factor1 + 255 * factor2, 0 * factor1 + 157 * factor2, 255 * factor1 + 0 * factor2); break; case 3: factor1 = 1.0 - ((float)(ind % 8 - 3 * 1.1428571428571428) / 1.1428571428571428); factor2 = (float)((int)(ind - 3.4285714285714284) % 8) / 1.1428571428571428; strip_0.strip.setPixelColor(j, 255 * factor1 + 255 * factor2, 157 * factor1 + 0 * factor2, 0 * factor1 + 255 * factor2); break; case 4: factor1 = 1.0 - ((float)(ind % 8 - 4 * 1.1428571428571428) / 1.1428571428571428); factor2 = (float)((int)(ind - 4.571428571428571) % 8) / 1.1428571428571428; strip_0.strip.setPixelColor(j, 255 * factor1 + 0 * factor2, 0 * factor1 + 255 * factor2, 255 * factor1 + 255 * factor2); break; case 5: factor1 = 1.0 - ((float)(ind % 8 - 5 * 1.1428571428571428) / 1.1428571428571428); factor2 = (float)((int)(ind - 5.7142857142857135) % 8) / 1.1428571428571428; strip_0.strip.setPixelColor(j, 0 * factor1 + 255 * factor2, 255 * factor1 + 255 * factor2, 255 * factor1 + 255 * factor2); break; case 6: factor1 = 1.0 - ((float)(ind % 8 - 6 * 1.1428571428571428) / 1.1428571428571428); factor2 = (float)((int)(ind - 6.857142857142857) % 8) / 1.1428571428571428; strip_0.strip.setPixelColor(j, 255 * factor1 + 255 * factor2, 255 * factor1 + 0 * factor2, 255 * factor1 + 0 * factor2); break; } } if(strip_0.effStep >= 8) {strip_0.Reset(); return 0x03; }
else strip_0.effStep++;
return 0x01;
}
