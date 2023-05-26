//This program is designed to count from 0 to 15 in Binary. Voltage is provided by the pins on the Arduino
//and the current flows towards a resistor, then the LED lights, then towards the grounder and back creating a circuit.
//The LED's will turn on based on the current number iterated through the list of 0 - 15. Program created to help learn more about 
//Arduino's. Please note that through each iteration each value corresponding to 1 will have a light flicker on and when 0 flickers off.
//The ones currently on will be displayed for one second, and any lights corresponding to 0 will turn off in order creating a slight delay 
//as all lights are not turned off at the same time.... still need to figure out how to do that.
//@author Armand Amores

// Define size of list
const int binaryListSize = 16;

//declare an array to hold the list values
String binaryList[binaryListSize];

void setup() {
  // put your setup code here, to run once:

//Serial Communication set up to provide interface for console logs
//9600 Baud is the speed in which data is transmitted over a serail comm. channel.
Serial.begin(9600);

//initialize values to list
binaryList[0] = "0000";
binaryList[1] = "0001";
binaryList[2] = "0010";
binaryList[3] = "0011";
binaryList[4] = "0100";
binaryList[5] = "0101";
binaryList[6] = "0110";
binaryList[7] = "0111";
binaryList[8] = "1000";
binaryList[9] = "1001";
binaryList[10] = "1010";
binaryList[11] = "1011";
binaryList[12] = "1100";
binaryList[13] = "1101";
binaryList[14] = "1110";
binaryList[15] = "1111";
  
//initialize pin modes
pinMode (13, OUTPUT);
pinMode (12, OUTPUT);
pinMode (11, OUTPUT);
pinMode (10, OUTPUT);

}



void loop() {
  // put your main code here, to run repeatedly:

//start each LED to false for off
boolean led1 = false;
boolean led2 = false;
boolean led3 = false;
boolean led4 = false;

//flag used to indicate when to display lights
boolean display = false;

//loop through binary number list to iterate over... Based on position, values will be iterated over
for (int i = 0; i < binaryListSize; i++) {
    //assign current number value as the binary list position
    String currentNumber = binaryList[i];
    //Debug, find which position and value script is on 
    Serial.println("Index Position: " + String(i));
    Serial.println("Value: " + String(binaryList[i]));
    //iterate through current number and based on value will turn an LED On or off.
    for (int y = 0; y < currentNumber.length(); y++) {
        //Start with each pin off
        digitalWrite(13, LOW);
        digitalWrite(12, LOW);
        digitalWrite(11, LOW);
        digitalWrite(10, LOW);
        //digit will contain one char at a time and loop through the 4 digits
        char digit = currentNumber.charAt(y);
        //logic for led on or off 
        if (y == 0){
          if (digit == '0'){
            led1 = false;
            } else if(digit == '1'){
                led1 = true;
            }
          } else if (y == 1) {
            if (digit == '0'){
              led2 = false;
              } else if (digit == '1'){
                  led2 = true;
                }
            } else if (y == 2) {
                if (digit == '0'){
                  led3 = false;
                  } else if (digit == '1'){
                      led3 = true;
                    }
              } else if (y == 3){
                  if (digit == '0'){
                    led4 = false;
                  } else if (digit == '1'){
                        led4= true;
                    }
                }

          //flag now true, displaying lights
          display = true;
          //indcates if true, turn on
          if (display){
            if (led1){
          digitalWrite(13, HIGH);
          }else if(!led1){
            digitalWrite(13, LOW);
            }
          
          if (led2){
            digitalWrite(12, HIGH);
            }else if(!led2){
              digitalWrite(12, LOW);
              }
          
          if (led3){
            digitalWrite(11, HIGH);
            }else if(!led3){
              digitalWrite(11, LOW);
            }
        
          if (led4){
            digitalWrite(10, HIGH);
            }else if(!led4){
              digitalWrite(10, LOW);
              }
          //one second delay to show the correspoding binary number.    
          delay(1000);
          //turn display off
          display = false;
          }

      }
    
  }



}
