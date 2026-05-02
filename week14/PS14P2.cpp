#include <iostream>
#include <string>
using namespace std;

class Computer {
private:
    string make = "Lenovo";
    string model = "LE100A";
    string cpu = "Intel";
    string ram = "32GB";
    string drive = "HD";
    string type = "Laptop";

public:
    void setMake(string m) { make = m; }
    void setModel(string m) { model = m; }
    void setCPU(string c) { cpu = c; }
    void setRAM(string r) { ram = r; }
    void setDrive(string d) { drive = d; }
    void setType(string t) { type = t; }

    string getMake() { return make; }
    string getModel() { return model; }
    string getCPU() { return cpu; }
    string getRAM() { return ram; }
    string getDrive() { return drive; }
    string getType() { return type; }

    double getCost() {
        double cost = 0;

        if (make == "Lenovo") cost += 1200;
        else if (make == "HP") cost += 1000;
        else if (make == "Apple") cost += 2000;

        if (cpu == "Intel") cost += 200;

        if (ram == "16GB") cost += 300;
        else if (ram == "32GB") cost += 500;

        if (drive == "SSD") cost += 500;

        if (type == "Laptop") cost += 300;
        else if (type == "Tablet") cost -= 200;

        return cost;
    }
};

int main() {
    Computer c; // instantiation

    string make, model, cpu, ram, drive, type;

    while (true) {
        cout << "\nEnter make (Ctrl+Z to stop): ";
        if (!(cin >> make)) break;

        cout << "Enter model: ";
        cin >> model;

        cout << "Enter CPU (Intel/AMD): ";
        cin >> cpu;

        cout << "Enter RAM (8GB/16GB/32GB): ";
        cin >> ram;

        cout << "Enter drive (SSD/HD): ";
        cin >> drive;

        cout << "Enter type (Laptop/Tablet/Desktop/Notebook): ";
        cin >> type;

        c.setMake(make);
        c.setModel(model);
        c.setCPU(cpu);
        c.setRAM(ram);
        c.setDrive(drive);
        c.setType(type);

        cout << "\n--- Computer Info ---\n";
        cout << c.getMake() << " " << c.getModel() << endl;
        cout << "CPU: " << c.getCPU() << endl;
        cout << "RAM: " << c.getRAM() << endl;
        cout << "Drive: " << c.getDrive() << endl;
        cout << "Type: " << c.getType() << endl;
        cout << "Cost: $" << c.getCost() << endl;
    }
}