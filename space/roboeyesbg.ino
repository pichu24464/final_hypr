#include <FluxGarage_RoboEyes.h>

#define SCREEN_WIDTH 128  // OLED display width, in pixels
#define SCREEN_HEIGHT 64  // OLED display height, in pixels
// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
#define OLED_RESET -1  // Reset pin # (or -1 if sharing Arduino reset pin)

// create a RoboEyes instance using an Adafruit_SSD1306 display driver
RoboEyes<Adafruit_SSD1306> roboEyes(display);

void initroboEyes() {
    // Startup robo eyes
  roboEyes.begin(SCREEN_WIDTH, SCREEN_HEIGHT, 100);  // screen-width, screen-height, max framerate

  // Define some automated eyes behaviour
  roboEyes.setAutoblinker(ON, 1, 2);  // Start auto blinker animation cycle -> bool active, int interval, int variation -> turn on/off, set interval between each blink in full seconds, set range for random interval variation in full seconds
  roboEyes.setIdleMode(ON, 1, 8);     // Start idle animation cycle (eyes looking in random directions) -> turn on/off, set interval between each eye repositioning in full seconds, set range for random time interval variation in full seconds
  roboEyes.setWidth(26, 26); // byte leftEye, byte rightEye
  roboEyes.setHeight(26, 26); // byte leftEye, byte rightEye
  roboEyes.setBorderradius(10, 10); // byte leftEye, byte rightEye
  roboEyes.setSpacebetween(17); // int space -> can also be negative
}

void showroboEyes() {
  roboEyes.update();
}