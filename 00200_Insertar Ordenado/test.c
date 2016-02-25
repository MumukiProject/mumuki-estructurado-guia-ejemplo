class MumukiTest : public CppUnit::TestFixture  {
  CPPUNIT_TEST_SUITE( MumukiTest );
    CPPUNIT_TEST( testInsertaListaVacia );
  CPPUNIT_TEST_SUITE_END();

  void testInsertar3EnListaVacia()
  {
    lista * lista = nueva();
    insertar_ordenado(2, lista);

    nodo * n = primer_nodo(lista);
    CPPUNIT_ASSERT( n->valor == 2 );
  }


  void testInsertar2ListaCon0()
  {
    lista * lista = nueva();
    insertar(0, )
    insertar_ordenado(2, lista);

    nodo * n = primer_nodo(lista);
    CPPUNIT_ASSERT( n->valor == 2 );
  }
};