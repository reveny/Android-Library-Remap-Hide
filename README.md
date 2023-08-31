# Android-Library-Remap-Hide
Remap a library to avoid detection

# Features
- [x] Hide library from anti cheats scanning /proc/self/maps
- [x] Remap Loader library to avoid traces
- [x] Emulator Support 

# How to use
All the necessary code is located in /app/src/main/jni/RemapTools.h and can be used in any project. <br>
Required is that you have 2 separate libraries. One to load everything and the other one containing your own code. <br>
Here: Loader: libRevenyInjector.so Code: libTest.so. <br>
Tested on Samsung Galaxy s22 (Android 13)

# Credit
This concept is inspired by Riru and Zygisk

# Contact
Telegram Group: https://t.me/reveny1 <br>
Telegram Contact: https://t.me/revenyy

# Preview
With Remap: <br>
![image_remap](https://github.com/reveny/Android-Library-Remap-Hide/blob/main/image_remap.png)

Without Remap:
![image_remap](https://github.com/reveny/Android-Library-Remap-Hide/blob/main/image_no_remap.png)
