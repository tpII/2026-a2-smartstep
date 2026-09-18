# Bitacora Proyecto SmartStep

## 08/09/2026
### Avances
* Investigación y análisis sobre las patologías y como sensarlas.
* Búsqueda de datasets disponibles.
* Diseño de las plantillas y las respectivas posiciones de los sensores.
* Cotización de cada uno de los elementos a utilizar.
* Investigación sobre los modelos de aprendizaje automático. 

### Proximo Paso
* Terminar de definir cuestiones de desarrollo.
* Terminar el informe incial.
* Grabar el video.

## 12/09/2026
### Avances
* Terminamos el informe incial.
* Grabamos el video para la documentacion.
* Buscamos bibliografia sobre las distintas patologias, y como diagnosticarlas basadandose en las pisadas.
### Preguntas
* Fuente de alimentacion?
* Son 3 patologias (Pie plano, pie cavo y supinacion o pronacion), o 4 (pie plano, pie clavo, supinacion o pronacion).
### Proximo Paso
* Seguir investigando la distribucion de peso en las 3 secciones del pie, para poder empezar a desarrollar la red neuronal.
### Notas
* Para medir el tiempo de sensado, inicialmente un muestreo de 20 segundos y de ahi saco el rango minimo donde se repite el patrón.

## 13/09/2026
### Avances
* Revision de bibliografia encontrada:
    * "Sistema para la detección y clasificación de alteraciones de la bóveda plantar mediante el uso de aprendizaje automático" (Tesis, el archivo se llama BovedaPlantarConla): explica muy bien las diferencias entre un pie normal, plano o cavo, pero no menciona nunca pronacion o suplinacion. Mucho no nos sirve porque se basan en fotos de la planta del pie, a las cuales miden distintas partes y diagnostican en base a ecuaciones conocidas en el rubro. Algo que nos puede servir es el uso de SVM ("es un algoritmo que a partir del producto escalar de los vectores multidimensionales de las muestras construye un hiperplano o conjunto de hiperplanos y un espacio de dimensionalidad muy alta que separa los grupos (Gil-Leiva et al., 2019). Este tipo de algoritmo analiza los datos para su clasificación y tareas de regresión, indaga el mejor hiperplano que separe las distintas clases en el universo de características, es decir; encuentra trazar márgenes entre clases de modo que la separación entre el margen y las clases sea la mayor posible") o KNN ("Este algoritmo compara nuevas muestras con un conjunto de datos etiquetados, calculando la distancia euclidiana para identificar los K vecinos más cercanos. La clase asignada corresponde a la mayoría entre esos vecinos").
    * "SENSOR DE PRESIÓN PLANTAR PORTABLE" (Tesis, el archivo se llama FormaPlantilla): no encontre nada muy interesante, mencionan un articulo que podria ser de interes.
    * "Foot plantar pressure measurement system: a review": hace un resumen de los metodos para medir la presion de los pies, pero no explica mucho de lo que necesitamos. Puede servir para ver la posicion que tienen que tener los sensores.
    * "A Deep-Learning Approach for Foot-Type Classification Using Heterogeneous Pressure Data" (https://www.mdpi.com/1424-8220/20/16/4481): hacen la clasificacion calculando el indice de arco (" Therefore, the arch index (AI) that uses the area of the midfoot is widely used because the area of the midfoot can be easily calculated. A recent study using the AI and ink footprints suggested that the AI and the heights of MLA have a high correlation coefficient of −0.7, which can be useful in conducting biomechanical examinations"). Hay una foto interesenta que tienen que nos puede llegar a servir para inferir sobre los porcentajes. Hablan de pre-pocesamiento de datos antes del entrenamiento, lo que nos puede ser util mas adelante.
    ![Foto de las pisadas y su dianostico.](https://www.mdpi.com/sensors/sensors-20-04481/article_deploy/html/images/sensors-20-04481-g003.png)
    * (tesis, el archivo se llama InfoFiltradoCalibracion) : esta bueno que muestra qué utiliza para realizar la interfaz web.

### Preguntas
* Con esto del porcentaje en cada seccion (baja, media, alta) no podriamos diagnosticar pronacion/supinacion, ahi necesitamos el dato de las secciones divididas verticalemente o no?

## 18/09/2026
### Avances
* Armado de database basandonos en estimaciones de porcentajes en las secciones Alta, Media y Baja. Encontramos algunas imagenes que ya tenian etiqueta de diagnostico y los porcentajes dados. El resto de las imagenes las estimamos.
* Empezamos a investigar como funciona TensorFlow Lite.
### Proximo Paso
* Empezar a entrenar la red neuronal.