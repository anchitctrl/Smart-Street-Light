int ldr=A2;
int ldr_value;
int light=3;
void setup()
{
pinMode(light, OUTPUT);
pinMode(ldr, INPUT);
}
void loop()
{
ldr_value=analogRead(ldr);
if (ldr_value>512)
digitalWrite(light, LOW);
else
digitalWrite(light, HIGH);
}
