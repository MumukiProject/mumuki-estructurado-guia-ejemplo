Por ejemplo, si usás el procedimiento `insertar_ordenado(valor, lista)` sucesivamente con los digitos del DNI, Dni 36.848.911 la lista enlazada resultante debe ser 11346889.

```
void insertar_ordenado(int valor, lista * l) {
  nodo * n = l->primer_nodo;

  if(n == NULL) {
    l->primer_nodo -> nuevo_nodo(valor);
  } else {
    while( n->valor < valor && n->siguiente != NULL ) {
      n = n->siguiente;
    }
    n->siguiente = nuevo_nodo(valor);
  }
}
```
