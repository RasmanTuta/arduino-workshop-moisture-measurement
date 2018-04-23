int sensor_pin = A0;

int output_value ;

void setup() {

   Serial.begin(115200);

   Serial.println("Reading From the Sensor ...");
   pinMode(D6, INPUT);

   delay(2000);

   }

void loop() {

   output_value= analogRead(sensor_pin);
   // calibrated against dry and wet soil. Dry gives 1024, wet gives 400 
   output_value = map(output_value,1024,400,0,100);

   Serial.print("Moisture : ");
   Serial.print(output_value);
   Serial.println("%");
   Serial.print("Alarm: ");
   Serial.println(digitalRead(D6)? "ON": "OFF");

   delay(1000);
   }
