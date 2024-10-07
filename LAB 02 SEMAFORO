// Pines para el LED RGB
#define led1_Red 13
#define led1_Green 11
#define led1_Blue 12

#define led2_Red 10
#define led2_Green 8
#define led2_Blue 9

#define led3_Red 7
#define led3_Green 5
#define led3_Blue 6


void led1Colors(int r, int g, int b) { 
  analogWrite(led1_Red, r);
  analogWrite(led1_Green, g);
  analogWrite(led1_Blue, b);
  Serial.print("Semaforo 1: ");
  printColor(r, g, b);  
}

void led2Colors(int r, int g, int b) { 
  analogWrite(led2_Red, r);
  analogWrite(led2_Green, g);
  analogWrite(led2_Blue, b);
  Serial.print("Semaforo 2: ");
  printColor(r, g, b);  
}

void led3Colors(int r, int g, int b) { 
  analogWrite(led3_Red, r);
  analogWrite(led3_Green, g);
  analogWrite(led3_Blue, b);
  Serial.print("Semaforo 3: ");
  printColor(r, g, b);  
}


void printColor(int r, int g, int b) {
  if (r == 255 && g == 0 && b == 0) {
    Serial.println("Rojo");
  } else if (r == 0 && g == 255 && b == 0) {
    Serial.println("Verde");
  } else if (r == 255 && g == 255 && b == 0) {
    Serial.println("Amarillo");
  } else {
    Serial.println("Apagado");
  }
}

void setup() {
  pinMode(led1_Red, OUTPUT);
  pinMode(led1_Green, OUTPUT);
  pinMode(led1_Blue, OUTPUT);
  
  pinMode(led2_Red, OUTPUT);
  pinMode(led2_Green, OUTPUT);
  pinMode(led2_Blue, OUTPUT);
  
  pinMode(led3_Red, OUTPUT);
  pinMode(led3_Green, OUTPUT);
  pinMode(led3_Blue, OUTPUT);

  Serial.begin(9600);  
}

void loop() {
  //Semaforo 1
  led1Colors(0, 255, 0); 
  led2Colors(255, 0, 0); 
  led3Colors(255, 0, 0); 
  delay(3000);

  //Semáforo 2 
  led1Colors(255, 0, 0); 
  led2Colors(0, 255, 0); 
  led3Colors(255, 0, 0); 
  delay(3000);

  //Semáforo 3 
  led1Colors(255, 0, 0); 
  led2Colors(255, 0, 0); 
  led3Colors(0, 255, 0); 
  delay(3000);
  
  //Intermitente 
  led1Colors(255, 255, 0); 
  led2Colors(255, 255, 0); 
  led3Colors(255, 255, 0); 
  delay(1000);
  led1Colors(0, 0, 0); 
  led2Colors(0, 0, 0); 
  led3Colors(0, 0, 0); 
  delay(1000);
}

