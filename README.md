# 📖 Get Next Line - Read a Line from a File Descriptor  

**42 Firenze Project | C Programming**  
*Funzione che legge una riga alla volta da un file descriptor, con supporto a multipli fd e singola variabile statica (bonus completato).*  

---

## 📋 Specifiche  
✅ **Funzionalità Base**:  
   - Lettura incrementale con `read()`  
   - Gestione di buffer size variabili (`BUFFER_SIZE`)  
   - Restituzione della riga inclusa il `\n` (se presente)  

✅ **Bonus Implementati**:  
   - **Multi-FD**: Lettura alternata da diversi file descriptor senza perdere lo stato  
   - **Single Static Variable**: Utilizzo di una sola variabile statica  

✅ **Tecnologie**:  
   - `C` (conforme a C98)  
   - Makefile con regole `all`, `clean`, `fclean`, `re`  
   - Compilazione con `-Wall -Wextra -Werror`  

✅ **Conformità**:  
   - Norminette-compliant  
   - Zero memory leaks  
   - Gestione di edge cases (file vuoti, lettura da stdin, ecc.)  

---

## 🛠 Utilizzo  
```bash
git clone https://github.com/mttgvnrd/get_Next_Line.git
cd get_Next_Line
make  # Compila la libreria (senza bonus)
make bonus  # Compila con supporto a multi-FD
