#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <omp.h>

using namespace std;

size_t read_file(const string &filename) {
    ifstream file(filename, ios::binary | ios::ate);
    if (!file.is_open()) {
        cerr << "Error: Could not open " << filename << endl;
        return 0;
    }

    omp_set_num_threads(4);

    size_t size = file.tellg();
    file.seekg(0, ios::beg);

    vector<char> buffer(size);
    file.read(buffer.data(), size);

    cout << "Thread " << omp_get_thread_num()
         << " read " << size << " bytes from " << filename << endl;

    return size;
}

int main() {
   vector<string> filenames = {
    "C:/Users/sreemanth/Desktop/random_data_file_1024.bin",
    "C:/Users/sreemanth/Desktop/random_data_file_1048576.bin",
    "C:/Users/sreemanth/Desktop/random_data_file_1073741824.bin"
};


    #pragma omp parallel for
    for (int i = 0; i < (int)filenames.size(); ++i) {
        read_file(filenames[i]);
    }

    return 0;
}

