
#define SENSOR 2
#define ACTION 8
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(SENSOR, INPUT);
  //pinMode(ACTION, OUTPUT); en caso de tener el led

}

void loop() {
  // put your main code here, to run repeatedly:

  int detected = digitalRead(SENSOR); //leer el pin del sensor
  int detectedAn = analogRead(A0);//leer el valor analogico

  if( detected == LOW ){

    digitalWrite(ACTION, HIGH);//prender el led
    Serial.println("Detected");
    Serial.println(detectedAn);
    }

   else{
    digitalWrite(ACTION, LOW);
    Serial.println("Nothing");
    }

   delay(200);

   //https://www.luisllamas.es/medir-campos-magneticos-arduino-hall-49e/
   //https://www.luisllamas.es/detectar-campos-magneticos-con-arduino-y-sensor-hall-a3144/
   //http://materias.df.uba.ar/l4aa2017c2/files/2017/09/Campos-magneticos.pdf
   //https://www.hackster.io/amal-ns/hall-effect-sensor-with-arduino-390916
   //http://www.electronics-lab.com/project/using-hall-effect-sensor-arduino/
   //https://www.youtube.com/watch?v=QH1Lw9BwTJI




   //https://youtu.be/zZJkfC8LCNA
   //https://youtu.be/Q6f3VA2Vsic
   //https://www.youtube.com/watch?v=Q6f3VA2Vsic
}
