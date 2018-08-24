//Constants:

// pin A0 is the potentiometer pin
const int potPin = A0;

//Variables:

// The true value from the pot.
int potValue;

// The determined angle of the wind relative to the boat's bearing.
int windRelative;

// The wind direction relative to the compass
// We need this to determine if the direction we want to go is in the noGoZone.
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

void inNoGoZone(bearing, windActual) {
  if (bearing){}
}

void calcBearing(bearing) {
  if (bearing > 359) {
    // We could run it through the function again here until it is below 360, but we shouldn't need that.
    return bearing - 360
  }
  return bearing
}

void loop() {
  potValue = analogRead(potPin);
  windRelative = map(potValue, 0, 1023, 0, 360);
  Serial.println(windRelative);

  // 270           270               0
  // 360 (0)       270               90
  // 450 (90)      180               270
  windActual = calcBearing(compassBearing + windRelative)

  
}


                           
