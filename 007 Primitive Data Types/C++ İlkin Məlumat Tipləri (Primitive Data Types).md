# C++ İlkin Məlumat Tipləri (Primitive Data Types)

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
| `int` | 4 | $-2^{31}$ | $2^{31} - 1$ | Tam ədəd (onluq yoxdur) | Tam ədədlər üçün |
| `float` | 4 | $\approx 1.2 × 10^{-38}$ | $\approx 3.4 × 10^{38}$ | ~6-7 rəqəm dəqiqlik | Ondalıq ədədlər üçün |
| `double` | 8 | $\approx 2.3 × 10^{-308}$ | $\approx 1.7 × 10^{308}$ | ~15-16 rəqəm dəqiqlik | Daha dəqiq ondalıqlar üçün |
| `char` | 1 | $-128$ | $127$ | Yalnız bir simvol | Simvol saxlamaq üçün |
| `bool` | 1 | $false (0)$ | $true (1)$ | **1 bayt** (doğru/yanlış) | Məntiqi dəyərlər üçün |

**`bool` tipi niyə 1 bayt istifadə edir?** `bool` tipi məntiqən yalnız 1 bit məlumat saxlasa da (doğru/yalan), yaddaşda 1 bayt yer tutur. Bunun səbəbi müasir kompüterlərin bayt-əsaslı ünvanlama sistemi istifadə etməsi və performans səbəbləridir. Fərdi bitlərə müraciət etmək əlavə əməliyyatlar tələb edər.

> **Qeyd: Ölçülər və aralıqlar platformadan asılı olaraq dəyişə bilər (32/64 bit). Ən çox istifadə olunan dəyərlər göstərilmişdir.**
