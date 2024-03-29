# Manual

## How to build this documentation

In order to make PDF and ePub files from the source code (`.adoc` files), folow these steps:

- Install [asciidoctor](https://asciidoctor.org), [asciidoctor PDF](https://asciidoctor.org/docs/asciidoctor-pdf/) and [asciidoctor EPUB3](https://asciidoctor.org/docs/asciidoctor-epub3/)

- Run on the shell commands like these (adjusting paths as needed):

      asciidoctor-pdf -a pdf-stylesdir=. -a pdf-style=style.yml -o ".../English zxunops2 Manual.pdf" zxunops2_index.adoc

      asciidoctor-epub3 -o ".../English zxunops2 Manual.epub" zxunops2_index.adoc

---

## Construcción de esta documentación

Para poder generar desde el código fuente (archivos `.adoc`), ficheros PDF y ePub, se han de seguir estos pasos (ajustando las rutas a directorios y ficheros según sea necesario):

- Instalar [asciidoctor](https://asciidoctor.org), [asciidoctor PDF](https://asciidoctor.org/docs/asciidoctor-pdf/) y [asciidoctor EPUB3](https://asciidoctor.org/docs/asciidoctor-epub3/)

- Ejecutar unos comandos similares a los siguientes

      asciidoctor-pdf -a pdf-stylesdir=. -a pdf-style=style.yml -o ".../Manual de zxunops2.pdf" zxunops2_indice.adoc

      asciidoctor-epub3 -o ".../build/Manual de zxunops2.epub" zxunops2_indice.adoc
