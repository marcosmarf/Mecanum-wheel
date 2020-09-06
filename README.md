# Tesis
 Scripts en lenguaje R necesarios para replicar el estudio de la tesis "Estudio experimental sobre el impacto del uso de la computación creativa en las funciones ejecutivas".

## Archivo de datos
El archivo datosRaven.csv contiene la estructura del archvo de datos de origen. Los dos datos que aparecen son ficticios y deben eliminarse he introducir los datos originales.
La estrura de los datos esta compuesta por los siguientes campos:
- id: Identificador el alumno
- grup: Grupo clase al que pertenece
- prog: "s" o "n". Escribimos uns s si pertenece al grupo experimental o una n si pertenece al grupo de control
- sexe: "home" o "dona"
- edad: Campo numérico
- a1,b1,c1,d1,e1: Número con los resultados de las diferentes secciones del pre-test
- tot1: Suma del total del primer test
- perc1: Cálculo del centil (opcional)
- grau1: Grado donde se situa segun el centil (opcional)
- valid1: "n" si el test no es válido
- a2,b2,c2,d2,e2: Número con los resultados de las diferentes secciones del post-test
- tot2: Suma del total del segundo test
- perc2: Cálculo del centil (opcional)
- grau2: Grado donde se situa segun el centil (opcional)
- valid2: "n" si el test no es válido

## Archivos con los scripts
Tenemos un primer archivo llamado **Datosv2.Rmd** que contiene el script para realizar los gráficos y las tablas con los resultados. Y un segundo archivo llamado **ProcesorDatosRaven.R** que contiene los scripts para realizar el filtrado y los cáculos estadíticos necesarios.

