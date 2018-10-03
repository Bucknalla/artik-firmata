Balena Fin Firmata
==================

This document contains how-tos and FAQs oriented to Etcher users.

Why is my drive not bootable?
-----------------------------

Etcher copies images to drives byte by byte, without doing any transformation
to the final device, which means images that require special treatment to be
made bootable, like Windows images, will not work out of the box. In these
cases, the general advice is to use software specific to those kind of
images, usually available from the image publishers themselves.

Images known to require special treatment:

- Microsoft Windows (use [Windows USB/DVD Download Tool][windows-usb-tool], 
  [Rufus][rufus], or [WoeUSB][woeusb]).

- Windows 10 IoT (use the [Windows 10 IoT Core Dashboard][windows-iot-dashboard])

How can I configure persistent storage?
---------------------------------------

Some programs, usually oriented at making GNU/Linux live USB drives, include an
option to set persistent storage. This is currently not supported by Etcher, so
if you require this functionality, we advise to fallback to
[UNetbootin][unetbootin].

Deactivate desktop shortcut prompt on GNU/Linux
-----------------------------------------------