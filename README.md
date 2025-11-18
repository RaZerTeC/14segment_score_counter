## 14segment_score_counter

Punktezähler-Platine für Brett- und Kartenspiele: 0–99 hoch/runterzählbar, 9 V-Batteriebetrieb, Anzeige des aktuellen Scores über 2* 7-Segment Anzeigen. Kein Unterlauf, bei 99 automatischer Sprung auf 0. Zusätzlicher Button fürs Zurücksetzen auf 0.

Eine kompakte (70*80mm), batteriebetriebene Punktezähl-Platine für den perfekten Spieleabend.


Projektdateien:

- **zaehler.kicad_pro**  
  Hauptprojektdatei von KiCad

- **zaehler.kicad_sch**  
  Schaltplan-Datei

- **zaehler.kicad_pcb**  
  Leiterplattenlayout



## Features

* Zählbereich: 0–99
* Mit Einschalttaste um Energie zu sparen
* Hoch- und Herunterzählen per jeweiligen Taster
* Automatischer Rücksprung am oberen Limit
* Kein Unterlauf möglich (0 bleibt 0)
* Betrieb mit 9-V-Batterie



## Aufbau & Verwendung

1. 9-V-Batterie anschließen
2. Einschalttaste auf ON
3. Up/Down-Taster auf der Platine nutzen, um den Punktestand anzupassen
4. Mit der Reset-Taste den Punktestand auf 0 zurücksetzen
5. Bei 99 springt der Zähler automatisch wieder nach vorne
6. Bei 0 stoppt der Down-Taster (kein Unterlauf)

Frontansicht der Platine:
<img width="923" height="711" alt="grafik" src="https://github.com/user-attachments/assets/b4d6b372-5eba-4860-8a9b-590e5af641de" />


Rückansicht der Platine
<img width="923" height="711" alt="grafik" src="https://github.com/user-attachments/assets/20551b87-3b85-4a39-a00f-a5beb8d5715e" />


Top-Layer der Platine
<img width="923" height="711" alt="PlatineVorderseite" src="https://github.com/user-attachments/assets/121ea50e-8065-41cb-9563-2439b8266913" />




## Ideen für Erweiterungen

* Speicherung des Punktestands im EEPROM -->Zurzeit wird der Punktestand bei Energieverlust zurückgesetzt
* Mehrstellige Anzeige (z. B. bis 999)
* Bluetooth-Integration für Punkte-Apps
* Gehäuse für die Platine


