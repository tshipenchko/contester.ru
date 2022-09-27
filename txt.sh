generate_dir() {
  for i in $1; do
      cd "$i" || continue
      for j in *; do
        echo "add_executable($j $i/$j)"
      done
      cd ..
    done
}

generate() {
  echo "cmake_minimum_required(VERSION 3.22)"
  echo "project(cpp)"
  echo "set(CMAKE_CXX_STANDARD 98)"
  echo "add_executable(main.cpp main.cpp)"
  echo
  generate_dir other
  echo

  for i in ./*00; do
    generate_dir "$i"
  done
}

# run in background
generate > CMakeLists.txt
( inotifywait -e create,delete --quiet ./*00 --monitor | (while read -r; do generate > CMakeLists.txt; done) &)
