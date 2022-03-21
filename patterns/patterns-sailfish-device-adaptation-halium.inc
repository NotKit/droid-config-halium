%package -n patterns-sailfish-device-adaptation-halium
Summary: Sailfish HW Adaptation Halium

Requires: qt5-plugin-generic-evdev

# Hybris packages
Requires: libhybris-libEGL
Requires: libhybris-libGLESv2
Requires: libhybris-libwayland-egl

# Halium
Requires: lxc

# Splash screen
# Requires: plymouth-lite
# Requires: plymouth-lite-theme-default

# Bluetooth tools
Requires: bluez5-tools
Requires: bluebinder

# Ofono
Requires: ofono-ril-binder-plugin

# NFC
Requires: nfcd-binder-plugin

# Vibra
Requires: ngfd-plugin-native-vibrator
Requires: qt5-feedback-haptics-native-vibrator

# Sensors
Requires: hybris-libsensorfw-qt5-binder

# Pulseaudio
Requires: pulseaudio-modules-droid
Requires: pulseaudio-modules-droid-hidl

# Needed for camera to work
Requires: audiosystem-passthrough-dummy-af

# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qt5-qpa-hwcomposer-plugin
Requires: qtscenegraph-adaptation

# Add GStreamer v1.0 as standard
Requires: gstreamer1.0
Requires: gstreamer1.0-plugins-good
Requires: gstreamer1.0-plugins-base
Requires: gstreamer1.0-plugins-bad
Requires: nemo-gstreamer1.0-interfaces
Requires: gstreamer1.0-droid
Requires: gmp-droid

# This is needed for notification LEDs
Requires: mce-plugin-libhybris

## USB mode controller
## Enables mode selector upon plugging USB cable:
Requires: usb-moded
#Requires: usb-moded-defaults-android
#Requires: usb-moded-developer-mode-android

Requires: rfkill

# enable device lock and allow to select untrusted software
Requires: jolla-devicelock-plugin-encsfa

# For GPS
Requires: geoclue-provider-hybris

# For mounting SD card automatically
Requires: sd-utils

# Requires: kernel-adaptation-pine64
Requires: droid-config-halium-sailfish
Requires: droid-config-halium-pulseaudio-settings
Requires: droid-config-halium-policy-settings
Requires: droid-config-halium-preinit-plugin
Requires: droid-config-halium-bluez5
Requires: droid-hal-version-halium
#Requires: droid-config-donebeevil-flashing

#Include atinout to talk to the modem
# Requires: atinout
# Requires: eg25-manager

# Enable home encryption
# Requires: sailfish-device-encryption-community

%description -n patterns-sailfish-device-adaptation-halium
Pattern with packages for halium HW Adaptation

%files -n patterns-sailfish-device-adaptation-halium
