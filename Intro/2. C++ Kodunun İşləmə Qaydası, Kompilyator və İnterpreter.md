# C++ Kodunun İşləmə Qaydası: Kompilyator (Compiler) və İnterpreter (Interpreter)

## **⚙️ Kompilyator Nədir?**

**Kompilyator** – proqramlaşdırma dilində yazılmış mənbə kodunu maşın koduna çevirən proqramdır.

- Mənbə kodunu alır və birbaşa icra oluna bilən fayl yaradır.
- Ən məşhur C++ kompilyatorları: GCC, Clang, MSVC.
- Kodun səhvlərini, sintaksis problemlərini kompilyasiya zamanı göstərir.
- Kompilyatorun rolu:
  - Kodun tərcüməsi və optimallaşdırılması
  - Səhvlərin aşkarlanması
  - Maşın kodu yaratmaq

**Kompilyasiya prosesi:**

```
C++ kod (.cpp)  ──▶  Kompilyator  ──▶  Maşın kodu (.exe)
```

---

## **🧐 İnterpreter Nədir?**

**İnterpreter** – mənbə kodunu birbaşa sətir-sətir oxuyub icra edən proqramdır.

- Kodun kompilyator kimi birbaşa maşın koduna çevrilməsi olmur.
- Əsasən Python, JavaScript, Ruby kimi dillərdə istifadə olunur.
- İcra zamanı kodu oxuyur və nəticəni göstərir.
- Kodda səhvləri icra zamanı aşkar edir.

**İnterpretasiya prosesi:**

```
Mənbə kod  ──▶  İnterpreter  ──▶  Nəticə
```

---

## **🖥️ C++ Kodunun İşləmə Prosesi**

C++ proqramlaşdırma dilində yazdığımız kod birbaşa kompüter tərəfindən başa düşülmür. Kodun işləməsi üçün aşağıdakı mərhələlərdən keçilir:

1. **Mənbə kodunun (source code) yazılması**
   - Proqramçı C++ faylında (`.cpp`) kod yazır.
2. **Kompilyasiya mərhələsi**
   - Mənbə kodu xüsusi proqram (**kompilyator)** tərəfindən oxunur və kompüterin başa düşdüyü "maşın kodu"na (binary) çevrilir.
3. **İcra mərhələsi**
   - Əldə olunan icra faylı (`.exe`, `a.out` və s.) kompüterdə işlədilir və nəticə alınır.

**C++ proqramlarında kod əvvəlcə kompilyasiya olunur, sonra icra edilir.**

---

## **🔄 Kompilyator və İnterpreter Fərqləri**

| **Xüsusiyyət** | **Kompilyator**                 | **İnterpreter**                 |
| -------------- | ------------------------------- | ------------------------------- |
| İcra üsulu     | Bütün kodu əvvəlcə tərcümə edir | Sətir-sətir oxuyur və icra edir |
| Nəticə         | İcra faylı (binary) yaradır     | Dərhal nəticə göstərir          |
| Səhvlər        | Kompilyasiya zamanı göstərir    | İcra zamanı göstərir            |
| Sürət          | İcra zamanı daha sürətlidir     | Adətən daha yavaşdır            |
| Dil nümunəsi   | C++, C, Go                      | Python, JavaScript, Ruby        |
