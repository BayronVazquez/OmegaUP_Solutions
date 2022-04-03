#include <iostream>
#include <algorithm>

using namespace std;

class Matriz
{
private:
    unsigned int COLUMNAS;
    unsigned int FILAS;
    double **matrix;

public:
    Matriz(unsigned int ancho, unsigned int alto);
    ~Matriz();

    void setXY( double value, unsigned int FILA, unsigned int COLUMNA) const;
    double getXY(unsigned int FILA, unsigned int COLUMNA) const;

    unsigned int getNumFilas() const;
    unsigned int getNumColumnas()const;

    void print();

    Matriz static sumar( Matriz &a, Matriz &b);
};

Matriz::Matriz(unsigned int ancho, unsigned int alto)
{
    this->COLUMNAS = ancho;
    this->FILAS = alto;

    this->matrix = new double*[ this->FILAS ];
    for(unsigned int i = 0; i < this->FILAS; i++)
    {
        this->matrix[i] = new double[ this->COLUMNAS ];
    }
}

Matriz::~Matriz()
{
    for(unsigned int i = 0; i < this->FILAS; i++)
    {
        delete[] this->matrix[i];                   // BORRAMOS LAS COLUMNAS DE LA MATRIZ
    }
    delete[] matrix;                                // BORRAMOS LAS FILAS DE LA MATRIZ
}

/**
 *
    =========================================== Ejemplo: ===========================================
    try {
        m.setXY(10,3,4);
    }  catch (const char* msg) {
        cout << msg << endl;
    }
   =========================================== Ejemplo: ===========================================
    Matriz a(n,n);                  // Define una Matriz

    // NOTA QUE EL INDICE COMIENZA EN 1 Y NO EN 0
    for( ROWS=1; ROWS<n; ++ROWS )
    {
        for( COLS=1; COLS<n; ++COLS )
        {
            cin >> value;
            a.setXY(value,ROWS, COLS);
        }
    }
    ==============================================================================================
 */
void Matriz::setXY( double value , unsigned int row, unsigned int col) const
{
    if( col > this->COLUMNAS)
    {
        throw "Intentaste acceder a una posicion mas alla de (x) en la matriz actual";
    }
    if( row > this->FILAS)
    {
        throw "Intentaste acceder a una posicion mas alla de (y) en la matriz actual";
    }
    this->matrix[row-1][col-1] = value;
}

/**
 *
 *  Ejemplo:
    for(int row = 1; row <= 3; row++)
    {
        for(int col = 1; col <= 3; col++)
        {
            cout << "(" << row << "," << col << ")" << " = " << m.getXY(row, col) << endl;
        }
    }
 */
double Matriz::getXY(unsigned int row, unsigned int col) const
{
    if( col > this->COLUMNAS)
    {
        throw "Intentaste acceder a una posicion mas alla de (x) en la matriz actual";
    }
    if( row > this->FILAS)
    {
        throw "Intentaste acceder a una posicion mas alla de (y) en la matriz actual";
    }
    return this->matrix[row-1][col-1];
}

unsigned int Matriz::getNumFilas() const
{
    return this->FILAS;
}

unsigned int Matriz::getNumColumnas() const
{
    return this->COLUMNAS;
}

void Matriz::print()
{
    for(unsigned int row = 0; row < this->FILAS; row++)
    {
        for(unsigned int col = 0; col < this->COLUMNAS; col++)
        {
            cout << this->matrix[row][col] << " ";
        }
        cout << "\n";
    }
}

Matriz Matriz::sumar(Matriz& a, Matriz &b)
{
    // CONSULTAMOS CUAL ES LA MATRIX QUE TIENE MAS FILAS Y MAS COLUMNAS
    int rows = max(a.getNumFilas(), b.getNumFilas());
    int cols = max(a.getNumColumnas(), b.getNumColumnas());

    // CREAMOS UNA NUEVA MATRIX QUE VA A GUARDAR EL RESULTADO
    Matriz r(rows, cols);

    for(int fila=1; fila <= rows; fila++)
    {
        for(int columna=1; columna <= cols; columna++)
        {
            double a_xy = 0;
            double b_xy = 0;

            // INTENTAMOS LEER EL VALOR XY DE LA MATRIZ 1
            try {
                a_xy = a.getXY(fila, columna);
            }  catch (...) {

            }

            // INTENTAMOS LEER EL VALOR XY DE LA MATRIZ 2
            try {
                b_xy = b.getXY(fila, columna);
            }  catch (...) {

            }
            //cout << a_xy << " + " << b_xy << endl;

            r.setXY(a_xy + b_xy, fila, columna);
        }
    }
    return r;
}

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  // TODO: fixme.
  int n;

  double value;
  int ROWS;
  int COLS;

  cin >> n;

  Matriz a(n,n);
  Matriz b(n,n);

  for( ROWS=1; ROWS<=n; ++ROWS )
  {
      for( COLS=1; COLS<=n; ++COLS )
      {
          cin >> value;
          a.setXY(value,ROWS, COLS);
      }
  }

  for( ROWS=1; ROWS<=n; ++ROWS )
  {
      for( COLS=1; COLS<=n; ++COLS )
      {
          cin >> value;
          b.setXY(value,ROWS, COLS);
      }
  }

  Matriz c = Matriz::sumar(a,b);
  c.print();
  return 0;
}