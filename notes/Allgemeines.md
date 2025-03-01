# Allgemeines

- Modellkomplexität im Fokus für Port
- Je komplexer das Modell, desto weniger ist es für den Betrieb auf einem Microcontroller/Arduino geeignet

## Predict() und Predict_Proba()

- Die Ermittlung des Labels bei **Multi-Klassifizierung** erfolgt bei XGB indem zuerst die Wahrscheinlichkeit für jedes Label ermittelt und danach das Label mit der höchsten Wahrscheinlichkeit zurückgegeben wird
