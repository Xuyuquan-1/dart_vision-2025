#define add(T) _ADD_IMPL_##T

#define ADD_IMPL(T)		\
T add(T)(T a, T b){		\
    return a + b;		\
}

ADD_IMPL(int);
ADD_IMPL(float);

int main(){
    int a = add(int)(1, 2);
    float f = add(float)(1.0f, 2.0f);
    printf("%d, %d",a, f);
}