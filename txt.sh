generate() {
  echo "cmake_minimum_required(VERSION 3.22)"
  echo "project(cpp)"
  echo "set(CMAKE_CXX_STANDARD 14)"
  echo
  for i in *00; do
    cd "$i" || continue
    for j in *; do
      echo "add_executable($j $i/$j)"
    done
    cd ..
  done
}

# run in background
( inotifywait -e create,delete --quiet ./*00 --monitor | (while read -r; do generate > CMakeLists.txt; done) &)
