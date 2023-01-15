
/*
* 
* 해당 라이브러리는 초음파 센서를 보다 쉽게 사용할수 있도록
* 만들어졌습니다.  
*
*/

#include <sona.h>


/*
 * sona mysona(int trig ,int echo ,int type);
 * 
 * type
 * 단위 -> 
 *  mm = 0
 *  cm = 1
 *   m = 2
 * raw = 3
 * 
 * 기본값은 1입니다. 
 */
 
sona mysona(1,2); //sona mysona(int trig ,int echo ,int type);

void setup() {
  Serial.begin(9600);
}

void loop() {
  long abc = mysona.read();
  Serial.println(abc);
}
