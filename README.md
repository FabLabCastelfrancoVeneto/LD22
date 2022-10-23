# LD22
Materiale utilizzato durante LinuxDay 2022 con il PNLug
Le slides sono allegate ma per fruizione migliore si consiglia di visionare la versione online:
https://bit.ly/FabLabCFV_LD22_slides

Nelle diverse cartelle il codice utilizzato o generato durante l'evento.

## ESP8266 
Il codice per ESP8266 + DHT22 + LDR (quest'ultimo non usato durante il workshop)
Questo codice invia una GET a una istanza di NodeRed che restituisce il JSON di quanto inviato (utile per verificare la validità della richiesta).
E' possibile inserire nella richiesta tali campi:
id : id riferito al dispositivo, per differenziare tra di loro più dispositivi
temp : temperatura rilevata 
hum : umidità rilevata
light : luminosità rilevata

Es. URL:
http://192.168.1.123:1880/test?id=0&temp=22.5&hum=35&light=512

## NodeRed

## M5Stack

