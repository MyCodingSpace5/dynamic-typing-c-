namespace l{
class Dynamic 
    {
        public:
            long* a; 
        template<typename input_type> Dynamic(input_type* address) 
        {
            this->a = (long*)(&address); 
        }
    };
    template<typename input_type, typename output_type> output_type casting(input_type v)
    {
        void* a = (void*)(&v);
        output_type* m;
        m = (output_type*)(a);
        return m;
    };
}
