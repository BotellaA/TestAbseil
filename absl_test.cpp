#include <absl/container/flat_hash_map.h>

int main() {
  absl::flat_hash_map<int, int> map;
  map.try_emplace(2, 3);
  return 0;
}