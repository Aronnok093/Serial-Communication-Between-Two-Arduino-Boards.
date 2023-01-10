//Sender Arduino Board Code (Master)
char mystring[6] = "FARDIN";     //String data which is to be sent
void setup() {                
 Serial.begin(9600);                 // Begin the Serial at 9600 Baud rate
}
void loop() {
 Serial.write(mystring,6);             //Write the serial data
 delay(1000);
}