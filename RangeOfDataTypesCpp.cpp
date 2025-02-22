#include <iostream>
using namespace std;
int main() {
   cout << "char Range: (" <<CHAR_MIN << ", " <<CHAR_MAX << ")\n";
   cout << "unsigned char Range: (0, " << UCHAR_MAX << ")\n\n";

   cout << "short Range: (" << SHRT_MIN << ", " << SHRT_MAX << ")\n";
   cout << "unsigned short Range: (0, " << USHRT_MAX << ")\n\n";

   cout << "int Range: (" << INT_MIN << ", " << INT_MAX << ")\n";
   cout << "unsigned int Range: (0, " << UINT_MAX << ")\n\n";

   cout << "long Range: (" << LONG_MIN << ", " << LONG_MAX << ")\n";
   cout << "unsigned long Range: (0, " << ULONG_MAX << ")\n\n";

   cout << "long long Range: (" << LLONG_MIN << ", " << LLONG_MAX << ")\n";
   cout << "unsigned long long Range: (0, " << ULLONG_MAX << ")\n\n";

   cout << "float Range: (" << FLT_MIN << ", " << FLT_MAX << ")\n";
   cout << "float (negative) Range: (" << -FLT_MIN << ", " << -FLT_MAX << ")\n\n";

   cout << "double Range: (" << DBL_MIN << ", " << DBL_MAX << ")\n";
   cout << "double (negative) Range: (" << -DBL_MIN << ", " << -DBL_MAX << ")\n\n";

   cout << "long double Range: (" << LDBL_MIN << ", " << LDBL_MAX << ")\n";
   cout << "long double (negative) Range: (" << -LDBL_MIN << ", " << -LDBL_MAX << ")\n\n";


    return 0;
}
