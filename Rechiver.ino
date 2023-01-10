//Receiver Arduino Board Code
char mystring[20];               //Initialized variable to store receive
void setup() {
 Serial.begin(9600);             // Begin the Serial at 9600 Baud
}
void loop() {
 Serial.readBytes(mystring,15);  //Read the serial data
 Serial.println(mystring);       //Print data on Serial Monitor
 Serial.println(" RECEIVER");
 delay(1000);    
}
