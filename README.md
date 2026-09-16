su \
yay -S nvim wl-clipboard \
pacman -S ttf-jetbrains-mono-nerd \
yay -S hyprland hyprsunset hyprpaper hyprlock hypridle hyprshot waybar rofi brightnessctl alacritty git fish python-pip imv wl-clipboard openssh bluetui mako ttf-font-awesome fastfetch neovim grub-customizer xorg-xhost wpaperd yazi \
git config --global user.name "newbiedeveloper968" && git config --global user.email "newbiedeveloper968@gmail.com" \
rm -r ~/.config/hypr ; rm -r ~/.config/waybar ; rm -r ~/.config/rofi ; rm -r ~/.config/alacritty ; rm -r ~/.config/fish ; rm -r ~/.config/mako ; rm -r ~/.config/fastfetch ; rm -r ~/.config/nvim ; rm -r ~/.config/wpaperd/ \
cp -r ~/final_hypr/hypr ~/.config/ ; cp -r ~/final_hypr/waybar ~/.config/ ; cp -r ~/final_hypr/rofi ~/.config/ ; cp -r ~/final_hypr/alacritty ~/.config/ ; cp -r ~/final_hypr/fish ~/.config/ ; cp -r ~/final_hypr/mako ~/.config/ ; cp -r ~/final_hypr/fastfetch ~/.config/ ; cp -r ~/final_hypr/nvim/ ~/.config/; cp -r ~/final_hypr/wallpapers ~/Pictures && curl -fLo ~/.config/nvim/autoload/plug.vim --create-dirs https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim && cp final_hypr/nvim/init.vim ~/.config/nvim/ ; cp -r ~/final_hypr/wpaperd/ ~/.config/ \
systemctl enable bluetooth.service && systemctl start bluetooth.service ; sudo systemctl enable NetworkManager.service && sudo systemctl start NetworkManager.service \
chsh -s /usr/bin/fish

