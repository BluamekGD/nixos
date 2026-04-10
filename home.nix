{ config, pkgs, ... }: {
  home.username = "bartek";
  home.homeDirectory = "/home/bartek";

  home.packages = with pkgs; [
    mangowm
    foot
    fuzzel
    waybar
    swaylock
    wl-clipboard
    brightnessctl
    playerctl
  ];

  xdg.configFile."mango/config.toml".text = ''
    # mangowm config — customize later
  '';

  home.stateVersion = "24.11";
}
