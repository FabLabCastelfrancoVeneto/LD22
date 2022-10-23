## Hardware
Durante il workshop sono state utilizzate delle NodeMCU e Wemos D1 R2 & mini, basati entrambi su ESP8266

Il codice di partenza utilizzato è quello a disposizione negli esempi:
File -> Examples -> ESP8266HTTPClient -> BasicHttpClient

Dopo qualche giro di rodaggio, abbiamo aggiunto anche un sensore di temperatura / umidità DHT22 (nel codice allegato anche un LDR) e abbiamo iniziato a lavorare con delle semplici API da usare con delle chiamate GET.

Il codice generato invia una chiamata GET a una istanza di NodeRed (tutto in rete locale) che restituisce il JSON di quanto inviato (utile per verificare la validità della richiesta).
E' possibile inserire nella richiesta tali campi:
| campo | descrizione |
| ----- | ----------- |
| id | id riferito al dispositivo, per differenziare tra di loro più dispositivi |
| temp | temperatura rilevata |
| hum | umidità rilevata |
| light | luminosità rilevata |

Es. URL:
http://192.168.1.123:1880/test?id=0&temp=22.5&hum=35&light=512

Il risultato è analogo a quanto riportato in immagine (printscreen-ato in secondo momento, purtroppo), dove a colore diverso corrisponde dispositivo diverso.
![Screenshot dei grafici con i dati ricevuti dai sensori](https://github.com/FabLabCastelfrancoVeneto/LD22/blob/main/assets/dashboard.png?raw=true "Screenshot dei grafici con i dati ricevuti dai sensori")

Maggiori informazioni sulla dashboard o sulla istanza NodeRed nella cartella dedicata.
