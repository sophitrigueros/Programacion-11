def hay_cupo(reservas, capacidad):
    return len(reservas) < capacidad
def mostrar_resumen(reservas, capacidad):
    print("\n=== Resumen ===")
    print("Reservas aceptadas:", len(reservas), "/", capacidad )
    for nombre in reservas:
        print(nombre)
capacidad = 5
reservas = []

while True:
    print("\nCupos disponibles:", capacidad - len(reservas))
    nombre = input("Nombre(o 'salir'): ")

    if nombre == "salir":
        break
    if hay_cupo(reservas, capacidad):
        reservas.append(nombre)
        print("Reserva aceptada")
    else:
        print("No hay cupos disponibles")

mostrar_resumen(reservas, capacidad)