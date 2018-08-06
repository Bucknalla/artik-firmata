/*
 * Filename: /home/alex/GitHub/artik-firmata/main.cpp
 * Path: /home/alex/GitHub/artik-firmata
 * Created Date: Monday, August 6th 2018, 10:17:42 am
 * Author: alex
 * 
 * Copyright (c) 2018 Your Company
 */

#include "src/firmata.h"

using namespace firmata;

int main(void)
{
    FirmataClass test;

    test.printVersion();

    return 0;
};