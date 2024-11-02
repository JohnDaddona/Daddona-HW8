// This is myBlink.cpp
// John Daddona
// Homework 08
// This is the main code for the make LEDs
// This is the same program but I changed the curly braces for the nested if
// statement because the code wasn't performing correct operations. This program
// does everything it did previously but now has an if statment looking for a
// third command line argument for number of times blinking but does not end the
// program if 3 command line arguments are given. An example invocation would be
// ./myBlink blink 3
/** Simple On-board LED flashing program - written by Derek Molloy
*    simple OOP  struture for the Exploring BeagleBone book
*
*    This program uses all four LEDS and can be executed in three ways:
*         makeLEDs on
*         makeLEDs off
*         makeLEDs flash  (flash at time delay intervals)
*         makeLEDs status (get the trigger status)
*
* Written by Derek Molloy for the book "Exploring BeagleBone: Tools and 
* Techniques for Building with Embedded Linux" by John Wiley & Sons, 2014
* ISBN 9781118935125. Please see the file README.md in the repository root 
* directory for copyright and GNU GPLv3 license information.            */

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include "derek_LED.h"
using namespace std;

#define LED_PATH "/sys/class/leds/beaglebone:green:usr"
int main(int argc, char* argv[]){
   if(argc<2){// changed to less than 2 so I can conditionally have a third
	cout << "Usage is makeLEDs <command>" << endl;
        cout << "   command is one of: on, off, flash or status" << endl;
	cout << " e.g. makeLEDs flash" << endl;
  return 2; //added return statement
   }
   cout << "Starting the makeLEDs program" << endl;
   string cmd(argv[1]);
   LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
   //Added curly braces because on the nested if statement
   //the else after the else attached ("please provide number of...")
   //kept saying there was no if statement for the else all I did was clean
   //up the code so it wouldnt break.
   for(int i=0; i<4; i++){
      if(cmd=="on"){
          leds[i].turnOn();
     } else if(cmd=="off"){
          leds[i].turnOff();
     } else if(cmd=="flash"){
          leds[i].flash("100"); //default is "50"
     } else if(cmd=="status"){
          leds[i].outputState();      
     } else if(cmd=="blink"){
        if(argc == 3){
          int num  = atoi(argv[2]);
          leds[i].blink(num);
      } else {
          cout << "Please provide number of blinks as the third arg" << endl;
        }
      } else{ 
          cout << "Invalid command!" << endl; 
     }
   }
   cout << "Finished the makeLEDs program" << endl;
   return 0;
  
}
