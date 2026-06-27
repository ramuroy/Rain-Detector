#define RAIN_SENSOR A0  // Rain sensor on analog pin A0
#define LED_PIN 7       // LED on digital pin 7
#define BUZZER_PIN 8    // Buzzer on digital pin 8

// The rain sensor reads LOWER as it gets wetter. Hysteresis band: trigger the
// alert below RAIN_ON, clear it only after the reading rises past RAIN_OFF, so
// the LED/buzzer don't chatter when the value hovers around the threshold.
#define RAIN_ON 480
#define RAIN_OFF 520

bool alerting = false;

void setup() {
    pinMode(LED_PIN, OUTPUT);     // analogRead() needs no pinMode on A0
    pinMode(BUZZER_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int rainValue = analogRead(RAIN_SENSOR);
    Serial.print("Rain Sensor Value: ");
    Serial.println(rainValue);

    if (!alerting && rainValue < RAIN_ON) alerting = true;
    else if (alerting && rainValue > RAIN_OFF) alerting = false;

    digitalWrite(LED_PIN, alerting ? HIGH : LOW);
    digitalWrite(BUZZER_PIN, alerting ? HIGH : LOW);

    delay(200);
}
