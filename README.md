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
![image_remap](https://github.com/reveny/Android-Library-Remap-Hide/assets/113244907/f99b92f8-8f48-4d50-9617-fba82a814c70)

Without Remap:
![image_no_remap](https://github.com/reveny/Android-Library-Remap-Hide/assets/113244907/24224ef0-c2e7-429e-8608-99ccd256bced)
