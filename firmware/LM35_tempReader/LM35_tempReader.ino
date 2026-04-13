int adcValues[2]; 
float nhietDo[2]; 
char chuoi[30];

void setup() {
  Serial.begin(9600);
  delay(100);
}

void loop() {
  // Doc va tinh toan cho 3 kenh
  for (int i = 0; i < 3; i++) {
    adcValues[i] = analogRead(i);
    nhietDo[i] = (adcValues[i] * 500.0) / 1023.0;
  }
  
  // Dong goi thanh dinh dang JSON chuyên nghiệp
  // Định dạng: {"A0": 25, "A1": 26, "A2": 25}
  sprintf(chuoi, "{\"A0\": %d, \"A1\": %d, \"A2\": %d}\n", 
          (int)nhietDo[0], (int)nhietDo[1], (int)nhietDo[2]);
  
  // Gui chuoi len Serial
  Serial.print(chuoi);
  
  delay(1000); // Tăng delay lên 1s để dễ quan sát chuỗi JSON
}
