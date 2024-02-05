// C++ code
int red=3;
void setup()
{
  pinMode(red, OUTPUT);
}

void loop()
{
  for(int i=0;i<=255;i+=5){
analogWrite(3, i);
    delay(50);}
  for(int i=255;i<=255;i-=5){
analogWrite(3, i);
    delay(50);}
  
  
}    
  
