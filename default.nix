{ pkgs ? import <nixpkgs> {} }:
pkgs.callPackage ./tree-sitter-bsv.nix {}
