

    // Mengisi Satu per Satu
    cout << "Data index 0 = ";
    cin >> kamu[0];

    cout << "Data index 1 = ";
    cin >> kamu[1];

    cout << "Data index 2 = ";
    cin >> kamu[2];

    cout << "Data index 3 = ";
    cin >> kamu[3];

    cout << "Data index 4 = ";
    cin >> kamu[4];

    cout << endl;

    // Menampilkan Satu per Satu
    cout << "Data Pertama = " << kamu[0] << endl;
    cout << "Data Kedua = " << kamu[1] << endl;
    cout << "Data Ketiga = " << kamu[2] << endl;
    cout << "Data Keempat = " << kamu[3] << endl;
    cout << "Data Kelima = " << kamu[4] << endl;

 cout << endl;

    // Mengisi dengan menggunakan perulangan for
    for (int i = 0; i <= 4; i++)
    {
        cout << "Data index ke-" << i << " = ";
        cin >> kamu[i];
    }

    cout << endl;

    // Menampilkan dengan menggunakan perulangan for (dari gambar)
    for (int i = 0; i <= 4; i++)
    {
        cout << "Data ke-" << i+1 << " = " << kamu[i] << endl;
    }

    return 0;
}