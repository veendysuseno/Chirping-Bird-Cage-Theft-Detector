#define sensor 2          //Deklarasi pin sensor di D2
#define HallSen 3
#define Buzzer 8

void setup() {
  pinMode(sensor, INPUT);   //Setting I/O
  pinMode(HallSen, INPUT);
  pinMode(Buzzer, OUTPUT);
}

void loop() {
  int nilai_sensor = digitalRead(sensor); //Baca sensor IR
  int data = digitalRead(HallSen);        //Baca sensor hall

  if(nilai_sensor == LOW){            //Jika sensor bernilai LOW, maka
    for(int i = 0; i < 16; i++){      //Ulang prosedur alarm(); sebanyak 16 kali
      alarm();
    }
  }
  if(data == HIGH){                 //Jika tidak ada magnet, maka
    for(int i = 0; i < 5; i++){     //Ulang prosedur alarm(); sebanyak 5 kali
      alarm();
    }
  }
}

void alarm(){                         //Prosedur alarm
  digitalWrite(Buzzer, HIGH);         //Nyalakan buzzer
  delay(125);                         //Selama 125 ms
  digitalWrite(Buzzer, LOW);          //Matikan buzzer
  delay(125);                         //Selama 125 ms
}
