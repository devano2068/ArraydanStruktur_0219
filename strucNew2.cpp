

int main() {
    orang mhs;
    // mengisi data
    cout << "Mengisi Data" << endl;
    cout << "Nama : ";
    cin >> mhs.nama;
    cout << "Desa : ";
    cin >> mhs.alamat.desa;
    cout << "Kota : ";
    cin >> mhs.alamat.kota;
    cout << "Umur : ";
    cin >> mhs.umur;
    cout << endl;

    // menampilkan data
    cout << "Menampilkan Data" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Alamat : " << mhs.alamat.desa << ", " << mhs.alamat.kota << endl;
    cout << "Umur : " << mhs.umur << endl;
 
}