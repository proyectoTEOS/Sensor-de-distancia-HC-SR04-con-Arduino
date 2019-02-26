# Sensor-de-distancia-HC-SR04-con-Arduino
Conoce la distancia de un punto a otro con el sensor ultrasónico HC- SR04.

### Requisitos
- Tener el IDE de [Arduino](https://www.arduino.cc/en/Main/Software) (o el de su preferencia) con la versión más actual
- Contar con las librería [Ultrasonic](https://github.com/JRodrigoTech/Ultrasonic-HC-SR04)
- Tener el material para hacer el proyecto(obvio)

### Código
**[Aqui](https://github.com/proyectoTEOS/Sensor-de-distancia-HC-SR04-con-Arduino/blob/master/Sensor-de-distancia-HC-SR04-con-Arduino.ino)** podrás obtener el link del código, también dejaremos
una vista previa aquí abajo.

```c++
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
```

### Diagrama
El siguiente esquemático muestra como se debe conectar todos los componentes con la placa.
![](https://github.com/proyectoTEOS/Sensor-de-distancia-HC-SR04-con-Arduino/blob/master/sensor-de-distancia-HC-SR04-con-arduino-5.jpg)
