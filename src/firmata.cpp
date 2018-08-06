/*
 * Filename: /home/alex/GitHub/artik-firmata/src/firmata.cpp
 * Path: /home/alex/GitHub/artik-firmata/src
 * Created Date: Friday, August 3rd 2018, 10:43:42 am
 * Author: alex
 * 
 * Copyright (c) 2018 Your Company
 */

#include "firmata.h"


using namespace firmata;

//******************************************************************************
//* Constructors
//******************************************************************************

/*
 * The Firmata class.
 * An instance named "Firmata" is created automatically for the user.
 */

FirmataClass::FirmataClass()
{
}

//******************************************************************************
//* Initialization
//******************************************************************************

/*
 * Send the Firmata protocol version to the Firmata host application.
 */

void FirmataClass::printVersion(void)
{
    FirmataStream->write(REPORT_VERSION);
    FirmataStream->write(FIRMATA_MAJOR_VERSION);
    FirmataStream->write(FIRMATA_MINOR_VERSION);
    FirmataStream->write(FIRMATA_BUGFIX_VERSION);
}

//******************************************************************************
//* Digital I/O
//******************************************************************************

/*
 * Sets the value of an individual pin. Useful if you want to set a pin value but
 * are not tracking the digital port state.
 * Can only be used on pins configured as OUTPUT.
 * Cannot be used to enable pull-ups on Digital INPUT pins. 
 */

void FirmataClass::digitalOutput(byte port, int value){
    
};
