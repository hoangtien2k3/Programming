

# Trong C++ có 5 phân vùng bộ nhớ cần nhớ:

    1. Text segment
    Text segment hay còn gọi là code segment là vùng nhớ lưu trữ các đoạn mã chương trình đã biên dịch


    2. Initialized Data segment
    Đây là vùng nhớ để lưu trữ các biến toán cục, các biến được khai báo với từ khóa static (đã được khởi tạo giá trị)


    3. Unitialized Data segment
    Đây là vùng nhớ để lưu trữ các biến toán cục, các biến được khai báo với từ khóa static (nhưng chưa được khởi tạo giá trị)


    4. Heap
    Đây là vùng nhớ dùng cho cấp phát động, và vùng nhớ này thì không được quản lý bởi CPU, 
    cùng vì đó mà bạn phải tự quản lý vùng nhớ này để không bị tràn vùng nhớ.


    5. Stack
    Đây là vùng nhớ để lưu trữ các biến cục bộ, vùng nhớ này có tốc độ truy xuất nhanh nhưng có kích thước nhỏ.