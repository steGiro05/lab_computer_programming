import random

# Chiede il percorso assoluto del file all'utente
file_path = "./stack-queue/input"

# Genera 100 numeri interi casuali e li scrive nel file
with open(file_path, 'w') as file:
    for _ in range(1000):
        file.write(f"{random.randint(1, 100)}\n")  # Modifica il range (1, 100) secondo le tue esigenze

print("Numeri generati e scritti con successo nel file.")
