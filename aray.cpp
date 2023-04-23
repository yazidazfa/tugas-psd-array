#include <iostream>
#include <string>
using namespace std;

string nama[2][2] = {{"Dimas", "X"}, {"Tedjo", "X"}};
int bayar[2][7] = {{1, 120000, 0, 0, 120000, 120000, 120000}, {2, 120000, 120000, 120000, 0, 120000, 0}};
const int harusBayar = 720000;

void tagihan(string nama)
{
    if (nama == "Dimas")
    {
        int jumlah = 0;
        int sisa = 0;
        for (int i = 1; i < 7; i++)
        {
            jumlah += bayar[0][i];
        }
        sisa = harusBayar - jumlah;
        cout << "Dimas kurang membayar uang sebesar: " << sisa << endl;
    }
    else if (nama == "Tedjo")
    {
        int jumlah = 0;
        int sisa = 0;
        for (int i = 1; i < 7; i++)
        {
            jumlah += bayar[1][i];
        }
        sisa = harusBayar - jumlah;
        cout << "Tedjo kurang membayar uang sebesar: " << sisa << endl;
    }
    else
    {
        cout << "Nama siswa tidak ditemukan" << endl;
    }
}

void pendapatanBulanan(int x)
{
    if (x > 0 && x < 7)
    {
        int jumlah = 0;
        for (int i = 0; i < 2; i++)
        {
            jumlah = jumlah + bayar[i][x];
        }
        cout << "Pendapatan pada bulan ke " << x << ": " << jumlah << endl;
    }
}

void laporanTunggu(string nama)
{
    if (nama == "Dimas")
    {
        cout << "Dimas belum membayar pada bulan ke: " << endl;
        for (int i = 1; i < 7; i++)
        {
            if (bayar[0][i] == 0)
            {
                cout<< i << endl;
            }
        }
    }
    else if (nama == "Tedjo")
    {
        cout << "Tedjo belum membayar pada bulan ke: " << endl;
        for (int i = 1; i < 7; i++)
        {
            if (bayar[1][i] == 0)
            {
                cout<< i << endl;
            }
        }
    }
    else {
        cout << "Nama tidak ditemukan" << endl;
    }
}

void laporanPembayaran(string nama)
{
    if (nama == "Dimas")
    {
        cout << nama << endl;
        for (int i = 1; i < 7; i++)
        {
            cout << "Bulan ke " << i << " = " << bayar[0][i] << endl;
        }
    }
    else if (nama == "Tedjo")
    {
        cout << nama << endl;
        for (int i = 1; i < 7; i++)
        {
            cout << "Bulan ke " << i << " = " << bayar[1][i] << endl;
        }
    }
    else
    {
        cout << "Nama tidak ditemukan" << endl;
    }
}

int main()
{
    // tagihan("Tedjo");
    // pendapatanBulanan(1);
    laporanTunggu("Tedjo");
    // laporanPembayaran("Tedjo");

    system("pause");
    return 0;
}