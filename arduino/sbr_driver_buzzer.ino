void initBuzzer(void)
{
    pinMode(PIN_BUZZER, OUTPUT);
    playBuzzerSound(100, 1000);
}

void playBuzzerSound(uint8_t freq, uint8_t time)
{
    tone(PIN_BUZZER, freq);
    delay(time);
    noTone(PIN_BUZZER);
}
