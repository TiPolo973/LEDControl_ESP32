# 📌 LEDControl_ESP32

Une bibliothèque simple pour contrôler une LED avec un ESP32

## 🔥 Description

La bibliothèque LEDControl_ESP32 permet de contrôler une LED de manière simple et efficace sur un ESP32.
Elle offre deux fonctions principales :<br/>
✅ allumer() → Allume la LED<br/>
✅ eteindre() → Éteint la LED<br/>

## 📌 Avantages :

•	Facilité d'utilisation 🚀 <br/>
•	Code structuré en .h et .cpp 📂 <br/>
•	Compatible avec l’ESP32 <br/>

## 📦 Installation

1.	Télécharger le repo depuis GitHub

```cpp
git clone https://github.com/TiPolo973/LEDControl_ESP32.git
```

2.	Placer le dossier dans :

```cpp
Documents/Arduino/libraries/
```

3. Inclure la bibliothèque dans ton code :

```cpp
#include <ledcontrol.h>
```

## 🛠 Utilisation

### Exemple complet

```cpp
#include <ledcontrol.h>


LEDCONTROL led(13);


void setup(){
    Serial.begin(115200);
}


void loop(){
    led.allumer();
    Serial.println("Led allumé !!");
    delay(2000);
    led.eteindre();
    Serial.println("Led eteint !!")
    delay(2000);
}
```
