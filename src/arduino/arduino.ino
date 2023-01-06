const int ECG_SENSOR_PIN = A7;
const int ECG_LO_P_PIN = 13;
const int ECG_LO_N_PIN = 14;

void setup()
{
  Serial.begin(9600);
}

void loop() 
{
  if (ElectrodesConnected())
  {
    // Print the value of ECG
    Serial.println(analogRead(ECG_SENSOR_PIN));  
    
    // Delay slightly so serial can keep up
    delay(1);
  }
}

bool ElectrodesConnected()
{
  return digitalRead(ECG_LO_P_PIN) != 1 && digitalRead(ECG_LO_N_PIN) != 1;
}