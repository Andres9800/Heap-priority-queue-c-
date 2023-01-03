#include "HeapPriorityyQueue.h"
#include "Cliente.h"
//#include "vectorClass.h"

int main() {
    HeapPriorityyQueue<Cliente> *miHeapC = new HeapPriorityyQueue<Cliente>;


    Cliente *miCliente = new Cliente("Pedro",651,"No","No","No",1);
    Cliente *miCliente2 = new Cliente("Maria",222,"No","Yes","Yes",2);
    Cliente *miCliente3 = new Cliente("Wendy",333,"No","No","No",2);
    Cliente *miCliente4 = new Cliente("JULIO",635,"No","Yes","No",1);
    Cliente *miCliente5 = new Cliente("Marco",777,"Yes","Yes","Yes",1);


/*    vectorClass<Cliente>* miVec = new vectorClass<Cliente>;

    miVec->push(*miCliente);
    miVec->push(*miCliente2);
    miVec->push(*miCliente3);
    miVec->push(*miCliente4);
    miVec->push(*miCliente5);

    cout<<miVec->print();
    cout<<"size(): "<<miVec->size()<<endl;
    //cout<<"size() ::"<<miVec-><<endl;
    Cliente Temporal = miVec->get(2);
    cout<<"TEMPORALAAAAAAAAAAAAAAAA) ::"<<endl;
    cout<<Temporal.toString();*/



    miHeapC->insert(*miCliente);
   // miHeapC.insert(*miCliente2);
   // miHeapC.insert(*miCliente3);
    //miHeapC.insert(*miCliente4);
    //miHeapC.insert(*miCliente5);



    return 0;
}
