# 🌡️ Arduino LM35 Monitor

## 📝 Mô tả & Tính năng


## 🛠️ Phần cứng
| Linh kiện | Số lượng | Kết nối |
| :--- | :---: | :--- |
| Arduino Uno | 01 | Board chính |
| Cảm biến LM35 | 03 | A0, A1, A2 |

## 🚀 Hướng dẫn
1. Kết nối 3 cảm biến LM35 vào chân A0, A1, A2.
2. Nạp code trong thư mục `firmware/`.
3. Mở Serial Monitor (9600 baud) để xem chuỗi JSON.

## 📂 Cấu trúc
* `firmware/`: Mã nguồn `.ino`
* `docs/`: Tài liệu & Sơ đồ
* `README.md`: Hướng dẫn này

## 👥 Nhóm thực hiện
* **Yen Nhi (Leader):** Quản lý Git, xử lý JSON & Conflict.
* **SV A:** Phát triển đọc đa kênh.
* **SV B:** Tối ưu Serial Output.
