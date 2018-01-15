/*
  Created by TEOS
  Domotic with Arduino https://goo.gl/btZpjs
  YouTube https://goo.gl/k7TUSZ
  Instagram https://goo.gl/zEIjia
  Facebook https://goo.gl/eivraR
  Twitter https://goo.gl/du5Wgn
  Github https://goo.gl/Xl5IiS
  Google Plus https://goo.gl/gBnUdh
  WEB https://goo.gl/jtiYJy
*/

#include <Ultrasonic.h>
int distanceT, finalDistanceT, sumT = 0;

Ultrasonic ultrasonicT(9,8); 

void setup() {
  Serial.begin(9600); 
}

void loop(){
  for(int iT = 0; iT<=10; iT+=1){
    sumT = sumT + (distanceT = ultrasonicT.Ranging(CM));
    delay(70);
  }
  finalDistanceT = sumT/10;
  sumT = 0;
  Serial.print("La distancia actual es de ");
  Serial.print(finalDistanceT);
  Serial.println(" CM");
}
