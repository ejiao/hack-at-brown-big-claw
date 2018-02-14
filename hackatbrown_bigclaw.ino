
//#define RED 3
//#define BLUE 6 
//#define GREEN 5

#define RED 3
#define BLUE 4
#define GREEN 2

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);  
  
  pinMode(RED, OUTPUT); 
  pinMode(BLUE, OUTPUT); 
  pinMode(GREEN, OUTPUT); 

}



void loop() {
  // simpleBlink(); 
  //fadeColor(0, 0, 0, 50, 188, 188, 2);
  // analogWrite(RED, 84); 
  // analogWrite(BLUE, 255); 
  // analogWrite(GREEN, 111);
  
  // fastBlink(); 
  //  fadeColor(93, 173, 188, 251, 57, 100, 10);
  //  delay(2000);
  //  fadeColor(251, 57, 100, 66, 80, 157, 10);
  //  delay(2000);
  //  fadeColor(66, 80, 157, 93, 173, 188, 10);
  //  delay(2000);

  
  fadeColor(0, 0, 0, 0, 80, 250, 10);
  delay(2000); 
  fadeColor(0, 80, 250, 50, 0, 250, 10);
  delay(2000);
  fadeColor(50, 0, 250, 250, 0, 50, 10);
  delay(2000);
  fadeColor(250, 0, 50, 250, 80, 0, 10);
  delay(2000); 
  fadeColor(250, 80, 0, 0, 0, 0, 10);
}

void fadeColor(int startR, int startG,
               int startB, int endR,
               int endG, int endB, int pause) {
  double incR = (double) (endR - startR) / (double) 255 ;
  double incB = (double) (endB - startB) / (double) 255 ;
  double incG = (double) (endG - startG) / (double) 255 ;
  for (int i = 0; i < 255; i++) {
    int newR = startR + (i * incR);
    int newB = startB + (i * incB);
    int newG = startG + (i * incG);

    analogWrite(RED, newR);
    analogWrite(BLUE, newB);
    analogWrite(GREEN, newG); 

    Serial.print(newR); 
    Serial.print("\n");
    Serial.print(newB); 
    Serial.print("\n");
    Serial.print(newG); 
    Serial.print("\n");

    Serial.print("\n");
    
    delay(pause);
  }
}

               
void simpleBlink() { 
  digitalWrite(RED, HIGH); 
  delay(500); 
  digitalWrite(BLUE, HIGH); 
  delay(500); 
  digitalWrite(GREEN, HIGH); 
  delay(500); 
  digitalWrite(RED, LOW); 
  delay(500); 
  digitalWrite(BLUE, LOW); 
  delay(500); 
  digitalWrite(GREEN, LOW); 
  delay(500); 
}

void fastBlink() { 
  int flash = 250; 
  digitalWrite(RED, HIGH); 
  delay(flash); 
  digitalWrite(BLUE, HIGH); 
  delay(flash); 
  digitalWrite(GREEN, HIGH); 
  delay(flash); 
  digitalWrite(RED, LOW); 
  delay(flash); 
  digitalWrite(BLUE, LOW); 
  delay(flash); 
  digitalWrite(GREEN, LOW); 
  delay(flash); 
}

/* 
 *  
 *  
 */
void fadeBlue() { 
 for (int r = 0; r < 250; r++) { 
    delay(5);
    analogWrite(BLUE, r);
  } 
  // delay(100); 
  for (int r = 250; r >= 0; r--) { 
    analogWrite(BLUE, r);
    delay(5);
  } 
}

void fadeRed() { 
 for (int r = 0; r < 250; r++) { 
    analogWrite(RED, r);
    delay(5);
  } 
  for (int r = 250; r >= 0; r--) { 
    analogWrite(RED, r);
    delay(5);
  } 
}

void fadeGreen() {
  for (int r = 0; r < 250; r++) { 
    analogWrite(GREEN, r);
    delay(5);
  } 
  for (int r = 250; r >= 0; r--) { 
    analogWrite(GREEN, r);
    delay(5);
  } 
}

void rgb(int r, int g, int b) { 
  analogWrite(RED, r); 
  analogWrite(GREEN, g); 
  analogWrite(BLUE, b); 
}


