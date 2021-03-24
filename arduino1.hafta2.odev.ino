int y = 9;                        //Yeşil ledin bağlı olduğu PWN pinini belirttim. 
int s = 10;                       //Sarı ledin bağlı olduğu PWN pinini belirttim. 
int k = 11;                       //Kırmızı ledin bağlı olduğu PWN pinini belirttim. 

void setup() {                    
  pinMode(y , OUTPUT);            //Bu ledlerin çıkış için kullanılacağını belirttim.
  pinMode(s , OUTPUT);            
  pinMode(k , OUTPUT);
}

void loop() {
  digitalWrite(k , HIGH);         //Kırmızı lede 5V verdim.
  delay(10000);                   //10 saniye beklettim.
  digitalWrite(s , HIGH);         //Sarı lede 5V verdim.
  delay(10000);                   //10 saniye beklettim.
  digitalWrite(k , LOW);          //Kırmızı lede 0V verdim.
  digitalWrite(s , LOW);          //Sarı lede 0V verdim.
  delay(2000);                    //2 saniye beklettim.
  digitalWrite(y , HIGH);         //Yeşil lede 5V verdim.
  delay(5000);                    //5 saniye beklettim.
  digitalWrite(y , LOW);          //Yeşil lede 0V verdim.
}