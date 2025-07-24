# C++ Məlumat Tipləri (Data Types)

## C++-da Məlumat Tipləri Nədir?

C++-da məlumat tipləri dəyişənlərin elanında istifadə olunur və həmin dəyişənin yaddaşda nə qədər yer tutacağını və hansı tipdə dəyərlər saxlaya biləcəyini müəyyən edir.

**Məsələn:**

```cpp
int age = 13;
```

Burada `age` dəyişəni `int` tipindədir, yəni yalnız tam ədədlər saxlaya bilər (adətən 4 bayt ölçüsündə).

---

## C++ Əsas Məlumat Tipləri və Onların Xüsusiyyətləri

Aşağıdakı cədvəldə əsas məlumat tipləri, onların ölçüləri, minimal və maksimal dəyərləri, həmçinin dəqiqlik (precision) barədə məlumat verilir:

| Məlumat Tipi | Ölçü (bayt) | Minimum Dəyər | Maksimum Dəyər | Dəqiqlik / Xüsusiyyət | İzah |
| --- | --- | --- | --- | --- | --- |
| `int` | 4 | $2,147,483,648$ | $2,147,483,647$ | Tam ədəd (onluq yoxdur) | Tam ədədlər üçün |
| `float` | 4 | $1.2 × 10^{-38}$ | $3.4 × 10^{38}$ | ~6-7 rəqəm dəqiqlik | Ondalıq ədədlər üçün |
| `double` | 8 | $2.3 × 10^{-308}$ | $1.7 × 10^{308}$ | ~15-16 rəqəm dəqiqlik | Daha dəqiq ondalıqlar üçün |
| `char` | 1 | $-128$ | $127$ | Yalnız bir simvol | Simvol saxlamaq üçün |
| `bool` | 1 | false (0) | true (1) | 1 bit (doğru/yanlış) | Məntiqi dəyərlər üçün |
| `long` | 4 və ya 8 | $-2,147,483,648$ və ya$-9,223,372,036,854,775,808$ | $2,147,483,647$ və ya$9,223,372,036,854,775,807$ | Tam ədəd (onluq yoxdur) | Böyük tam ədədlər üçün |
| `long long` | 8 | $-9,223,372,036,854,775,808$ | $9,223,372,036,854,775,807$ | Tam ədəd (onluq yoxdur) | Çox böyük tam ədədlər üçün |
| `long double` | 8, 12, 16 | $3.4 × 10^{-4932}$ | $1.1 × 10^{4932}$ | ~18-21 rəqəm dəqiqlik | Ən dəqiq ondalıq dəyərlər |
| `unsigned char` | 1 | $0$ | $255$ | Yalnız bir simvol | Müsbət simvollar üçün |

> **Qeyd: Ölçülər və aralıqlar platformadan asılı olaraq dəyişə bilər (32/64 bit). Ən çox istifadə olunan dəyərlər göstərilmişdir.**
