#define led_verde_peaton 2
#define led_amarnillo_peaton 3
#define led_rojo_peaton 4

#define led_verde_auto 5
#define led_amarillo_auto 6
#define led_rojo_auto 7


#define pinEntrada A0


void setup(){

  pinMode(pinEntrada,INPUT_PULLUP);
  pinMode(led_verde_peaton,OUTPUT);
  pinMode(led_amarillo_peaton,OUTPUT);
  pinMode(led_rojo_peaton,OUTPUT);

  pinMode(led_verde_auto,OUTPUT);
  pinMode(led_amarillo_auto,OUTPUT);
  pinMode(led_rojo_auto,OUTPUT);



  inicia();


}

void loop(){

    for(int i = 0 ; i < 4; i++){
      delay(500);
      digitalWrite(led_verde_auto,LOW);
      digitalWrite(led_rojo_peaton,LOW);
      delay(500);  
      digitalWrite(led_verde_auto,HIGH);
      digitalWrite(led_rojo_peaton,HIGH);

    }
    delay(500);
    digitalWrite(led_verde_auto,LOW);
    digitalWrite(led_rojo_peaton,LOW);
    for(int i = 0; i<4; i++){
      digitalWrite(led_amarillo_auto,HIGH);
      digitalWrite(led_amarillo_peaton,HIGH);
      delay(500);
      digitalWrite(led_amarillo_auto,LOW);
      digitalWrite(led_amarillo_peaton,LOW);
      delay(500);
    }
    digitalWrite(led_rojo_auto,HIGH);
    digitalWrite(led_verde_peaton,HIGH);



    for(int i = 0; i<4; i++){
      digitalWrite(led_rojo_auto,LOW);
      digitalWrite(led_verde_peaton,LOW);
      delay(500);
      digitalWrite(led_rojo_auto,HIGH);
      digitalWrite(led_verde_peaton,HIGH);
      delay(500);
    }
    digitalWrite(led_rojo_auto,LOW);
    digitalWrite(led_verde_peaton,LOW);

    for(int i = 0; i<4; i++){
      digitalWrite(led_amarillo_auto,HIGH);
      digitalWrite(led_amarillo_peaton,HIGH);
      delay(500);
      digitalWrite(led_amarillo_auto,LOW);
      digitalWrite(led_amarillo_peaton,LOW);
      delay(500);
    }

  
    inicia();



}


void inicia(){
  digitalWrite(led_verde_auto,HIGH);
  digitalWrite(led_amarillo_auto,LOW);
  digitalWrite(led_rojo_auto,LOW);

  digitalWrite(led_verde_peaton,LOW);
  digitalWrite(led_amarillo_peaton,LOW);
  digitalWrite(led_rojo_peaton,HIGH);
}

