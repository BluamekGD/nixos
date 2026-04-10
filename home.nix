{ config, pkgs, ... }: {
  home.username = "bartek";
  home.homeDirectory = "/home/bartek";

  home.packages = with pkgs; [
    foot
    fuzzel
    waybar
    swaylock
    wl-clipboard
    brightnessctl
    playerctl
  ];

  home.stateVersion = "24.11";
}
