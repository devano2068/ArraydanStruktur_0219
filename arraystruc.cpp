
    // output data
    for (int i = 0; i <= 2; i++)
    {
        cout << "Data Penduduk ke-" << i + 1 << endl;
        cout << "Nama : " << mhs[i].nama << endl;
        cout << "Desa : " << mhs[i].alamat.desa << endl;
        cout << "Kota : " << mhs[i].alamat.kota << endl;
        cout << "Umur : " << mhs[i].umur << endl;
        cout << endl;
    }

    return 0;
}