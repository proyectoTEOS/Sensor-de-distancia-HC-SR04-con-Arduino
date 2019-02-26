/*
  Created by TEOS
  Domotic with Arduino https://goo.gl/btZpjs
  YouTube https://goo.gl/k7TUSZ
  Instagram https://goo.gl/zEIjia
  Facebook https://goo.gl/eivraR
  Twitter https://goo.gl/du5Wgn
  Github https://goo.gl/Xl5IiS
  Google Plus https://goo.gl/gBnUdh
  WEB https://www.proyecto-teos.com/
*/

#include <Ultrasonic.h> //https://github.com/JRodrigoTech/Ultrasonic-HC-SR04
uint16_t distanceT, arrayT[10];

Ultrasonic ultrasonicT(3, 2);

void setup() {
  Serial.begin(9600);
}

void loop() {
  String resultSerialT = "La distancia es de: " + String(finalDistanceT()) + " cm";
  Serial.println(resultSerialT);
}

uint16_t finalDistanceT() {
  for (uint8_t iT = 0; iT < 10; iT++) {
    arrayT[iT] = ultrasonicT.Ranging(CM);
    delay(70);
  }
  for (uint8_t iT = 0; iT < 10; iT++)
    distanceT += arrayT[iT];
  distanceT /= 10;
  return distanceT;
}