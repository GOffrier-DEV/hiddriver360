# Agent Workflow

## Build-Deploy Cycle (approved changes only)

1. **Commit** — `git add -A` + `git commit -m "<professional message>"`
2. **Build** — `msbuild hiddriver.sln /p:Configuration="Release Retail" /p:Platform="Xbox 360"`
3. **Deploy** — Upload via FTP:
   - Source: `Z:\builds\hiddriver.xex`
   - Destination: `ftp://192.168.1.7/Hdd1/hiddriver.xex`
   - Credentials: `xbox` / `xbox`
   - Verify MD5 after transfer
4. **Reboot** — Cold reboot the Xbox:
   - `xbreboot.exe /X:192.168.1.7 /C`
   - Wait for console to come back online
