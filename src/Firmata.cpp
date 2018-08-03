/*
 * Filename: /home/alex/GitHub/artik-firmata/src/firmata.cpp
 * Path: /home/alex/GitHub/artik-firmata/src
 * Created Date: Friday, August 3rd 2018, 10:43:42 am
 * Author: alex
 * 
 * Copyright (c) 2018 Your Company
 */

#include "Firmata.h"

#include <string.h>
#include <stdlib.h>

using namespace firmata;

//******************************************************************************
//* Constructors
//******************************************************************************

/**
 * The Firmata class.
 * An instance named "Firmata" is created automatically for the user.
 */
FirmataClass::FirmataClass()
{
}

/*
 * Send the Firmata protocol version to the Firmata host application.
 */

void FirmataClass::printVersion(void)
{
    FirmataStream->write(REPORT_VERSION);
    FirmataStream->write(FIRMATA_MAJOR_VERSION);
    FirmataStream->write(FIRMATA_MINOR_VERSION);
}
