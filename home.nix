{ config, pkgs, ... }: {
  home.username = "bartek";
  home.homeDirectory = "/home/bartek";

  home.packages = with pkgs; [
    kitty
    samba
    fastfetch
    cava
    cbonsai
    cmatrix
    firefox
    jellyfin-desktop
    bat
    makemkv
    handbrake
    OVMF
    qemu
    localsend
  ];

  # Cursors
  home.file.".local/share/icons" = {
    source = ./resources/icons;
    recursive = true;
  };

  # SwayWM
  wayland.windowManager.sway = {
    enable = true;
    xwayland = true;
    config = rec {
      modifier = "Mod4";
      terminal = "kitty";
      startup = [
        {command = "waybar; swaybg -o eDP-1 -i /etc/nixos/resources/swaybg.png -m fill";}
      ];
    };
  };

  home.stateVersion = "24.11";
}
