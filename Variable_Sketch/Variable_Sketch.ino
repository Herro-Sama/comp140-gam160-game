int button = 2;
int buttonstate;
int pot = A5;
int potval = 0;

void setup()
{
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop()
{
    buttonstate = digitalRead(button);
    potval = analogRead(pot);
    
    if (buttonstate == HIGH)
  {
    if  (potval <= 127); 
      {
      Serial.println(1);
      return;
      }
    if (potval <= 255)
      {
      Serial.println(2);
      return;
      }
    else if (potval <= 383)
      {
      Serial.println(3);
      return;
      }
    else if (potval <= 511)
      {
      Serial.println(4);
      return;
      }  
    else if (potval <= 639)
      {
      Serial.println(5);
      return;
      }
    else if (potval <= 767)
      {
      Serial.println(6);
      return;
      }    
    else if (potval <= 895)
      {
      Serial.println(7);
      return;
      }
    else
    {
    Serial.println(8);
    return;
    }
   
  }
  else
  {
    return;
  }

}
