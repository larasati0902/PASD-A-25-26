#include <iostream>
using namespace std;

// Struktur node tree
struct Node {
    char info;
    Node* kiri;
    Node* kanan;
};

// Fungsi membuat node baru
Node* buatNode(char data) {
    Node* baru = new Node();
    baru->info = data;
    baru->kiri = NULL;
    baru->kanan = NULL;
    return baru;
}

// Fungsi mengecek apakah dua tree sama
bool isEqual(Node* root1, Node* root2) {

    // Jika keduanya NULL
    if (root1 == NULL && root2 == NULL)
        return true;

    // Jika salah satu NULL
    if (root1 == NULL || root2 == NULL)
        return false;

    // Bandingkan isi node + subtree kiri + subtree kanan
    return (root1->info == root2->info) &&
           isEqual(root1->kiri, root2->kiri) &&
           isEqual(root1->kanan, root2->kanan);
}

int main() {

    // =========================
    // MEMBUAT TREE 1
    // =========================
    Node* Tree1 = buatNode('X');
    Tree1->kiri = buatNode('Y');
    Tree1->kanan = buatNode('Z');

    // =========================
    // MEMBUAT TREE 2
    // =========================
    Node* Tree2 = buatNode('X');
    Tree2->kiri = buatNode('Y');
    Tree2->kanan = buatNode('Z');

    // Tahap 1 : pengecekan awal
    cout << "Tahap 1: Pengecekan Awal\n";

    if (isEqual(Tree1, Tree2))
        cout << "--> Tree1 dan Tree2 adalah SAMA.\n";
    else
        cout << "--> Tree1 dan Tree2 BERBEDA.\n";

    // =========================
    // MENAMBAHKAN NODE W
    // di sebelah kiri Y pada Tree1
    // =========================
    cout << "\nMenambahkan 'W' ke kiri 'Y' pada Tree1...\n";

    Tree1->kiri->kiri = buatNode('W');

    // Tahap 2 : pengecekan setelah modifikasi
    cout << "\nTahap 2: Pengecekan Setelah Modifikasi\n";

    if (isEqual(Tree1, Tree2))
        cout << "--> Tree1 dan Tree2 adalah SAMA.\n";
    else
        cout << "--> Tree1 dan Tree2 BERBEDA.\n";

    return 0;
}