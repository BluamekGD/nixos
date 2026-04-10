{ config, pkgs, mangowm, ... }: {
  home.username = "bartek";
  home.homeDirectory = "/home/bartek";

  home.packages = with pkgs; [
    mangowm.packages.x86_64-linux.default
    foot
    fuzzel
    waybar
    swaylock
    wl-clipboard
    brightnessctl
    playerctl
  ];

  xdg.configFile."mango/config.toml".text = ''
    # mangowm.packages.x86_64-linux.default config — customize later
  '';

  home.stateVersion = "24.11";
}
