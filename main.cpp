int main() 
{
    AlberoBin<int> albero;
    albero.inserisciRadice(5);
    cout << "Inserisco la radice-> " << endl;
    albero.mostraAlbero();
    albero.aggiungiSinistro(0, 7);
    albero.aggiungiDestro(0, 14);
    albero.aggiungiSinistro(1, 24);
    cout << "Inserisco i figli->" << endl;
    albero.mostraAlbero();
    int nodoCorrente = 0;
    int sinistro = albero.indiceSinistro(nodoCorrente);
    int destro = albero.indiceDestro(nodoCorrente);
    cout << "Nodo " << nodoCorrente << " (" << albero.leggiRadice() << ") ha->" << endl;
    cout << "Figlio sx-> " << (sinistro != -1 ? sinistro : -1) << endl;
    cout << "Figlio dx-> " << (destro != -1 ? destro : -1) << endl;
    albero.eliminaNodo(3);
    cout << "Rimuovo il nodo 3-> " << endl;
    albero.mostraAlbero();
return 0;
}
