{ lib, python3Packages }:
with python3Packages;
buildPythonApplication {
  pname = "tree-sitter-bsv";
  version = "0.0";
  src = ./.;
}
