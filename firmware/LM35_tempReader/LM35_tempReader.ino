int adcValues[3];      // Mang chua gia tri ADC cho 3 kenh
float nhietDo[3];      // Mang chua gia tri nhiet do sau khi chuyen doi
char chuoi[50];        // Bo dem chuoi de gui du lieu CSV

void setup() {
  Serial.begin(9600);
  delay(100);
}

void loop() {
<<<<<<< HEAD
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
  // Doc va tinh toan cho ca 3 kenh A0, A1, A2
  for (int i = 0; i < 3; i++) {
    adcValues[i] = analogRead(i); // i se chay tu 0 den 2 tuong ung A0, A1, A2
    nhietDo[i] = (adcValues[i] * 500.0) / 1023.0;
  }
  
  // Dong goi thanh chuoi CSV: "temp0,temp1,temp2"
  // Su dung (int) de lam tron nhiet do cho gon
  sprintf(chuoi, "%d,%d,%d\n", (int)nhietDo[0], (int)nhietDo[1], (int)nhietDo[2]);
  
  // Gui chuoi len may tinh
  main
  Serial.print(chuoi);
  
  delay(1000); // Tăng delay lên 1s để dễ quan sát chuỗi JSON
}
