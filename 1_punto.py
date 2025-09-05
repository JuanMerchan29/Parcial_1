# Enfoque Imperativo
estudiantes = [
    ("sebastian", 85),
    ("Alejandro", 92),
    ("Santiago", 92),
    ("Juan", 75)
]

# Ordenamiento manual (burbuja como ejemplo didáctico)
for i in range(len(estudiantes)):
    for j in range(len(estudiantes) - 1):
        if (estudiantes[j][1] < estudiantes[j + 1][1]) or \
           (estudiantes[j][1] == estudiantes[j + 1][1] and estudiantes[j][0] > estudiantes[j + 1][0]):
            # Intercambio
            estudiantes[j], estudiantes[j + 1] = estudiantes[j + 1], estudiantes[j]

print("Imperativo:", estudiantes)
