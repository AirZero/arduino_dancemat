int analogPin = A3;     // potentiometer wiper (middle terminal) connected to analog pin 3
                       // outside leads to ground and +5V
int val = 0;           // variable to store the value read
int startValue = analogRead(analogPin);

void setup()
{
  Serial.begin(9600);              //  setup serial
  startValue = analogRead(analogPin);
  }

void loop()
{
  val = analogRead(analogPin);     // read the input pin
  Serial.println(val);  // debug value
        analogWrite(3, 0);
        analogWrite(5, 0);
        analogWrite(6, 0);
        analogWrite(10, 0);
//        startValue = val;
        if(val>startValue){
      analogWrite(3, 500);
      analogWrite(5, 500);
      analogWrite(6, 500);
      analogWrite(10, 500);
  }
}

