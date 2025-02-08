{
  description = "BSV grammar for tree-sitter";

  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs?ref=nixos-unstable";
    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pkgs = import nixpkgs {
          inherit system;
        };
      in
      {
        devShells.default = pkgs.mkShell.override
          {
            stdenv = pkgs.gccStdenv;
          }
          {
            name = "bsv-docstrings";
            packages = with pkgs; [
              tree-sitter
            ];
          };

        packages.default = pkgs.callPackage ./tree-sitter-bsv.nix {};
      });
}
