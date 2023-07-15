class Foo {
public:
    Foo() {
        
    }

    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
       
        printFirst();
         
    }

    void second(function<void()> printSecond) {
        
        // printSecond() outputs "second". Do not change or remove this line.
    this_thread::sleep_for(chrono::milliseconds(50)); 
        printSecond();
          
    }

    void third(function<void()> printThird) {
       
        
        // printThird() outputs "third". Do not change or remove this line.
        this_thread::sleep_for(chrono::milliseconds(100)); 
        printThird();
        
    }
};
