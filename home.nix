{ config, pkgs, ... }: {
  home.username = "bartek";
  home.homeDirectory = "/home/bartek";

  home.packages = with pkgs; [
    kitty
    fuzzel
    waybar
    swaylock
    wl-clipboard
    brightnessctl
    playerctl
    fastfetch
  ];

  home.stateVersion = "24.11";
}
