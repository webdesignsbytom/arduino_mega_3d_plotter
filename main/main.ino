#include <Wire.h>
#include <LiquidCrystal.h>

// PIN ASSIGNMENTS
// Button pins
const int buttonUp = 6, buttonDown = 7, buttonEnter = 8, buttonBack = 9;

// Limit switch pins

// Motor control module pins

// SD card module pins


// USER MENUS - LCD DISPLAY
// Main menu
String mainMenuItems[] = {"SD Card", "Motor Control", "Tests", "Shutdown"};

// Sub menus
String motorControlMenu[] = {"Speed+", "Speed-", "Release", "Home axis", "Back"};
String testsMenu[] = {"LCD Test", "SD Card Test", "Z Axis" "All Axis" "Back"};
String shutdownMenu[] = {"Confirm Shutdown", "Back"};

// SD CARD CONTROL
// SD Data
const int maxSdFilesNum = 30;

String fileNames[maxSdFilesNum];
int fileCount = 0;

// Motion control
int xyAxixSpeed = 100;
