
// Designed by: Juan Rodrigo Guzman Martinez

int tiempo=500; // Declaramos una variable donde se almacenara el tiempo de retardo 

void setup() {
for(int pinLed=4; pinLed <8; pinLed++){ // Pines donde se conctaran los LEDS que son del 4 al 8
pinMode(pinLed, OUTPUT); // Declaramos los LEDS como una salida 
}
}

void loop() {
for(int pinLed=4;  pinLed <8; pinLed++){ // Bucle de incremento de la secuencia por los pines 4 a 8
digitalWrite(pinLed, HIGH); // Se enciende el LED
delay(tiempo); // Le damos un retardo la cual se encuentra en la variable tiempo 
digitalWrite(pinLed, LOW); // Se apaga el LED
}

for(int pinLed =8;  pinLed >4; pinLed--){ // Bucle de decremento de la secuencia por los pines 8 a 4
digitalWrite(pinLed, HIGH); // Se enciende el LED
delay(tiempo); // Le damos un retardo la cual se encuentra en la variable tiempo 
digitalWrite(pinLed, LOW); // Se apaga el LED
}

}
