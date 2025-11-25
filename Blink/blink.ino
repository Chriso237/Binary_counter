#include <math.h>
#define LED_1 12
#define LED_2 11
#define LED_3 10
#define LED_4 9
#define LED_5 8

int led[5] = {8,9,10,11,12};
int list1;
void setup() {
  // put your setup code here, to run once: 
  for(int i=0;i<5;i++){
    pinMode(led[i],OUTPUT);
  }
  

}

void loop() {
  // put your main code here, to run repeatedly:
  
  for(int i=0;i<64;i++){
    int* list1 = binaryOf(i);
    for(int j=4;j>=0;j--){
      if(list1[j]==1){
        digitalWrite(led[j],HIGH);
      }else{
        digitalWrite(led[j],LOW);
      }
    }
    delay(500);
  }
  
  


}

int* binaryOf(int entier){
  double remainder, quotient;

  int* liste = malloc(5);

  int i=0;
    do
    { 
        remainder = entier % 2;
        quotient = entier / 2;

        entier = quotient;
        liste[i]=remainder;
        i++;
    } while (quotient!=0 && i<5);

  return liste;
}


