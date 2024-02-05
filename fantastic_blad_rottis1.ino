int led0 = 2;
int led1 = 3;
int led2 = 4;
int led3 = 5;
int led4 = 6;
int led5 = 7;
int switch0 = 8;
int switch1 = 9;
void setup()
{
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(switch0, INPUT);
  pinMode(switch1, INPUT);
}

void loop()
{
  if(digitalRead(switch1)== HIGH){
  
  digitalWrite(led5, HIGH);
 digitalWrite(led4, HIGH);
  delay(1000);
  }
  else{

  digitalWrite(led5, LOW);
 digitalWrite(led4, LOW);
  delay(1000);

  }

  if(digitalRead(switch0)== HIGH){
  
  digitalWrite(led2, HIGH);
 digitalWrite(led0, HIGH);
  delay(1000);
  }
  else{

  digitalWrite(led2, LOW);
 digitalWrite(led0, LOW);
  delay(1000);

  }







}