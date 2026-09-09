# ESP32 Provisioning: Store Creds <a href="https://www.ohioiot.com"><img src="https://www.ohioiot.com/logo_150.jpg" width="40" ></a>


## Overview
This code serves is an output from the YouTube video [ESP32 Provisioning - Store Your Credentials](https://youtu.be/rn4CZpfgST4).  👉 Subscribe to the [OhioIoT YouTube Channel](https://www.youtube.com/@OhioIoT?sub_confirmation=1) for more on All Things IoT: hardware, firmware, connectivity, cloud computing, and dev toolkit.



## Getting Started
```
git clone https://github.com/OhioIoT-ESP32-Provisioning-Examples/Store-Creds.git
```


### Getting Started - PlatformIO
- Compile and run

### Getting Started - Arduino IDE 
- copy ***/src/main.cpp*** into a new sketch ***store_creds/store_creds.ino*** (or whatever name you choose) in your Arduino projects folder
- copy the ***lib/provisioner*** and ***lib/storage*** folders into your ***libraries/*** folder in your Arduino projects folder
- Compile and run



## About
*OhioIoT is an IoT platform designed for small-scale IoT projects (https://www.ohioiot.com).*


## Updates

**10/13/25** - added some Serial.prints so that the provisioning SSID and IP address are confirmed for the user

**10/18/25** - WiFi.begin() will put the WiFi in WIFI_STA mode automatically if it comes from WIFI_OFF.  However, if the device is coming from WIFI_AP mode, WiFi.begin() will apparently put it in WIFI_AP_STA mode, and leave the DEVICE_PROVISIONING SSID active.  So, best to explicitly call WiFi.mode(WIFI_STA) before WiFi.begin() in _src/main.cpp_.  
