//! /////////////////////////////////////////

if ( a ) có nghĩa là nếu a != 0, có thể đọc là nếu có a thì
if ( !a ) có nghĩa là nếu a == 0, có thể đọc là nếu không a thì


//! /////////////////////////////////////
%c : Ký tự đơn

%s : Chuỗi

%d : Số nguyên hệ 10 có dấu

%u : Số nguyên hệ 10 không có dấu

%f : Số chấm động (VD 6.33 khi in sẽ ra 6.330000)

%e : Số chấm động (ký hiệu có số mũ)

%g : Số chấm động (VD 6.33 khi in sẽ in ra 6.33)

%x : Số nguyên hex không dấu (hệ 16)

%o : Số nguyên bát phân không dấu (hệ 8)

%p : Địa chỉ con trỏ

l : Tiền tố dùng kèm với %d, %x, %o để chỉ số nguyên dài (ví dụ%ld)



//! ///////////////////////////////////////////////

Chúng ta có thể rút ra 1 số kết luật như sau:﻿

%6d: xuất kí tự có bề rộng là 6.

%06d: xuất kí tự có bề rộng là 6 nhưng hiển thị cả chữ số 0.

%6.3f:xuất ra chữ số thực có bề rộng là 6 (tính cả dấu “.”) trong đó có 3 chữ số sau dấu phẩy.

%.3f: xuất ra chữ số thực có 3 chữ số sau dấu phẩy.