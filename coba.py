import sqlite3

def create_table():
    conn = sqlite3.connect('matakuliah.db')
    cursor = conn.cursor()
    cursor.execute('''
        CREATE TABLE IF NOT EXISTS matakuliah (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            kode TEXT NOT NULL,
            nama TEXT NOT NULL,
            sks INTEGER NOT NULL
        )
    ''')
    conn.commit()
    conn.close()

def tambah_matakuliah(kode, nama, sks):
    conn = sqlite3.connect('matakuliah.db')
    cursor = conn.cursor()
    cursor.execute("INSERT INTO matakuliah (kode, nama, sks) VALUES (?, ?, ?)", (kode, nama, sks))
    conn.commit()
    conn.close()

def tampilkan_semua_matakuliah():
    conn = sqlite3.connect('matakuliah.db')
    cursor = conn.cursor()
    cursor.execute("SELECT * FROM matakuliah")
    rows = cursor.fetchall()
    for row in rows:
        print(row)
    conn.close()

def update_matakuliah(kode, new_nama, new_sks):
    conn = sqlite3.connect('matakuliah.db')
    cursor = conn.cursor()
    cursor.execute("UPDATE matakuliah SET nama=?, sks=? WHERE kode=?", (new_nama, new_sks, kode))
    conn.commit()
    conn.close()

def hapus_matakuliah(kode):
    conn = sqlite3.connect('matakuliah.db')
    cursor = conn.cursor()
    cursor.execute("DELETE FROM matakuliah WHERE kode=?", (kode,))
    conn.commit()
    conn.close()

# Buat tabel jika belum ada
create_table()

# Tambahkan data mata kuliah
tambah_matakuliah("MK001", "Matematika Teknik", 3)
tambah_matakuliah("MK002", "Teknologi Komputer", 3)
tambah_matakuliah("MK003", "Logika Matematika", 3)

# Tampilkan semua mata kuliah
print("Daftar Mata Kuliah:")
tampilkan_semua_matakuliah()

# Update data mata kuliah
update_matakuliah("MK002", "Teknologi Komputasi", 4)

# Tampilkan semua mata kuliah setelah update
print("\nDaftar Mata Kuliah setelah Update:")
tampilkan_semua_matakuliah()

# Hapus mata kuliah
hapus_matakuliah("MK003")

# Tampilkan semua mata kuliah setelah hapus
print("\nDaftar Mata Kuliah setelah Hapus:")
tampilkan_semua_matakuliah()