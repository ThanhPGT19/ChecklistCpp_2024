class protocol_t {
    private:
        uint8_t *_type;
        // storage ...
    public:
        protocol_t() { _type = new uint8_t; }
        ~protocol_t() { cout<<"~protocol_t"; delete _type; }

        virtual void authenticate(){};
        virtual void connect(){};
        // operations ...
};

class wifi_t : public protocol_t {
    private:
        char *_pass;
        // storage ...
    public:
        wifi_t() { _pass = new char[15]; }
        ~wifi_t() { cout<<"~wifi_t"; delete _pass; }

        virtual void authenticate(){};
        virtual void connect(){};
        // operations ...
};

class bluetooth_t : public protocol_t {
    private:
        char *_pass;
        // storage ...
    public:
        bluetooth_t() { _pass = new char[15]; }
        ~bluetooth_t(){ cout<<"~bluetooth_t"; delete _pass; }

        virtual void authenticate(){};
        virtual void connect(){};
        // operations ...
};

int main() {
 
}