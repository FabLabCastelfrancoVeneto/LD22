## ESP8266 
Il codice per ESP8266 + DHT22 + LDR (quest'ultimo non usato durante il workshop)
Questo codice invia una GET a una istanza di NodeRed che restituisce il JSON di quanto inviato (utile per verificare la validità della richiesta).
E' possibile inserire nella richiesta tali campi:
| campo | descrizione |
| ----- | ----------- |
| id | id riferito al dispositivo, per differenziare tra di loro più dispositivi |
| temp | temperatura rilevata |
| hum | umidità rilevata |
| light | luminosità rilevata |

Es. URL:
http://192.168.1.123:1880/test?id=0&temp=22.5&hum=35&light=512
