class Line {
   public:
      void setLength( double len );
      double getLength( void );
      Line(double len);  // This is the constructor
 
   private:
      double length;
};
 
// Member functions definitions including constructor
Line::Line( double len) {
   std::cout << "Object is being created, length = " << len << std::endl;
   length = len;
}
void Line::setLength( double len ) {
   length = len;
}
double Line::getLength( void ) {
   return length;
}

