// Include the correct display library
// For a connection via I2C using Wire include
#include "SSD1306Wire.h" // legacy include: `#include "SSD1306.h"`

// Initialize the OLED display using Wire library
SSD1306Wire  display(0x3c, D1, D2);

#define DEMO_DURATION 3000
void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.println();


  // Initialising the UI will init the display too.
  display.init();

  display.flipScreenVertically();
  display.setFont(ArialMT_Plain_10);

  drawVimond();
  display.display();
}

void drawVimond() {
    display.setTextAlignment(TEXT_ALIGN_LEFT);
    display.setFont(ArialMT_Plain_16);
    display.drawString(0, 10, "Vimond");
    display.drawString(0, 26, "Media Solutions");
}

void loop() {

}
