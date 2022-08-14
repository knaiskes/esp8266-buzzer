# esp8266-buzzer

Activate a buzzer through a Web page using an esp8266 microcontroller

# Components

- 1x esp8266 microcontroller
- 1x buzzer
- 2x male to male jumper wires **or** 2x female to female jumper wires (depends if you will use a breadboard)
- 1x breadboard (optional)

## Wiring

- Connect buzzer's positive (+) pin (the long one) to the D5 pin on the esp8266
- Connect buzzer's negative (-) pin (the short one) to one of the GND pins on the esp8266


# Software setup

## Dependencies

- Python
- Platformio

You may use Arduino IDE instead, if you wish so.

## Get the code

```
$ git clone git@github.com:knaiskes/esp8266-buzzer.git
```

## Add your network credentials

Open src/buzzer.ino file and add your network ssid and password

```
// network
const char* ssid = "";
const char* password = "";
```

## Install dependencies (Platformio)

```
$ cd esp8266-buzzer
$ source venv/bin/activate
$ python -m venv venv
$ pip install -r requirements.txt
```

## Upload sketch to esp8266

**Optionally** Erase everything from esp8266 before uploading the sketch

```
$ platformio run --target erase
```

Upload sketch

```
$ platformio run --target upload
```

**Note** If you receive something like the following error message:

```
Cannot open /dev/ttyUSB0: Permission denied
```

Run

```
$ sudo chmod 777 /dev/ttyUSB0
```

and try again
