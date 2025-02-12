#define RAIN_SENSOR A0  // Rain sensor connected to Analog pin A0
#define LED_PIN 7       // LED connected to digital pin 7
#define BUZZER_PIN 8    // Buzzer connected to digital pin 8

void setup() {
    pinMode(RAIN_SENSOR, INPUT);  // Set rain sensor as input
    pinMode(LED_PIN, OUTPUT);     // Set LED as output
    pinMode(BUZZER_PIN, OUTPUT);  // Set buzzer as output
    Serial.begin(9600);           // Initialize serial communication
}

void loop() {
    int rainValue = analogRead(RAIN_SENSOR);  // Read sensor value
    Serial.print("Rain Sensor Value: ");
    Serial.println(rainValue); // Print sensor value for debugging

    if (rainValue < 500) {  // Adjust threshold as per sensor output
        digitalWrite(LED_PIN, HIGH);   // Turn on LED
        digitalWrite(BUZZER_PIN, HIGH); // Activate buzzer
    } else {
        digitalWrite(LED_PIN, LOW);    // Turn off LED
        digitalWrite(BUZZER_PIN, LOW); // Deactivate buzzer
    }

    delay(500);  // Small delay to avoid frequent toggling
}