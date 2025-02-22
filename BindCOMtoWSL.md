# [Connect USB devices - USBIPD-WIN](https://learn.microsoft.com/en-us/windows/wsl/connect-usb)

- Powershell as Admin
- usbipd list
  - Find desired Device and its BUSID
- usbipd bind --busid 'BUSID'
- usbipd list (make sure the correct one is shared)
- usbipd attach --wsl --busid 'BUSID
