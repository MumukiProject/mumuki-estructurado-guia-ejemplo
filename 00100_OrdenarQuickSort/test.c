describe ("ordenarEntero") {
  int* arreglo = { 21, 3, 4, 5, 8, 20 };
  int* arreglo_con_repetidos = { 4, 5, 4 };
  int* arreglo_vacio = {};
  int* arreglo_unitario = {1};

  it ("puede ordenar el arreglo {1}") {
    int* arreglo_ordenado = ordenar_enteros(arreglo_unitario, 1);

    should_int(arreglo_ordenado[0]) be equal to(1);
  } end

  it ("puede ordenar el arreglo { 21, 3, 4, 5, 8, 20 }") {
    int* arreglo_ordenado = ordenar_enteros(arreglo, 6);

    should_int(arreglo_ordenado[0]) be equal to(3);
    should_int(arreglo_ordenado[1]) be equal to(4);
    should_int(arreglo_ordenado[2]) be equal to(5);
    should_int(arreglo_ordenado[3]) be equal to(8);
    should_int(arreglo_ordenado[4]) be equal to(20);
    should_int(arreglo_ordenado[5]) be equal to(21);
  } end


  it ("puede ordenar el arreglo vacio") {
    int* arreglo_ordenado = ordenar_enteros(arreglo_vacio, 0);
    //nada para validar fácilmente
  } end


  it ("puede ordenar el arreglo {4, 5, 4}") {
    int* arreglo_ordenado = ordenar_enteros(arreglo_con_repetidos, 3);

    should_int(arreglo_ordenado[0]) be equal to(4);
    should_int(arreglo_ordenado[1]) be equal to(4);
    should_int(arreglo_ordenado[2]) be equal to(5);
  } end
} end