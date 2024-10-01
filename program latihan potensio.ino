// Definisikan pin analog
int potPin = 14;  // Gunakan GPIO 34 untuk membaca potensiometer

void setup() {
  // Inisialisasi serial monitor untuk menampilkan data
  Serial.begin(115200);
}

void loop() {
  // Membaca nilai analog dari potensiometer (range: 0-4095)
  int potValue = analogRead(potPin);
  
  // Konversi nilai ADC ke tegangan (3.3V max untuk ESP32)
  float voltage = (potValue / 4095.0) * 3.3;
  
  // Tampilkan nilai ADC dan tegangan di serial monitor
  Serial.print("Nilai ADC: ");
  Serial.print(potValue);
  Serial.print("\t Tegangan: ");
  Serial.print(voltage);
  Serial.println(" V");
  
  // Tunggu sebentar sebelum membaca lagi
  delay(500);
}
