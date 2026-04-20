    // Manogura, Jay Jasper N.
    //BSCS 1B


    #include <iostream>
    #include <fstream>
    using namespace std;

    int main(){

    fstream file;
    fstream file1;

    file.open("color.txt", ios :: out);
    if(file.is_open())
        {
        file << "BLUE\n";
         file << "RED\n";
          file << "GREEN\n";
           file << "YELLOW\n";
            file << "ORANGE\n";
             file.close();

        cout<<"Write is Successfully!" <<endl;

    }else
    {
        cout << "failed to open the file!";
    }

    file1.open("color_copy.txt", ios :: out);

    file.open("color.txt", ios :: in);
    if(file.is_open() && file1.is_open()){
        string line;
        while(getline (file, line)){
            file1 << line << endl;
        }
        file.close();
        file1.close();
    }else
    {
        cout << "failed to open the file!";
    }

    return 0;
}
