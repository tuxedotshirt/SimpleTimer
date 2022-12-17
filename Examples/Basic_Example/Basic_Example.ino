#include <simpleTimer.h>

//Create a simpleTimer object named timer with an interval of 5000 ms.
simpleTimer timer(5000);

void setup() {
  
  //Start the timer
  timer.initialize();
  
  //Serial monitor is used in this example to print when the timer reaches 5000 ms.
  Serial.begin(9600);
}

void loop() {
  //Check if the time interval has passed.
  if(timer.triggered()){
    Serial.println("Timer triggered");
	//timer.reset() is called automatically by timer.triggered() if the interval has been reached.
	//timer.reset() can be called any time to restart the timer. 
	//Use timer.setInterval(unsigned long interval) to set a different interval time.
  }
}
