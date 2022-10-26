# LD22
Materiale utilizzato durante [LinuxDay 2022 con il PNLug](https://wiki.pnlug.it/index.php?title=Linux_Day_2022).\
Le slides sono allegate ma per fruizione migliore si consiglia di visionare la [versione online](https://bit.ly/FabLabCFV_LD22_slides).

Questo Linux Day è stato dedicato ad avviare dei progetti con scuole del territorio pordenonese.\
Nella sezione "Comunicato stampa" del wiki si può trovare la modalità di svolgimento degli stessi.\
Abstract del progetto proposto da FabLabCFV, titolato "**Che aria tira a Pordenone**" è disponibile [qui](https://bit.ly/FabLabCFV_LD22_PropostaProgetto).

Brevemente l'idea è di:
- far realizzare ai ragazzi degli istituti coinvolti delle centraline in grado di misurare la qualità dell'aria
- far "ospitare" queste centraline presso municipalità, esercenti, luoghi pubblici ma anche privati in modo che possano fruire di alimentazione e di una connessione wifi
- pubblicare i dati raccolti su piattaforme aperte e liberamente accessibili in modo che rimangano a disposizione della cittadinanza
- pubblicare in licenza libera tutto il necessario a replicare una centralina per contribuire alla pubblicazione di dati (che sia hardware, software o di API)

Il progetto si può declinare in molto modi, usando hardware molto diverso e con sensori di diversa precisione e caratteristiche, e con le più disparate piattaforme online.\
Durante il mese di _lavoro_ andremo a definire in concerto tutti gli aspetti peculiari.

Nelle slides la prima parte è relativa alla presentazione titolata:\
"Open source: strumento di cittadinanza attiva"\
mentre la seconda parte è dedicata a qualche introduzione e incipit per la parte di workshop.\
Il workshop ha lo scopo di far incontrare designer con docente e studenti che porteranno avanti il progetto, lavorando su alcuni elementi base.

Nelle diverse cartelle il codice utilizzato o generato durante l'evento.


## WORKSHOP
Durante il workshop sono state utilizzate delle NodeMCU e Wemos D1 R2 & mini, basati entrambi su ESP8266.

Inizialmente abbiamo giocato con la versione [_cowsay_ per il web](http://cowsay.morecode.org/): espone infatti delle API che ci son servite per le prime sperimentazioni con le GET!
Es: http://cowsay.morecode.org/say?message=Welcome+to+the+LinuxDay+2022%21&format=text
```  
  _____________________________
< Welcome to the LinuxDay 2022! >
  -----------------------------
         \   ^__^ 
          \  (oo)\_______
             (__)\       )\/\
                 ||----w |
                 ||     ||
 ``` 

Successivamente abbiamo usato una istanza NodeRed per gestire le chiamate GET generate dalle schede e per generare una dashboard base.
Nelle cartelle [ESP8266](https://github.com/FabLabCastelfrancoVeneto/LD22/tree/main/ESP8266) e [NodeRed](https://github.com/FabLabCastelfrancoVeneto/LD22/tree/main/NodeRed) si trovano spiegazioni e codici.

Nella parte finale del workshop abbiamo visto un ottimo esempio di portale che serve a raccogliere dati, a salvarli su db, ad organizzarli ed eventualmente elaborarli, e a graficarli.\
Ha delle API molto ben documentate, utilizza delle APIKEY, e permette di creare e condividere dashboard in maniera davvero molto semplice.

Si tratta di [Emoncms](https://emoncms.org/), un tempo utilizzabile senza fee anche nella sua istanza pubblica, ma sempre e comunnque open source e installabile ovunque (basta una configurazione LAMP).\
Disponibile anche ISO per RaspberryPi.\
https://github.com/emoncms/emoncms#install

Per una overvew sull'uso di Emoncms e le sue API, creazione di dashboard e altri ammenicoli, è possibile ache dare una sbirciata a questo tutorial _old but gold_ (old nel senso che la UI è cambiata nel tempo):\
https://playground.arduino.cc/Italiano/Emoncms/




