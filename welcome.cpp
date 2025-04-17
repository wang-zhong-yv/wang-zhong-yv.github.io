#include<bits/stdc++.h>

int main() {
  char input[100];
  fgets(input, sizeof(input), stdin);
  std::cout << "Content-type: text/html\n\n";
  std::cout << "<html>\n";
  std::cout << "<body>\n";
  std::cout << "<h2>处理结果：</h2>\n";
  std::cout << "<p>" << input << "</p>\n";
  std::cout << "</body>\n";
  std::cout << "</html>";

  return 0;
}
