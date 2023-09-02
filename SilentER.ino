int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,x; //10 кадров

int a[10];
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {

  
  for (int i=0;i<10;i++){
 
  
  a[i]=random(0,10);

  if (i==8) {x=random(0,100);
      Serial.print(a[i]);
        Serial.print(" ");
      Serial.println(x);
    } else {
       
      Serial.print(a[i]);
        Serial.print(" ");
      Serial.println(x);

      }
    
   } //фоткаем момент из 10 исчислений, генерируем волну


   //показываем волну запечатленную
delay(1000);
  //processing

  //показать результат в видео одного показателя
}
