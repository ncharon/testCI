FROM gradle
RUN mkdir /home/gradle/CICD
WORKDIR /home/gradle/CICD
VOLUME CICD
COPY ./ /home/gradle/CICD

ENV TZ=Europe/Paris
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone
#RUN apt update && apt install php openssl php-common php-curl php-json php-mbstring php-mysql php-xml php-zip gzip -yq --no-install-recommends

RUN gradle publish --no-daemon --info
RUN ls CICD/build