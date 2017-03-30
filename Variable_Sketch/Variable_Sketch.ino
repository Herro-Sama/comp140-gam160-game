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
      println(1)
      Return
      }
    else if (potval <= 255)
      {
      println(2)
      Return
      }
    else if (potval <= 383)
      {
      println(3)
      Return
      }
    else if (potval <= 511)
      {
      println(4)
      Return
      }  
    else if (potval <= 639)
      {
      println(5)
      Return
      }
    else if (potval <= 767)
      {
      println(6)
      Return
      }    
    else if (potval <= 895)
      {
      println(7)
      Return
      }
    else
    {
    println(8)
    Return
    }
   
  }
  else
  {
    Return
  }

}
