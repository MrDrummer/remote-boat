//Constants:

// pin A0 is the potentiometer pin
const int potPin = A0;

//Variables:

// The true value from the pot.
int potValue;

// The determined angle of the wind relative to the boat's bearing.
int windAngle;

// The current direction the boat is pointing.
int compassBearing = 0;

// The destination we want to go (90 = E)
int destinationBearing = 90

void setup() {
  pinMode(potPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  potValue = analogRead(potPin);
  windAngle = map(potValue, 0, 1023, 0, 360);
  Serial.println(windAngle);

  
}


                           
