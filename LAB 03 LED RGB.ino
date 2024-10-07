
#define led_Red 13
#define led_Green 11
#define led_Blue 12

void ledColors(int r, int g, int b) { 
  analogWrite(led_Red, r);
  analogWrite(led_Green, g);
  analogWrite(led_Blue, b);
}

void setup() {
  pinMode(led_Red, OUTPUT);
  pinMode(led_Green, OUTPUT);
  pinMode(led_Blue, OUTPUT);
  
  Serial.begin(9600); 
  Serial.println("Ingrese valores de color RGB (0-255):");
  delay(2000);
}

void loop() {
  if (Serial.available() == 0) {
    Serial.print("Valor para Rojo (0-255): ");
    while (!Serial.available()) {} 
    int r = Serial.parseInt();
    Serial.println(r);

    Serial.print("Valor para Verde (0-255): ");
    while (!Serial.available()) {}
    int g = Serial.parseInt();
    Serial.println(g);
   
    Serial.print("Valor para Azul (0-255): ");
    while (!Serial.available()) {}
    int b = Serial.parseInt();
    Serial.println(b);

    ledColors(r, g, b);

    Serial.println("El LED ha sido configurado" ); 
    Serial.println("Ingrese nuevos valores de color RGB:");
  }
}
