/*
  Multiple tone player

  Plays multiple tones on multiple pins in sequence

  circuit:
  - three 8 ohm speakers on digital pins 6, 7, and 8

  created 8 Mar 2010
  by Tom Igoe
  based on a snippet from Greg Borenstein

  // This example code is in the public domain.

  // http://www.arduino.cc/en/Tutorial/Tone4
  //https://www.arduino.cc/en/Tutorial/ToneMultiple
*/

//Passive Buzzer Music Game
//By Dan Davis 3/31/2019
//Game purpose to come up with your owm melody, by changing variables,  and synchonize 6 LEDs to the 6 passive buzzers

//GITHUB cord translations: Art Canqrok:

//https://gist.github.com/artcangrok/3845519


//Arduino References
//https://programmingelectronics.com/an-easy-way-to-make-noise-with-arduino-using-tone/
//https://www.arduino.cc/en/Tutorial/PlayMelody
//https://www.arduino.cc/en/Tutorial/toneMelody
//https://create.arduino.cc/projecthub/SURYATEJA/use-a-buzzer-module-piezo-speaker-using-arduino-uno-89df45
//http://www.hobbytronics.co.uk/arduino-tutorial7-piezo-beep
//http://hubguitar.com/music-theory/writing-a-melody-for-chords

//Additional Referernces

//https://thinkzone.wlonk.com/Music/12Tone.htm
//https://pages.mtu.edu/~suits/chords.html
//https://plus.maths.org/content/magical-mathematics-music
//https://music.stackexchange.com/questions/42694/what-is-a-chord-in-terms-of-frequencies
//https://www.arduino.cc/reference/en/language/functions/analog-io/analogwrite
//https://freesound.org/people/klangfabrik/packs/2103/

//GITHUB cord translations:

//https://gist.github.com/artcangrok/3845519

//https://video-demos.colostate.edu/mechatronics/PIC_student_projects/S15_Whoops_pitches.h.pdf


//TOOLS
//Ardino Uno
//6 Passive buzzers
//(I used Gikfun 5V 2 Terminals Passive Electronic Buzzer for Arduino (Pack of 10pcs) EK2146 )
//6 100 Ohm resistor
// 6 LEDS
// ( I used DiCUNO  5mm LED Light Emitting Diodes)


//your creativiy
//changing music cords to wave frequencies

//code structure; (pinnumber, note #, millisecinds) change chord number, and millseconds for each buzzer for different tones.

#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
#define NOTE_PAUSE

// Define Digital Pins
#define RED 8
#define YELLOW 9
#define WHITE 10
#define BLUE 11

#define GREEN 12
#define ORANGE 13

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(WHITE, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(ORANGE, OUTPUT);
 

}



void loop() {
  // turn off tone function for pin 2:
  noTone(2);
  // play a note on pin 3 for 200 ms:
  tone(3, 523, 200);
  delay(200);


  // turn off tone function for pin 3:
  noTone(3);
  // play a note on pin 4 for 500 ms:
  tone(4, 587, 50);
  delay(600);

  // turn off tone function for pin 4:
  noTone(4);
  // play a note on pin 5 for 300 ms:
  tone(4,659, 300);
  delay(300);

  // turn off tone function for pin 5:
  noTone(5);
  // play a note on pin 4 for 500 ms:
  tone(5, 740, 100);
  delay(500);

// turn off tone function for pin 6:
  noTone(6);
  // play a note on pin 4 for 500 ms:
  tone(7, 784, 350);
  delay(300);

  // turn off tone function for pin 7:
  noTone(58);
  // play a note on pin 4 for 500 ms:
  tone(2, 1661, 350);
  delay(100);




 // choose a value between 1 and 255 to change the light intensity
  analogWrite(RED, 140);
  delay(75);


  analogWrite(YELLOW, 50);
  delay(500);

  
  analogWrite(WHITE, 75);
  delay(250);

  
  analogWrite(BLUE, 100);
  delay(900);

  analogWrite(GREEN, 150);
  delay(300);
  
  analogWrite(ORANGE, 255);
  delay (100);
  

}

