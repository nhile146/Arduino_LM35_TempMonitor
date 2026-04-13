int adcValues[3];      // Giữ của SV A: Mảng 3 kênh
float nhietDo[3];      // Giữ của SV A: Mảng 3 kênh
char chuoi[100];       // Tăng bộ đệm lên 100 để chứa chuỗi JSON dài

void setup() {
  Serial.begin(9600);
  delay(100);
}

void loop() {
  // 1. Đọc và tính toán cho 3 kênh (Thừa hưởng từ SV A)
  for (int i = 0; i < 3; i++) {
    adcValues[i] = analogRead(i); 
    nhietDo[i] = (adcValues[i] * 500.0) / 1023.0;
  }
  
  // 2. Đóng gói định dạng JSON chuyên nghiệp (Cải tiến từ ý tưởng của SV B)
  // Kết quả: {"A0": 25, "A1": 26, "A2": 25}
  sprintf(chuoi, "{\"A0\": %d, \"A1\": %d, \"A2\": %d}\n", 
          (int)nhietDo[0], (int)nhietDo[1], (int)nhietDo[2]);
  
  // 3. Gửi dữ liệu lên máy tính
  Serial.print(chuoi);
  
  delay(1000); // Giữ delay 1s của SV B để dễ quan sát
}