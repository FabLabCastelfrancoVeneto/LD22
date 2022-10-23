## HARDWARE  
In occasione del workshop ho voluto testare anche qualche componente dell'ecosistema [M5Stack](https://m5stack.com/).
In particolare ho usato: 
- M5StickC PLUS ESP32-PICO Mini IoT Development Kit
- M5StickC ENV III HAT (SHT30, QMP6988)
- Light Sensor Unit with Photo-resistance

Il codice è stato generato con [UIFlow](https://flow.m5stack.com/).
Si tratta di ambiente di prototipazione rapida a blocchi molto evoluto, che permette anche caricamento del codice OTA.
Questo codice invia una POST a una istanza di NodeRed che restituisce il JSON di quanto inviato (utile per verificare la validità della richiesta).
E' possibile inserire nella richiesta tali campi:
| campo | descrizione |
| ----- | ----------- |
| id | id riferito al dispositivo, per differenziare tra di loro più dispositivi |
| temp | temperatura rilevata |
| hum | umidità rilevata |
| light | luminosità rilevata |

![Screenshot del programma fatto con UIFlow](https://github.com/FabLabCastelfrancoVeneto/LD22/blob/main/assets/uiflow.png?raw=true "Screenshot del programma fatto con UIFlow")
