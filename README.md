<a name="readme-top"></a>

<!-- INTESTAZIONE DEL PROGETTO -->
<br />
<div align="center">
  <h3 align="center">Calcolatore del Fattoriale</h3>

  <p align="center">
    Un programma C++ efficiente per calcolare il fattoriale di numeri grandi
    <br />
  </p>
</div>

<!-- INDICE -->
<details>
  <summary>Indice</summary>
  <ol>
    <li>
      <a href="#informazioni-sul-progetto">Informazioni sul Progetto</a>
      <ul>
        <li><a href="#sviluppato-con">Sviluppato Con</a></li>
      </ul>
    </li>
    <li>
      <a href="#per-iniziare">Per Iniziare</a>
      <ul>
        <li><a href="#prerequisiti">Prerequisiti</a></li>
        <li><a href="#installazione">Installazione</a></li>
      </ul>
    </li>
    <li><a href="#utilizzo">Utilizzo</a></li>
    <li><a href="#licenza">Licenza</a></li>
  </ol>
</details>

<!-- INFORMAZIONI SUL PROGETTO -->
## Informazioni sul Progetto

Questo programma è stato creato per calcolare il fattoriale di numeri interi positivi utilizzando la libreria GMP (GNU Multiple Precision Arithmetic). Grazie a questa libreria, il programma può gestire numeri estremamente grandi senza problemi di overflow, rendendolo ideale per calcoli matematici che richiedono alta precisione.

### Sviluppato Con

* [![C++][C++-shield]][C++-url]
* [![GMP][GMP-shield]][GMP-url]

<!-- PER INIZIARE -->
## Per Iniziare

Segui queste semplici istruzioni per ottenere un eseguibile funzionante del progetto.

### Prerequisiti

* Compilatore C++
* Libreria GMP

### Installazione

1. Installa la libreria GMP
   * Windows (usando MSYS2):
   ```sh
   pacman -S mingw-w64-x86_64-gmp
   ```
   * Ubuntu/Debian:
   ```sh
   sudo apt-get install libgmp-dev
   ```
   * Fedora:
   ```sh
   sudo dnf install gmp-devel
   ```
   * macOS:
   ```sh
   brew install gmp
   ```


2. Clona il repository (o scaricalo in formato .zip)
   ```sh
   git clone https://github.com/MCarraroDev/Fattoriale.git
   ```

3. Compila il programma
   ```sh
   g++ main.cpp -o fattoriale -lgmpxx -lgmp
   ```

<!-- UTILIZZO -->
## Utilizzo

1. Avvia il programma:
   ```sh
   ./fattoriale
   ```

2. Inserisci un numero intero positivo quando richiesto

3. Il programma mostrerà il risultato del fattoriale

4. Puoi scegliere se calcolare un altro fattoriale (s/n)

<!-- LICENZA -->
## Licenza

Distribuito sotto licenza MIT. Vedi `LICENSE` per maggiori informazioni.

<!-- MARKDOWN LINKS & IMAGES -->
[C++-shield]: https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white
[C++-url]: https://isocpp.org/
[GMP-shield]: https://img.shields.io/badge/GMP-00599C?style=for-the-badge&logo=gnu&logoColor=white
[GMP-url]: https://gmplib.org/

<p align="right">(<a href="#readme-top">torna all'inizio</a>)</p>
