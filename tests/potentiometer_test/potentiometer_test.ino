//Constants:
const int potPin = A0; //pin A0 to read analog input

//Variables:
int value; //save analog value

void setup(){
  pinMode(potPin, INPUT);
  Serial.begin(9600);
}

void loop(){
  value = analogRead(potPin);
  value = map(value, 0, 1023, 0, 360);
  Serial.println(value);
  // comment here
}


                           
