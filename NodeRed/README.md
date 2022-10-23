## Backend + Frontend

Per testate API in modo semplice, veloce, efficace ed in locale (per comodità di gestione rete), la scelta è ricaduta su [NodeRed](https://nodered.org/).
E' stato possibile quindi in tempi brevi istanziare un endpoint HTTP: 
- abile a ricevere chiamate GET (e uno per ricevere POST)
- che rispondesse restituendo quanto ricevuto (per validare lato client)
- che rappresentasse graficamente quanto ricevuto usando la palette Dashboard (differenziando quanto ricevuto da differenti nodi)

Le informazioni processate (sia che arrivino con GET che con POST) sono:
| campo | descrizione |
| ----- | ----------- |
| id | id riferito al dispositivo, per differenziare tra di loro più dispositivi |
| temp | temperatura rilevata |
| hum | umidità rilevata |
| light | luminosità rilevata |

Per utilizzare il flow, preinstallare la palette [node-red-dashboard](https://flows.nodered.org/node/node-red-dashboard) prima di importare il file _nodered_test.json_ qui presente.

Nelle cartelle ESP8266 e M5Stack un paio di esempi di codice utilizzati.

Il risultato è analogo a quanto riportato in immagine (printscreen-ato in secondo momento, purtroppo), dove a colore diverso corrisponde dispositivo diverso.

![Screenshot dei grafici con i dati ricevuti dai sensori](https://github.com/FabLabCastelfrancoVeneto/LD22/blob/main/assets/dashboard.png?raw=true "Screenshot dei grafici con i dati ricevuti dai sensori")
