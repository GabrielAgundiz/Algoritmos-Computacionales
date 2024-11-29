/*Insertar un nuevo dato en una posición determinada.*/

/* obtiene el numero de nodos de la lista */
length - g_slist_length (list);

g_print ("\nEscribe el na de indice donde se insertara el dato (el indice moximo es %d): ", length);
scanf ("%d", &index);

/* inserta el valor en la posicion indicada */

if (index < length) {
 list = g_slist_insert (list, GINT TO POINTER (value), index);
 print_list (list);
}

/* Elimina un elemento de la lista */

if (list2 != NULL) {
  g_print ("\nEl dato %d sera eliminado de la lista. \n", list2->data);
 /* eliminando un elemento de la lista */
  g_slist_remove (list, list2->data);
 }
