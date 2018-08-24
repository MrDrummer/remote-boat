//Constants:

// pin A0 is the potentiometer pin
const int potPin = A0;

//Variables:

// The true value from the pot.
int potValue;

// The determined angle of the wind relative to the boat's bearing.
int windRelative;

// The wind direction relative to the compass
int windActual;

// The current direction the boat is pointing.
int compassBearing = 0;

// The destination we want to go relative to the compass(90 = E)
int destinationBearing = 90

int noGoZone = false

void setup() {
  pinMode(potPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  potValue = analogRead(potPin);
  windRelative = map(potValue, 0, 1023, 0, 360);
  Serial.println(windRelative);

  // 270           270               0
  // 360 (0)       270               90
  // 450 (90)      180               270
  windActual = compassBearing + windRelative



  
}


                           
