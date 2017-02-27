int green = 4;
int yellow = 6;
int red = 8;
int button = 2;
int buttonstate;
int pot = A5;
int potval = 0;

void setup()
{
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop()
{
    buttonstate = digitalRead(button);
    potval = analogRead(pot);
    
    if (buttonstate == HIGH)
    {
    Serial.println(potval);  
    digitalWrite(green, HIGH);
    delay(1000);
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(1000);
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    delay(1000);
    digitalWrite(yellow, HIGH);
    delay(1000);
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    delay(1000);
    }
    else
    {
      digitalWrite(red, LOW);
      digitalWrite(yellow, LOW);
      digitalWrite(green, LOW);

    }
}
