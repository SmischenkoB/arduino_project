int pirPin =7; // дорожка для датчика
int ledPin =13;// дорожка для лампочки
int soundPin=8;//дорожка для детектора звука
bool sound=1;
int soundValue;
void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(soundPin,INPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly;
  if (digitalRead(pirPin)&&sound)// ????if(digitalRead(pirPin))???? then without value
  {
      digitalWrite(ledPin, HIGH);
      Serial.print("Motion");  
  }
  else
  {
      digitalWrite(ledPin, LOW);
      Serial.print("NO MOVEMENT");
  }

soundValue= analogRead(soundPin);
  Serial.print(soundValue);
/*
 if(soundValue>N) 
{  
  delay(200); //ожидаем 200милисекунд для повторного хлопка - можно не делать но в моём случае это добавило удобства
  for(int t=0;t<=500;t++) //цикл на проверку второго хлопка по идее на пол секунды но ардуино делает его дольше
  {
    delay(1); //для цикла
    analogData=analogRead(0);//считываем данные
    if(analogData>120){  //сверяем данные для второго хлопка, если он был то меняем состояние лампы с вкл на выкл и наоборот
      ledstate=!ledstate; //меняем состояние
      analogData=0;//обнуляем данные
      break;//выходим из цикла после второго хлопка
      delay(200);//для удобства
    }
}

  */

  
}
