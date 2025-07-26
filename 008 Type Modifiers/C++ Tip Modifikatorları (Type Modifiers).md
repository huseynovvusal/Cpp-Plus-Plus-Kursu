# C++ Tip Modifikatorları (Type Modifiers)

## C++-da Tip Modifikatorları Nədir?

Tip modifikatorları, əsas məlumat tiplərinin xüsusiyyətlərini dəyişmək üçün istifadə olunur. Onlar tipin dəyər aralığını və ya yaddaş həcmini dəyişdirirlər.

C++-da 4 əsas tip modifikatoru var:

1. `signed` (işarəli)
2. `unsigned` (işarəsiz)
3. `short` (qısa)
4. `long` (uzun)

Bu modifikatorlar əsasən `int` və `char` tipləri ilə birləşdirilib istifadə olunur.

---

## Əsas Tip Modifikatorları və Onların Xüsusiyyətləri

Aşağıdakı cədvəldə modifikasiya olunan tiplər, onların ölçüləri və dəyər aralıqları göstərilmişdir:

| Modifikasiya Olunmuş Tip | Ölçü (bayt) | Minimum Dəyər | Maksimum Dəyər | İzah |
| --- | --- | --- | --- | --- |
| `short` | 2 | $-2^{15}$ | $2^{15}-1$ | Kiçik həcmli tam ədədlər |
| `short int` | 2 | $-2^{15}$ | $2^{15}-1$ | `short` ilə eynidir |
| `unsigned short` | 2 | $0$ | $2^{16}-1$ | Kiçik müsbət tam ədədlər |
| `unsigned short int` | 2 | $0$ | $2^{16}-1$ | `unsigned short` ilə eynidir |
| `long` | 4 və ya 8 | $-2^{31}$ və ya $-2^{63}$ | $2^{31}-1$ və ya $2^{63}-1$ | Böyük tam ədədlər |
| `long int` | 4 və ya 8 | $-2^{31}$ və ya $-2^{63}$ | $2^{31}-1$ və ya $2^{63}-1$ | `long` ilə eynidir |
| `unsigned long` | 4 və ya 8 | $0$ | $2^{32}-1$ və ya $2^{64}-1$ | Böyük müsbət tam ədədlər |
| `unsigned long int` | 4 və ya 8 | $0$ | $2^{32}-1$ və ya $2^{64}-1$ | `unsigned long` ilə eynidir |
| `long long` | 8 | $-2^{63}$ | $2^{63}-1$ | Çox böyük tam ədədlər |
| `long long int` | 8 | $-2^{63}$ | $2^{63}-1$ | `long long` ilə eynidir |
| `unsigned long long` | 8 | $0$ | $2^{64}-1$ | Çox böyük müsbət tam ədədlər |
| `unsigned long long int` | 8 | $0$ | $2^{64}-1$ | `unsigned long long` ilə eynidir |
| `long double` | 8, 12 və ya 16 | $\approx 3.4 × 10^{-4932}$ | $\approx 1.1 × 10^{4932}$ | Çox dəqiq ondalıq dəyərlər (platform-asılı) |
| `signed char` | 1 | $-2^{7}$ | $2^{7}-1$ | İşarəli simvollar |
| `unsigned char` | 1 | $0$ | $2^{8}-1$ | İşarəsiz simvollar |
| `unsigned int` | 4 | $0$ | $2^{32}-1$ | Yalnız müsbət tam ədədlər |
| `signed int` | 4 | $-2^{31}$ | $2^{31}-1$ | `int` ilə eynidir |

> **Qeyd: 32-bit və 64-bit sistemlərdə long tipinin ölçüsü fərqli ola bilər.**
