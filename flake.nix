{
  description = "CarlDots' build of dwmblocks";

  inputs = {
    nixpkgs.url = "nixpkgs/nixos-24.05";
    utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, utils, ... }@inputs:
    utils.lib.eachDefaultSystem (system: let
      pkgs = import nixpkgs {
        inherit system;

        overlays = [
          (final: prev: {
            dwmblocks = prev.dwmblocks.overrideAttrs (old: {
              src = self;
              ];
            });
          })
        ];
      };
    in {
      packages.default = pkgs.dwmblocks;
    });
}
