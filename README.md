# esp8266-buzzer

![20220814_143953](https://user-images.githubusercontent.com/6069054/184535306-3998d0f2-df24-4a14-8ac2-aa0d9c5720ac.jpg)

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

# Activate buzzer

When the esp8266 is connected to your network, you can visit its IP address in
order to activate the buzzer.

You can find its IP from your router's settings page.

By default the hostname is defined as *buzzer* but you can change it to anything you like in src/buzzer.ino

```
const char* hostName = "buzzer";
```
