int kembalikanBuku(){
    int nomor;

    tampilkan buku();

    cout<<"Pilih nomor buku: ";
    cin >> nomor;
    if (nomor < 1 || nomor > 5){
        cout << "Nomor tidak valid!";
    }
    else if (tersedia[nomor-1]==0){
        tersedia[nomor-1]=1;
        cout<<"Buku berhasil dikembalikan!";
    }
    else{
        cout<<"Buku belum dipinjam!";
    }
    return 0;
}