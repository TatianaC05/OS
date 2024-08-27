// C++ code
//
#define led_yellow 13
#define led_red 12 
#define led_green 11

char opt = '0'; 

void setup() {
  pinMode(led_yellow, OUTPUT);
  pinMode(led_red, OUTPUT);
  pinMode(led_green, OUTPUT);
  
  // baudios 
  Serial.begin(9600);
  
  // que inicie apagado el led
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_red, LOW);
  digitalWrite(led_green, LOW);
  
  // menú de opciones
  Serial.println("Main Menu");
  Serial.println("[1]. Turn on led Green");
  Serial.println("[2]. Turn off led Green");
  Serial.println("[3]. Turn on led Red");
  Serial.println("[4]. Turn off led Red");
  Serial.println("[5]. Turn on led Yellow");
  Serial.println("[6]. Turn off led Yellow");
  Serial.println("[7]. Turn on all the lights");
  Serial.println("[8]. Turn off all the lights");
  Serial.println("[9]. Lights on flashing mode");
}

void loop() {
  if (Serial.available() > 0) {
    opt = Serial.read(); 
  }

  switch (opt) {
    case '1': 
      // Encender la luz verde
      digitalWrite(led_green, HIGH);
      digitalWrite(led_red, LOW);
      digitalWrite(led_yellow, LOW);
      opt = '0'; 
      break;
    
    case '2': 
      // Apagar la luz verde
      digitalWrite(led_green, LOW);
      opt = '0';
      break;
    
    case '3': 
      // Encender la luz roja
      digitalWrite(led_red, HIGH);
      digitalWrite(led_green, LOW);
      digitalWrite(led_yellow, LOW);
      opt = '0';
      break;
    
    case '4': 
      // Apagar la luz roja
      digitalWrite(led_red, LOW);
      opt = '0';
      break;
    
    case '5': 
      // Encender la luz amarilla
      digitalWrite(led_yellow, HIGH);
      digitalWrite(led_green, LOW);
      digitalWrite(led_red, LOW);
      opt = '0';
      break;
    
    case '6': 
      // Apagar la luz amarilla
      digitalWrite(led_yellow, LOW);
      opt = '0';
      break;
    
    case '7': 
      // Encender todas las luces
      digitalWrite(led_green, HIGH);
      digitalWrite(led_red, HIGH);
      digitalWrite(led_yellow, HIGH);
      opt = '0';
      break;
    
    case '8': 
      // Apagar todas las luces
      digitalWrite(led_green, LOW);
      digitalWrite(led_red, LOW);
      digitalWrite(led_yellow, LOW);
      opt = '0';
      break;
    
    case '9':      
      // Luces en modo intermitente continuo
      while (true) { 
        digitalWrite(led_green, HIGH);
        digitalWrite(led_red, HIGH);
        digitalWrite(led_yellow, HIGH);
        delay(500);
        digitalWrite(led_green, LOW);
        digitalWrite(led_red, LOW);
        digitalWrite(led_yellow, LOW);
        delay(500);

        // Una nueva entrada en el serial
        if (Serial.available()) {
          char newOpt = Serial.read();
          if (newOpt != '9') {
            opt = newOpt;
            break;  
          }
        }
      }
      break;
  }
}
