#include <MIDI.h>
#define NOTE_C 523
#define NOTE_D 587
#define NOTE_E 659
#define NOTE_F 698
#define NOTE_G 784
#define NOTE_A 880
#define NOTE_B 985
int ldr1=2;
int ldr2=3;
int ldr3=4;
int ldr4=5;
int ldr5=5;
int ldr6=6;
int ldr7=7;
int PIEZO=11;
MIDI_CREATE_DEFAULT_INSTANCE();
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ldr1, INPUT);
  pinMode(ldr2, INPUT);
  pinMode(ldr3, INPUT);
  pinMode(ldr4, INPUT);
  pinMode(ldr5, INPUT);
  pinMode(ldr6, INPUT);
  pinMode(ldr7, INPUT);

  pinMode(PIEZO, OUTPUT);
  MIDI.begin(1);
  Serial.begin(115200);
  
}

// the loop function runs over and over again forever
void loop() {
  
  int ldrvalue1=digitalRead(ldr1);
  int ldrvalue2=digitalRead(ldr2);
  int ldrvalue3=digitalRead(ldr3);
  int ldrvalue4=digitalRead(ldr4);
  int ldrvalue5=digitalRead(ldr5);
  int ldrvalue6=digitalRead(ldr6);
  int ldrvalue7=digitalRead(ldr7);

  if(ldrvalue1==HIGH)
  {
    Serial.println("note c");
    tone(PIEZO,NOTE_C,3);
  }
  if(ldrvalue2==HIGH)
  {
    Serial.println("note d");
    tone(PIEZO,NOTE_D,3);
  }
  if(ldrvalue3==HIGH)
  {
    Serial.println("note e");
    tone(PIEZO,NOTE_E,3);
  }
  if(ldrvalue4==HIGH)
  {
    Serial.println("note f");
    tone(PIEZO,NOTE_F,3);
  }
  if(ldrvalue5==HIGH)
  {
    Serial.println("note c");
    tone(PIEZO,NOTE_G,3);
  }
  if(ldrvalue6==HIGH)
  {
    Serial.println("note d");
    tone(PIEZO,NOTE_A,3);
  }
  if(ldrvalue7==HIGH)
  {
    Serial.println("note c");
    tone(PIEZO,NOTE_B,3);
  }
                            // wait for a second
}
