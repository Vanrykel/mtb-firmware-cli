# ModusToolbox Firmware CI/CD for PSoC6

## 📌 Over dit project

Dit project demonstreert een **automatische build & release pipeline** voor een **PSoC6 ModusToolbox firmwareproject**.
 Elke wijziging in de `main` branch triggert een **build** en uploadt een **.hex firmwarebestand** naar GitHub Releases.

## **⚙️ Automatiseringsproces**

1. **Code pushen naar `main` of een pull request openen.**
2. **GitHub Actions bouwt de firmware met ModusToolbox.**
3. **Een nieuwe release wordt automatisch aangemaakt met de .hex file.**
4. **De laatste firmware is te vinden onder het "Releases"-tabblad.**

## **📜 Installatie & Gebruik**

### **🔹 Benodigdheden**

- **ModusToolbox** (voor lokale builds)
- **ARM GCC toolchain**
- **GitHub repository met geconfigureerde Actions**

### **🔹 Build lokaal uitvoeren**

Clone de repo en bouw handmatig met:

```bash
git clone https://github.com/Vanrykel/psoc6-firmware-ci.git
cd mtb-firmware-ci
make build
```

### **🔹 Firmware flashen**

Na een succesvolle build kun je de firmware flashen met:

```bash
make program
```

## **🚀 Automatische releases**

De nieuwste firmware is beschikbaar onder:
 🔗 **[GitHub Releases](https://github.com/Vanrykel/mtb-firmware-ci/releases)**

  ### **Release handmatig maken**

  Wil je een nieuwe release maken?

  1. **Plaats de `.deb` file in de `artifacts/` map in de repo.**
  2. **Push een nieuwe tag om een release te triggeren:**
     ```bash
     git tag -f latest
     git push origin latest --force
     ```
  3. **GitHub Actions voegt automatisch de firmware en `.deb` installer toe aan de "latest" release.**
  4. **Download alles onder Releases.**

  ## **🛠 Issues & Bijdragen**

  - Problemen? Open een issue!
  - Wil je bijdragen? Fork de repo en maak een pull request.