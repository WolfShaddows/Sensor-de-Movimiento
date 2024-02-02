### Sensor de Movimiento
Conectando un sensor de movimiento PIR y un zumbador a un Arduino Uno, puedes utilizar los siguientes pasos como guía general. 

#### Sensor de Movimiento PIR (HC-SR501):
Conexiones:
VCC: Conéctalo al pin de alimentación de 5V en el Arduino.
OUT: Conéctalo a un pin digital en el Arduino (por ejemplo, pin 7).
GND: Conéctalo al pin de tierra (GND) en el Arduino.
#### Zumbador o Buzzer:
Conexiones:
(Positivo) +: Conéctalo al pin de alimentación de 5V en el Arduino.
(Negativo) -: Conéctalo a un pin digital en el Arduino (por ejemplo, pin 8).
Si el zumbador tiene un tercer cable de control, conéctalo al GND en el Arduino.
#### Arduino Uno:
Conexiones:
VCC (5V): Conéctalo al positivo del sensor PIR y del zumbador.
GND: Conéctalo al GND del sensor PIR y del zumbador.
Pin Digital (por ejemplo, 7): Conéctalo al pin OUT del sensor PIR.
Pin Digital (por ejemplo, 8): Conéctalo al pin de control del zumbador.
#####  El código activará el zumbador durante un segundo cuando el sensor PIR detecte movimiento. 

------------

#### ##### ### fin...
