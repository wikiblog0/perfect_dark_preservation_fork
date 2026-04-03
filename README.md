# Perfect Dark port

Este repositorio contiene una adaptación, aún en desarrollo, de la [descompilación de Perfect Dark](https://github.com/n64decomp/perfect_dark) para plataformas modernas. Este repositorio tiene como funcion preservar los archivos de la descompilacion de las distintas plataformas donde ha recibido soporte de manera oficial y no oficial.

Para ejecutar la adaptación, debes disponer ya de una ROM de Perfect Dark, concretamente una de las siguientes:
* `ntsc-final`/`US V1.1`/`US Rev 1` (md5 `e03b088b6ac9e0080440efed07c1e40f`).  
  **Esta es la versión recomendada**.  

## Estado

El juego está prácticamente operativo, y tanto el modo para un jugador como el modo multijugador en pantalla dividida funcionan a la perfección. Hay algunos pequeños problemas relacionados con los gráficos y la jugabilidad, y es posible que se produzcan fallos ocasionales.

Las siguientes plataformas son compatibles y han sido probadas oficialmente:

- Windows 7 y versiones posteriores: i686, x86_64
- Linux: i686, x86_64
- macOS: x86_64 (OS 10.9 y versiones posteriores), arm64 (OS 11.0 y versiones posteriores)
- Nintendo Switch: arm64

Plataformas no oficiales que tienen una adaptacion:

- Wii U

- Si deseas las distribuciones de PC y Switch visita el repositorio oficial:https://github.com/fgsfdsfgs/perfect_dark/releases
- Si deseas las ultimas actualizaciones de la version de Wii U visita su repositorio: https://github.com/ajfleming1/perfect_dark/releases

## Seccion de Wii U

### Requisitos
- Wii U liberada con los entornos de Tiramisu o Aroma
- Tarjeta SD
- ROM de Perfect Dark: ntsc-final / US V1.1 (md5 e03b088b6ac9e0080440efed07c1e40f)

## Instalación
- Descarga el archivo .zip de tu entorno (Tiramisu o Aroma), descomprime el archivo .zip y mueve los archivos que aparezcan a la raiz de tu tarjeta SD.
- Inícia el juego desde Homebrew Launcher si utilizas Tiramisu mientras que Aroma te aparecera el icono del ejecutable en el menu de Wii U.

## Estructura de la tarjeta SD

La estructura de los archivos en Tiramisu se ve de la siguiente manera: 
sd:/
  wiiu/
    apps/
      perfectdark/
        pd.ppc.rpx
        meta.xml
        icon.png
         data/
           pd.ntsc-final.z64

Mientras que la estructura de los archivos en Aroma seria de la siguiente manera:

sd:/
  wiiu/
    apps/
      perfectdark/
        pd.ppc.wuhb
          data/
             pd.ntsc-final.z64

### Qué funciona

- Menú principal y todos los menús
- Campaña para un jugador (probada en múltiples misiones)
- Elementos del HUD (salud, munición, temporizador)
- Entrada del mando a través del Wii U GamePad
- Audio
- Guardar/cargar

### Problemas Conocidos

- No hay efecto de desenfoque en los menús: el fondo del menú de pausa es negro sólido en lugar de una captura de pantalla desenfocada del juego. Las operaciones de blit del framebuffer utilizadas para el desenfoque no son compatibles con el backend GX2.
  
- Estelas de partículas rizadas: los efectos de partículas (explosiones, estelas de balas) tienen una geometría o transformación incorrecta, lo que provoca estelas rizadas o distorsionadas.
  
- Modos de visión desactivados: las superposiciones de visión nocturna, visión térmica y visión de rayos X están desactivadas. El backend GX2 no admite los modos de renderizado de superposición mezclada que requieren estos efectos.
 
- Sin desenfoque de movimiento: el efecto de desenfoque de movimiento está desactivado.

- Sin efecto ojo de pez: la distorsión de ojo de pez de la cámara Eye Spy está desactivada.

- Desvanecimiento/tinte de pantalla desactivado: los efectos de tinte de color de pantalla (utilizados por los modos de visión) están desactivados debido a que los modos de renderizado no son compatibles con GX2.

- No se puede regresar al menu de Wii U, se tiene que forzar el apagado en la Wii U para salir del juego.

## Compilación desde el código fuente

### Requisitos

- DevkitPro con devkitPPC y Wii U portlibs
- WUT (Wii U Toolchain)
- SDL2 para Wii U
- zlib para Wii U

  ### Compilación

  ./build_wiiu_wut.sh
El script de compilación compilará y generará el archivo pd.ppc.rpx en el directorio build-wiiu-wut/.

## Creditos

* n64decomp/perfect_dark - Descompilación original de N64
* fgsfdsfgs/perfect_dark - Port para PC en el que se basa este port para Wii U
* GaryOderNichts - Referencia del backend LibUltraship para Wii U/GX2
* ajfleming1/perfect_dark - Port para Wii U
