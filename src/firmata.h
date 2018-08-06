/*
 * File: firmata.h
 * Project: Artik Firmata
 * File Created: Monday, 6th August 2018 10:17:20 am
 * Author: Alex Bucknall (alex.bucknall@gmail.com)
 * -----
 * Last Modified: Monday, 6th August 2018 10:34:56 am
 * Modified By: Alex Bucknall (alex.bucknall@gmail.com>)
 * -----
 * Copyright 2018 - 2018  resin.io
 */

#include <string.h>
#include <stdlib.h>
#include <cstdint>

#include "stream.h"

#define FIRMATA_MAJOR_VERSION 2
#define FIRMATA_MINOR_VERSION 5
#define FIRMATA_BUGFIX_VERSION 1

// message command bytes (128-255/0x80-0xFF)
#define DIGITAL_MESSAGE 0x90 // send data for a digital pin
#define ANALOG_MESSAGE 0xE0  // send data for an analog pin (or PWM)
#define REPORT_ANALOG 0xC0   // enable analog input by pin #
#define REPORT_DIGITAL 0xD0  // enable digital input by port pair
//
#define SET_PIN_MODE 0xF4          // set a pin to INPUT/OUTPUT/PWM/etc
#define SET_DIGITAL_PIN_VALUE 0xF5 // set value of an individual digital pin
//
#define REPORT_VERSION 0xF9 // report protocol version
#define SYSTEM_RESET 0xFF   // reset from MIDI
//
#define START_SYSEX 0xF0 // start a MIDI Sysex message
#define END_SYSEX 0xF7   // end a MIDI Sysex message

// extended command set using sysex (0-127/0x00-0x7F)
/* 0x00-0x0F reserved for user-defined commands */
#define SERIAL_MESSAGE 0x60          // communicate with serial devices, including other boards
#define ENCODER_DATA 0x61            // reply with encoders current positions
#define ACCELSTEPPER_DATA 0x62       // control a stepper motor
#define SERVO_CONFIG 0x70            // set max angle, minPulse, maxPulse, freq
#define STRING_DATA 0x71             // a string message with 14-bits per char
#define STEPPER_DATA 0x72            // control a stepper motor
#define ONEWIRE_DATA 0x73            // send an OneWire read/write/reset/select/skip/search request
#define SHIFT_DATA 0x75              // a bitstream to/from a shift register
#define I2C_REQUEST 0x76             // send an I2C read/write request
#define I2C_REPLY 0x77               // a reply to an I2C read request
#define I2C_CONFIG 0x78              // config I2C settings such as delay times and power pins
#define EXTENDED_ANALOG 0x6F         // analog write (PWM, Servo, etc) to any pin
#define PIN_STATE_QUERY 0x6D         // ask for a pin's current mode and value
#define PIN_STATE_RESPONSE 0x6E      // reply with pin's current mode and value
#define CAPABILITY_QUERY 0x6B        // ask for supported modes and resolution of all pins
#define CAPABILITY_RESPONSE 0x6C     // reply with supported modes and resolution
#define ANALOG_MAPPING_QUERY 0x69    // ask for mapping of analog to pin numbers
#define ANALOG_MAPPING_RESPONSE 0x6A // reply with mapping info
#define REPORT_FIRMWARE 0x79         // report name and version of the firmware
#define SAMPLING_INTERVAL 0x7A       // set the poll rate of the main loop
#define SCHEDULER_DATA 0x7B          // send a createtask/deletetask/addtotask/schedule/querytasks/querytask request to the scheduler
#define SYSEX_NON_REALTIME 0x7E      // MIDI Reserved for non-realtime messages
#define SYSEX_REALTIME 0x7F          // MIDI Reserved for realtime messages

enum class byte : unsigned char
{
};

namespace firmata
{

class FirmataClass
{
public:
  typedef void (*callbackFunction)(uint8_t, int);
  typedef void (*systemCallbackFunction)(void);
  typedef void (*stringCallbackFunction)(char *);
  typedef void (*sysexCallbackFunction)(uint8_t command, uint8_t argc, uint8_t *argv);

  FirmataClass();

  /* query functions */
  void printVersion(void);
  void printFirmwareVersion(void);

  void sendValueAsTwo7bitBytes(int value);

  /* pin functions */
  void digitalOutput(byte port, int value);

  /* serial functions */
  void begin();
  void begin(long);
  void begin(Stream &s);

  /* serial receive handling */
  int available(void);
  void processInput(void);
  void parse(unsigned char value);
  bool isParsingMessage(void);
  bool isResetting(void);

  /* serial send handling */
  void sendAnalog(byte pin, int value);
  void sendDigital(byte pin, int value); // TODO implement this
  void sendDigitalPort(byte portNumber, int portData);
  void sendString(const char *string);
  void sendString(byte command, const char *string);
  void sendSysex(byte command, byte bytec, byte *bytev);
  void write(byte c);

  /* attach & detach callback functions to messages */
  void attach(byte command, callbackFunction newFunction);
  
  // void attach(byte command, systemResetCallbackFunction newFunction);
  void attach(byte command, stringCallbackFunction newFunction);
  void attach(byte command, sysexCallbackFunction newFunction);
  void detach(byte command);

  /* delegate to Scheduler (if any) */
  // void attachDelayTask(delayTaskCallbackFunction newFunction);
  void delayTask(long delay);

  /* access pin config */
  byte getPinMode(byte pin);
  void setPinMode(byte pin, byte config);

  /* access pin state */
  int getPinState(byte pin);
  void setPinState(byte pin, int state);

  /* utility methods */
  void sendValueAsTwo7bitBytes(int value);
  void startSysex(void);
  void endSysex(void);

private:
  Stream *FirmataStream;
};

}; // namespace firmata