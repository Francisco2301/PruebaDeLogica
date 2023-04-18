#include <iostream>

using namespace std;

int main() {
    int hamburguesa_sencillas, hamburguesa_dobles, hamburguesa_triples, total_hamburguesas;
    double costo_sencilla = 50.0, costo_doble = 75.0, costo_triple = 100.0;
    double total_costo, cargo_tarjeta, total_pagar;
    char metodo_pago;

    cout << "Ingrese el número de hamburguesas sencillas: ";
    cin >> hamburguesa_sencillas;

    cout << "Ingrese el número de hamburguesas dobles: ";
    cin >> hamburguesa_dobles;

    cout << "Ingrese el número de hamburguesas triples: ";
    cin >> hamburguesa_triples;

    total_hamburguesas = hamburguesa_sencillas + hamburguesa_dobles + hamburguesa_triples;
    total_costo = (hamburguesa_sencillas * costo_sencilla) + (hamburguesa_dobles * costo_doble) + (hamburguesa_triples * costo_triple);

    cout << "Seleccione el método de pago (E: Efectivo, T: Tarjeta de crédito): ";
    cin >> metodo_pago;

    if (metodo_pago == 'T' || metodo_pago == 't') {
        cargo_tarjeta = total_costo * 0.05;
        total_pagar = total_costo + cargo_tarjeta;
    } else {
        total_pagar = total_costo;
    }

    cout << "Cantidad de hamburguesas: " << total_hamburguesas << endl;
    cout << "Costo total: C$" << total_costo << endl;

    if (metodo_pago == 'T' || metodo_pago == 't') {
        cout << "Cargo por tarjeta de crédito: C$" << cargo_tarjeta << endl;
    }

    cout << "Total a pagar: C$" << total_pagar << endl;

    return 0;
}
