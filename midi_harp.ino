#include <MIDI.h>

int ldrPin = A0;    // Analog pin connected to the LDR
int threshold = 200; // Set a threshold value to differentiate between low and high light
int midiNote = 60;   // MIDI note value (60 = Middle C)

MIDI_CREATE_DEFAULT_INSTANCE();  // Create a default MIDI object

void setup() { 
  Serial.begin(9600);           // Set MIDI baud rate
  MIDI.begin();                  // Initialize the MIDI library
}

void loop() {
  int ldrValue = analogRead(ldrPin);  // Read the analog value from the LDR
  
  if (ldrValue < threshold) {         // If the LDR detects low light (motion)
    // Send MIDI Note On (velocity = 127)
    MIDI.sendNoteOn(midiNote, 127, 1); // Note, Velocity, Channel
    Serial.println("MIDI Note On - Light Detected");
  } else {                            // If the LDR detects more light (no motion)
    // Send MIDI Note Off
    MIDI.sendNoteOff(midiNote, 0, 1);  // Note, Velocity 0, Channel
    Serial.println("MIDI Note Off - No Light Detected");
  }
  
  delay(500);  // Wait for 500ms before the next reading
}
