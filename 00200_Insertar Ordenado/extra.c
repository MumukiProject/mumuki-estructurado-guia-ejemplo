class nodo {
  public:
  int valor;
  nodo * siguiente;
};

class lista {
  public:
  nodo * primer_nodo;
};

lista * nueva() {
  lista * l = new lista();
  l->primer_nodo = NULL;
  return l;
}

nodo * nuevo_nodo(int valor) {
  nodo * n = new nodo();
  n->valor = valor;
  n->siguiente = NULL;
}


nodo * primer_nodo(lista * l) {
  return l->primer_nodo;
}

nodo * siguiente_nodo(nodo * n) {
  return n->siguiente;
}

bool hay_siguiente_nodo(nodo * n) {
  return n-> siguiente != NULL;
}

void insertar_nodo(int valor, nodo * n) {
  nodo * n2 = nuevo_nodo(valor);
  n->siguiente = n2;
}

void insertar(int valor, lista * l) {
  nodo * n = primer_nodo(lista);
  while( n != NULL ) {
    n = n->siguiente;
  }

}