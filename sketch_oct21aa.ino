#include <TM1638.h>

TM1638 aa(D2,D1,D0);

void setup() {

  aa.setLEDs(0xdd);
  aa.setDisplayToDecNumber(273, 0);
}

void loop(){

}
