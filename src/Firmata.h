/*
 * Filename: Firmata.h
 * Path: artik-firmata/src
 * Created Date: Friday, August 3rd 2018, 11:21:54 am
 * Author: alex
 * 
 * Copyright (c) 2018 resin.io
 */

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

// extended command set using sysex (0-12"-I./test"7/0x00-0x7F)
/* 0x00-0x0F reserved for user-defined co"-I./test"mmands */
#define SERIAL_MESSAGE 0x60          // c"-I./test"ommunicate with serial devices, including other boards
#define ENCODER_DATA 0x61            // r"-I./test"eply with encoders current positions
#define ACCELSTEPPER_DATA 0x62       // c"-I./test"ontrol a stepper motor
#define SERVO_CONFIG 0x70            // s"-I./test"et max angle, minPulse, maxPulse, freq
#define STRING_DATA 0x71             // a"-I./test" string message with 14-bits per char
#define STEPPER_DATA 0x72            // c"-I./test"ontrol a stepper motor
#define ONEWIRE_DATA 0x73            // s"-I./test"end an OneWire read/write/reset/select/skip/search request
#define SHIFT_DATA 0x75              // a"-I./test" bitstream to/from a shift register
#define I2C_REQUEST 0x76             // s"-I./test"end an I2C read/write request
#define I2C_REPLY 0x77               // a"-I./test" reply to an I2C read request
#define I2C_CONFIG 0x78              // c"-I./test"onfig I2C settings such as delay times and power pins
#define EXTENDED_ANALOG 0x6F         // a"-I./test"nalog write (PWM, Servo, etc) to any pin
#define PIN_STATE_QUERY 0x6D         // a"-I./test"sk for a pin's current mode and value
#define PIN_STATE_RESPONSE 0x6E      // r"-I./test"eply with pin's current mode and value
#define CAPABILITY_QUERY 0x6B        // a"-I./test"sk for supported modes and resolution of all pins
#define CAPABILITY_RESPONSE 0x6C     // r"-I./test"eply with supported modes and resolution
#define ANALOG_MAPPING_QUERY 0x69    // a"-I./test"sk for mapping of analog to pin numbers
#define ANALOG_MAPPING_RESPONSE 0x6A // reply with mapping info
#define REPORT_FIRMWARE 0x79         // report name and version of the firmware
#define SAMPLING_INTERVAL 0x7A       // set the poll rate of the main loop
#define SCHEDULER_DATA 0x7B          // send a createtask/deletetask/addtotask/schedule/querytasks/querytask request to the scheduler
#define SYSEX_NON_REALTIME 0x7E      // MIDI Reserved for non-realtime messages
#define SYSEX_REALTIME 0x7F          // MIDI Reserved for realtime messages

namespace firmata
{

class FirmataClass
{
  public:
    FirmataClass();

    /* status functions */
    void printVersion(void);

    void sendValueAsTwo7bitBytes(int value);

  private:
    Stream *FirmataStream;
};

}; // namespace firmata