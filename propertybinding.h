#ifndef PROPERTYBINDING_H
#define PROPERTYBINDING_H

#endif // PROPERTYBINDING_H

#include <QObject>
#include <QVector>
//#include <QGuiApplication>
//#include <QQmlApplicationEngine>
//#include <qtqml>
class propertybinding : public QObject
 {
   Q_OBJECT
   Q_PROPERTY(QString Firstquestionloader READ Firstquestionloader)
   Q_PROPERTY(QString Questionloader READ Questionloader)
   Q_PROPERTY(QString Aloader READ Aloader)
   Q_PROPERTY(QString Bloader READ Bloader)
   Q_PROPERTY(QString Cloader READ Cloader)
   Q_PROPERTY(QString Dloader READ Dloader)
   Q_PROPERTY(int Answearloader READ Answearloader)
   Q_PROPERTY(QString Firstloader READ Firstloader)
   Q_PROPERTY(int ValuefromQML WRITE ValuefromQML)// WRITE setValueToQML NOTIFY valueToQMLChanged)
   Q_PROPERTY(QString ResumeLoader READ ResumeLoader)
   public:
QVector<QString> Questions={"Na podstawie pełnionych funkcji neurony dzielimy na:", "A.) czuciowe, ruchowe i pośredniczące", "B.) czuciowe, przewodzące i pośredniczące", "C.) przewodzące, ruchowe i boczne", "D.) przewodzące, ruchowe i receptorowe", "Homeostaza to zdolność organizmu do utrzymania stałych parametrów organizmu takich jak temperatura czy pH krwi, oraz ich regulacji. Za zachowanie homeostazy odpowiada układ nerwowy wraz z układem:", "A.) pokarmowym", "B.) oddechowym", "C.) hormonalnym", "D.) krwionośnym", "Wśród komórek tkanki nerwowej wyróżniamy:", "A.) neurony i komórki glejowe", "B.) neurony i erytrocyty", "C.) leukocyty i neurony", "D.) komórki glejowe i leukocyty", "Zasadniczymi elementami budowy komórki nerwowej są:", "A.) jądro komórki, jąderko, błona komórkowa, dendryty i aksony", "B.) ciało komórki, błona komórkowa, ściana komórkowa, dendryty i aksony", "C.) mikrofibryle, jąderko, dendryty, osłonka mielinowa i wypustki czuciowe", "D.) ciało komórki, jądro komórki, dendryty, aksony i osłonka mielinowa", "Skrót OUN oznacza:", "A.) Ogólnoustrojowy Układ Nerwowy", "B.) Ośrodkowy Układ Nerwowy", "C.) Ogólny Układ Nerwowy", "D.) Obwodowy Układ Nerwowy", "Główną funkcją osłonki mielinowej jest:", "A.) ochrona mechaniczna i ukrwienie komórki nerwowej", "B.) ochrona mechaniczna i izolacja elektryczna", "C.) ukrwienie komórki nerwowej i izolacja elektryczna", "D.) usztywnienie komórki i przekazywanie impulsu nerwowego", "Ze względu na sposób przekazywania impulsu synapsy dzielimy na:", "A.) chemiczne i elektryczne", "B.) endogenne i egzogenne", "C.) mechaniczne i elektryczne", "D.) obojętne i bipolarne", "Stan pobudzenia w komórkach nerwowych przekazywany jest w:", "A.) obu kierunkach zależnie od rodzaju neuronu", "B.) tylko w jednym kierunku: od organu czuciowego do rdzenia kręgowego i mózgu", "C.) tylko w jednym kierunku: od mózgu, poprzez rdzeń do organów wykonawczych", "D.) stan pobudzenia występuje jedynie w obrębie komórek, które wykonują ruch", "Częstotliwość sygnału elektroencefalograficznego wynosi około:", "A.) -60 ÷ 70 Hz", "B.) 0 ÷ 30 Hz", "C.) 0 ÷ 70 Hz", "D.) – 60 ÷ 0 Hz", "Wielkość mierzonego napięcia sygnału pobudzenia elektrycznego w mózgu wynosi:", "A.) 0÷70 mV", "B.) 10÷100 μV", "C.) 0÷70 μV", "D.) 10÷100 mV", "Skrót EEG oznacza:", "A.) elektrokardiografia", "B.) elektromiografia", "C.) elektroendografia", "D.) elektroencefalografia", "Mózgowie kręgowców, w tym człowieka składa się z kilku połączonych ze sobą części osłonionych czaszką. Można do nich zaliczyć:", "A.) kresomózgowie, międzymózgowie, bocznomózgowie, tyłomózgowie oraz rdzeń przedłużony", "B.) kresomózgowie, płaty skroniowe, śródmózgowie, tyłomózgowie oraz rdzeń podłużny", "C.) kresomózgowie, międzymózgowie, śródmózgowie, tyłomózgowie oraz rdzeń przedłużony", "D.) przodomózgowie, międzymózgowie, śródmózgowie, tyłomózgowie oraz rdzeń podłużny", "Rdzeń kręgowy oraz mózgowie osłonięte są trzema błonami nazywanymi oponami. Ich nazwy pochodzą od pełnionych funkcji, stąd możemy wyróżnić:", "A.) twardówka, pajęczynówka i opona miękka", "B.) twardówka, naczyniówka i opona miękka", "C.) twardówka, pajęczynówka i tęczówka", "D.) twardówka, pajęczynówka i naczyniówka", "Na powierzchni kory mózgowej wyróżniamy fałdy pooddzielane bruzdami. Dzielą one korę mózgową każdej półkuli na cztery płaty. Zaliczamy do nich płaty:", "A.) skroniowy, środkowy, czołowy i potyliczny", "B.) skroniowy, ciemieniowy, czołowy i potyliczny", "C.) przedni, ciemieniowy, czołowy i tylny", "D.) skroniowy, ciemieniowy, czołowy i tylni", "Rdzeń kręgowy znajduje się w kanale utworzonym przez kręgi. W jego budowie można wyodrębnić takie elementy jak:", "A.) istota ciemna, istota biała, róg brzuszny, róg grzbietowy", "B.) istota szara, istota biała, róg brzuszny, róg grzbietowy", "C.) istota szara, istota biała, róg falisty, róg grzbietowy", "D.) istota ciemna, istota biała, róg brzuszny, róg potyliczny", "Do odruchów bezwarunkowych (niezależnych od woli człowieka) nie zalicza się:", "A.) odruchu wymiotnego", "B.) odruchu krztuśnego", "C.) reakcji źrenicy na zmiany oświetlenia", "D.) wydzielania śliny na widok jedzenia", "Urządzenie zbierające i analizujące sygnał pochodzący z aktywności bioelektrycznej mózgu to:", "A.) elektrokardiograf", "B.) elektroencefalograf", "C.) elektromiograf", "D.) elektrostymulator", "Podczas standardowego badania EEG rejestrowane są fale mózgowe, których nazwy są zależne od  ich znaczenia i wielkości amplitudy sygnału. Nie istnieją jednak fale o nazwie:", "A.) alba i beta", "B.) kappa", "C.) lambda", "D.) omega", "Fale mózgowe theta bardzo często są oznaką oznaka senności i hiperwentylacji, występują również przy niektórych stanach patologicznych. Ich występowanie może również oznaczać:", "A.) zespół Downa", "B.) nieprzeciętną inteligencję", "C.) głuchotę lub niedosłuch", "D.) głupotę", "Komórki zwierzęce otoczone są błoną komórkową, która jest selektywnie przepuszczalna dla niektórych związków lub cząsteczek. Oznacza to, że:", "A.) przepuszcza jedynie wybrane cząstki", "B.) przepuszcza wszystkie cząstki", "C.) przepuszcza tylko duże cząstki", "D.) przepuszcza tylko małe cząstki", "Depolaryzacja błony komórkowej oznacza:", "A.) zmniejszenie wartości ładunku ujemnego na zewnątrz komórki", "B.) zmniejszenie wartości ładunku ujemnego na zewnątrz komórki", "C.) zwiększenie wartości ładunku ujemnego wewnątrz komórki", "D.) zmniejszenie wartości ładunku ujemnego wewnątrz komórki", "Epilepsja to choroba, której objawami są rytmiczne, powtarzające się nagłe i krótkie wyładowania w obrębie neuronów, które są ograniczone do określonego obszaru kory mózgowej lub całej jej objętości. Choroba ta znana jest pod nazwą:", "A.) zespół Downa", "B.) choroba Parkinsona", "C.) padaczka", "D.) depresja", "Choroba neurodegeneracyjna znacznie pogarszająca jakość życia, dotykająca głównie osoby starsze i objawiająca się głównie poprzez ślinotok, niestabilność postawy, sztywność mięśniową oraz pochylenie tułowia ku przodowi to:", "A.) choroba Parkinsona", "B.) choroba Alzheimera", "C.) zespół Downa", "D.) choroba Aspergera", "Której przypadłości nie zalicza się to chorób neurodegeneracyjnych, czyli inaczej chorób układu nerwowego:", "A.) miażdżycy", "B.) choroby Alzheimera", "C.) stwardnienia rozsianego", "D.) pląsawicy Huntingtona", "Standardowe badanie EEG trwa co najmniej 30 minut i powinno zawierać około 20 minut zapisu bez artefaktów. Artefakty to inaczej:", "A.) fragmenty zapisu badania EEG, które są istotne pod względem medycznym", "B.) oznaczenia rejestrowanych fal mózgowych", "C.) oznaczenia miejsc specyficznych podczas występowania danej choroby", "D.) zakłócenia pomiarowe pochodzące m. in. od pacjenta i aparatury pomiarowej", "Wysklepienie stopy amortyzuje podczas chodu, gdy nie ma łuku (płaskostopie) obciążamy:", "A.) staw łokciowy, staw biodrowy, kręgosłup", "B.) staw kolanowy, staw biodrowy, staw barkowy", "C.) staw kolanowy, staw biodrowy, kręgosłup", "D.) staw kolanowy, staw biodrowy, mostek", "Kończyny dolne przenoszą:", "A.) prawie 60% masy ciała", "B.) prawie 50% masy ciała", "C.) prawie 80% masy ciała", "D.) prawie 70% masy ciała", "Wpływ na statykę ciała w czasie chodu mają:", "A.) pozycja ciała, masa ciała, siła antygrawitacyjna mięśni", "B.) pozycja ciała, wzrost, masa ciała", "C.) wzrost, masa ciała, siła antygrawitacyjna mięśni", "D.) pozycja ciała, wiek, siła antygrawitacyjna mięsni", "Środek ciężkości znajduje się:", "A.) 33cm powyżej stawu biodrowego, blisko kręgosłupa (przy otyłości przesuwa się do przodu)", "B.) 33cm powyżej stawu biodrowego, blisko kręgosłupa (przy otyłości przesuwa się do tyłu)", "C.) na wysokości końca dalszego mostka, blisko kręgosłupa", "D.) 20cm powyżej stawu biodrowego, blisko kręgosłupa", "Wyróżnia się trzy fazy chodu, trwają one określoną długość cyklu chodu (dwa kroki):", "A.) podporu 49%, przenoszenia 50%, podwójnego podparcia 1%", "B.) podporu około 60%, przenoszenia około 39%, podwójnego podparcia około 1%", "C.) podporu około 40%, przenoszenia około 59%, podwójnego podparcia około 1%", "D.) podporu 69%, przenoszenia 30%, podwójnego podparcia 1%", "Wyróżniamy trzy fazy chodu, jedną z nich jest faza przenoszenia, która rozpoczyna się w momencie oderwania palucha od podłoża, a kończy w chwili zetknięcia pięty tej samej kończyny z podłożem. Składa się ona z trzech podfaz w kolejności:", "A.) przyspieszenie, przenoszenie właściwe, hamowanie", "B.) hamowanie, przyspieszenie, przenoszenie właściwe", "C.) przyspieszenie, hamowanie, przenoszenie właściwe", "D.) przenoszenie właściwe, przyspieszenie, hamowanie", "Ze względu na budowę tkanki mięśniowej wyróżniamy trzy rodzaje mięśni, nie istnieją mięśnie:", "A.) gładkie", "B.) mięsień sercowy", "C.) prążkowane", "D.) poprzecznie prążkowane", "Mięśnie wykorzystują energię z różnych źródeł w zależności od czasu trwania wysiłku:", "A.) kilka sekund - fosfokreatyna, do 60 minut - glukoza, powyżej 60 minut - kwas tłuszczowy", "B.) kilka sekund - glukoza, do 30 minut - fosfokreatyna, powyżej 30 minut - kwas tłuszczowy", "C.) kilka sekund - fosfokreatyna, do 30 minut - kwas tłuszczowy, powyżej 30 minut glukoza", "D.) kilka sekund - glukoza, do 60 minut - fosfokreatyna, powyżej 60 minut - kwas tłuszczowy", "Włóknami nerwowymi przenoszone są bodźce z układu nerwowego do mięśnia. Bodziec elektryczny przenoszony przez włókna nerwowe jest:", "A.) krótkotrwały, asynchroniczny, o dużej częstotliwości (do 50Hz)", "B.) krótkotrwały, synchroniczny, o częstotliwości do 30Hz", "C.) długotrwały, asynchroniczny, o niskiej częstotliwości (do 10Hz)", "D.) krótkotrwały, synchroniczny, o dużej częstotliwości (do 50Hz)", "Mięśnie szkieletowe stanowią około:", "A.) 30-40% ciężaru ciała osobnika dorosłego", "B.) 40-50% ciężaru ciała osobnika dorosłego", "C.) 55-60% ciężaru ciała osobnika dorosłego", "D.) 60-70% ciężaru ciała osobnika dorosłego", "Jaka kara pozbawienia wolności grozi za jazdę w stanie nietrzeźwości?", "A.) kara pozbawienia wolności do 2 lat", "B.) kara pozbawienia wolności do 1 roku", "C.) nie idzie się do więzienia, można tylko stracić prawo jazdy", "D.) do więzienia idzie się tylko w przypadku spowodowania kolizji lub wypadku", "Stan po użyciu alkoholu zaczyna się od:", "A.) od 0,1 mg/l w wydychanym powietrzu", "B.) od 0,2 promila alkoholu we krwi", "C.) od 0,5 promila alkoholu we krwi", "D.) odpowiedzi A i D są prawidłowe", "Ile kosztuje pobyt we WrOPON (Izba Wytrzeźwień ul. Sokolnicza we Wrocławiu):", "A.) pobyt jest darmowy", "B.) 99,98 zł", "C.) 199,98 zł", "D.) 299,98 zł", "Alkoholizm to:", "A.) choroba alkoholowa, uzależnienie od alkoholu", "B.) odpowiedzi A i D są prawidłowe", "C.) picie alkoholu", "D.) utrata kontroli nad ilością spożywanego alkoholu", "Dopuszczalna zawartość alkoholu we krwi w Austrii, Chorwacji, Belgii, Danii, Francji, Grecji to", "A.) tak jak w Polsce - 0,2 promila", "B.) 0,5 promila", "C.) trzeba być zupełnie trzeźwym", "D.) 0,1 promila", "Jakie są inne konsekwencje prawne związane z prowadzeniem pojazdu w stanie nietrzeźwości:", "A.) odpowiedzi B i C są poprawne", "B.) zatrzymanie prawa jazdy", "C.) 10 punktów karnych", "D.) mandat karny w wysokości 500 zł", "Za spożywanie alkoholu w miejscach objętych zakazem grozi mandat karny w wysokości:", "A.) 50 zł", "B.) 100 zł", "C.) 200 zł", "D.) dostaje się wyłącznie pouczenie", "Poczęstowanie alkoholem 17-latka to przestępstwo za które grozi:", "A.) więzienie do 2 lat", "B.) tylko kara grzywny", "C.) można dostać tylko wyrok w zawieszeniu", "D.) nie jest to przestępstwo, 17-latek sam za siebie odpowiada", "Leczenie odwykowe osób uzależnionych od alkoholu jest:", "A.) dobrowolne", "B.) przymusowe, kieruje sąd", "C.) przymusowe, kieruje Policja", "D.) przymusowe, kieruje lekarz orzecznik"};
   // QVector<QString> Questions={ "Na podstawie pełnionych funkcji neurony dzielimy na:", "A.) czuciowe, ruchowe i pośredniczące", "B.) czuciowe, przewodzące i pośredniczące", "C.) przewodzące, ruchowe i boczne", "D.) przewodzące, ruchowe i receptorowe", "Homeostaza to zdolność organizmu do utrzymania stałych parametrów organizmu takich jak temperatura czy pH krwi, oraz ich regulacji. Za zachowanie homeostazy odpowiada układ nerwowy wraz z układem:", "A.) pokarmowym", "B.) oddechowym", "C.) hormonalnym", "D.) krwionośnym", "Wśród komórek tkanki nerwowej wyróżniamy:", "A.) neurony i komórki glejowe", "B.) neurony i erytrocyty", "C.) leukocyty i neurony", "D.) komórki glejowe i leukocyty", "Zasadniczymi elementami budowy komórki nerwowej są:", "A.) jądro komórki, jąderko, błona komórkowa, dendryty i aksony", "B.) ciało komórki, błona komórkowa, ściana komórkowa, dendryty i aksony", "C.) mikrofibryle, jąderko, dendryty, osłonka mielinowa i wypustki czuciowe", "D.) ciało komórki, jądro komórki, dendryty, aksony i osłonka mielinowa", "Skrót OUN oznacza:", "A.) Ogólnoustrojowy Układ Nerwowy", "B.) Ośrodkowy Układ Nerwowy", "C.) Ogólny Układ Nerwowy", "D.) Obwodowy Układ Nerwowy", "Główną funkcją osłonki mielinowej jest:", "A.) ochrona mechaniczna i ukrwienie komórki nerwowej", "B.) ochrona mechaniczna i izolacja elektryczna", "C.) ukrwienie komórki nerwowej i izolacja elektryczna", "D.) usztywnienie komórki i przekazywanie impulsu nerwowego", "Ze względu na sposób przekazywania impulsu synapsy dzielimy na:", "A.) chemiczne i elektryczne", "B.) endogenne i egzogenne", "C.) mechaniczne i elektryczne", "D.) obojętne i bipolarne", "Stan pobudzenia w komórkach nerwowych przekazywany jest w:", "A.) obu kierunkach zależnie od rodzaju neuronu", "B.) tylko w jednym kierunku: od organu czuciowego do rdzenia kręgowego i mózgu", "C.) tylko w jednym kierunku: od mózgu, poprzez rdzeń do organów wykonawczych", "D.) stan pobudzenia występuje jedynie w obrębie komórek, które wykonują ruch", "Częstotliwość sygnału elektroencefalograficznego wynosi około:", "A.) -60 ÷ 70 Hz", "B.) 0 ÷ 30 Hz", "C.) 0 ÷ 70 Hz", "D.) – 60 ÷ 0 Hz", "Wielkość mierzonego napięcia sygnału pobudzenia elektrycznego w mózgu wynosi:", "A.) 0÷70 mV", "B.) 10÷100 μV", "C.) 0÷70 μV", "D.) 10÷100 mV", "Skrót EEG oznacza:", "A.) elektrokardiografia", "B.) elektromiografia", "C.) elektroendografia", "D.) elektroencefalografia", "Mózgowie kręgowców, w tym człowieka składa się z kilku połączonych ze sobą części osłonionych czaszką. Można do nich zaliczyć:", "A.) kresomózgowie, międzymózgowie, bocznomózgowie, tyłomózgowie oraz rdzeń przedłużony", "B.) kresomózgowie, płaty skroniowe, śródmózgowie, tyłomózgowie oraz rdzeń podłużny", "C.) kresomózgowie, międzymózgowie, śródmózgowie, tyłomózgowie oraz rdzeń przedłużony", "D.) przodomózgowie, międzymózgowie, śródmózgowie, tyłomózgowie oraz rdzeń podłużny", "Rdzeń kręgowy oraz mózgowie osłonięte są trzema błonami nazywanymi oponami. Ich nazwy pochodzą od pełnionych funkcji, stąd możemy wyróżnić:", "A.) twardówka, pajęczynówka i opona miękka", "B.) twardówka, naczyniówka i opona miękka", "C.) twardówka, pajęczynówka i tęczówka", "D.) twardówka, pajęczynówka i naczyniówka", "Na powierzchni kory mózgowej wyróżniamy fałdy pooddzielane bruzdami. Dzielą one korę mózgową każdej półkuli na cztery płaty. Zaliczamy do nich płaty:", "A.) skroniowy, środkowy, czołowy i potyliczny", "B.) skroniowy, ciemieniowy, czołowy i potyliczny", "C.) przedni, ciemieniowy, czołowy i tylny", "D.) skroniowy, ciemieniowy, czołowy i tylni", "Rdzeń kręgowy znajduje się w kanale utworzonym przez kręgi. W jego budowie można wyodrębnić takie elementy jak:", "A.) istota ciemna, istota biała, róg brzuszny, róg grzbietowy", "B.) istota szara, istota biała, róg brzuszny, róg grzbietowy", "C.) istota szara, istota biała, róg falisty, róg grzbietowy", "D.) istota ciemna, istota biała, róg brzuszny, róg potyliczny", "Do odruchów bezwarunkowych (niezależnych od woli człowieka) nie zalicza się:", "A.) odruchu wymiotnego", "B.) odruchu krztuśnego", "C.) reakcji źrenicy na zmiany oświetlenia", "D.) wydzielania śliny na widok jedzenia", "Urządzenie zbierające i analizujące sygnał pochodzący z aktywności bioelektrycznej mózgu to:", "A.) elektrokardiograf", "B.) elektroencefalograf", "C.) elektromiograf", "D.) elektrostymulator", "Podczas standardowego badania EEG rejestrowane są fale mózgowe, których nazwy są zależne od  ich znaczenia i wielkości amplitudy sygnału. Nie istnieją jednak fale o nazwie:", "A.) alfa i beta", "B.) kappa", "C.) lambda", "D.) omega", "Fale mózgowe theta bardzo często są oznaką oznaka senności i hiperwentylacji, występują również przy niektórych stanach patologicznych. Ich występowanie może również oznaczać:", "A.) zespół Downa", "B.) nieprzeciętną inteligencję", "C.) głuchotę lub niedosłuch", "D.) głupotę", "Komórki zwierzęce otoczone są błoną komórkową, która jest selektywnie przepuszczalna dla niektórych związków lub cząsteczek. Oznacza to, że:", "A.) przepuszcza jedynie wybrane cząstki", "B.) przepuszcza wszystkie cząstki", "C.) przepuszcza tylko duże cząstki", "D.) przepuszcza tylko małe cząstki", "Depolaryzacja błony komórkowej oznacza:", "A.) zmniejszenie wartości ładunku ujemnego na zewnątrz komórki", "B.) zmniejszenie wartości ładunku ujemnego na zewnątrz komórki", "C.) zwiększenie wartości ładunku ujemnego wewnątrz komórki", "D.) zmniejszenie wartości ładunku ujemnego wewnątrz komórki", "Epilepsja to choroba, której objawami są rytmiczne, powtarzające się nagłe i krótkie wyładowania w obrębie neuronów, które są ograniczone do określonego obszaru kory mózgowej lub całej jej objętości. Choroba ta znana jest pod nazwą:", "A.) zespół Downa", "B.) choroba Parkinsona", "C.) padaczka", "D.) depresja", "Choroba neurodegeneracyjna znacznie pogarszająca jakość życia, dotykająca głównie osoby starsze i objawiająca się głównie poprzez ślinotok, niestabilność postawy, sztywność mięśniową oraz pochylenie tułowia ku przodowi to:", "A.) choroba Parkinsona", "B.) choroba Alzheimera", "C.) zespół Downa", "D.) choroba Aspergera", "Której przypadłości nie zalicza się to chorób neurodegeneracyjnych, czyli inaczej chorób układu nerwowego:", "A.) miażdżycy", "B.) choroby Alzheimera", "C.) stwardnienia rozsianego", "D.) pląsawicy Huntingtona", "Standardowe badanie EEG trwa co najmniej 30 minut i powinno zawierać około 20 minut zapisu bez artefaktów. Artefakty to inaczej:", "A.) fragmenty zapisu badania EEG, które są istotne pod względem medycznym", "B.) oznaczenia rejestrowanych fal mózgowych", "C.) oznaczenia miejsc specyficznych podczas występowania danej choroby", "D.) zakłócenia pomiarowe pochodzące m. in. od pacjenta i aparatury pomiarowej", "Wyróżniamy cztery podstawowe elementy, które sprawiają, że chód charakteryzuje się poprawnością:", "A.) równowaga, spionizowana pozycja, kontrola układu nerwowego, stały rytm", "B.) równowaga, kontrola układu nerwowego, stały rytm, ruch", "C.) równowaga, ruch, integralność układu mięśniowo-szkieletowego, kontrola układu nerwowego", "D.) spionizowana pozycja, kontrola układu nerwowego, ruch, integralność układu mięśniowo-szkieletowego", "Wysklepienie stopy amortyzuje podczas chodu, gdy nie ma łuku (płaskostopie) obciążamy:", "A.) staw łokciowy, staw biodrowy, kręgosłup", "B.) staw kolanowy, staw biodrowy, staw barkowy", "C.) staw kolanowy, staw biodrowy, kręgosłup", "D.) staw kolanowy, staw biodrowy, mostek", "Kończyny dolne przenoszą:", "A.) prawie 60% masy ciała", "B.) prawie 50% masy ciała", "C.) prawie 80% masy ciała", "D.) prawie 70% masy ciała", "Wpływ na statykę ciała w czasie chodu mają:", "A.) pozycja ciała, masa ciała, siła antygrawitacyjna mięśni", "B.) pozycja ciała, wzrost, masa ciała", "C.) wzrost, masa ciała, siła antygrawitacyjna mięśni", "D.) pozycja ciała, wiek, siła antygrawitacyjna mięsni", "Środek ciężkości znajduje się:", "A.) 33cm powyżej stawu biodrowego, blisko kręgosłupa (jeśli ktoś jest otyły, to środek ciężkości przesuwa się do przodu)", "B.) 33cm powyżej stawu biodrowego, blisko kręgosłupa (jeśli ktoś jest otyły, to środek ciężkości przesuwa się do tyłu)", "C.) na wysokości końca dalszego mostka, blisko kręgosłupa", "D.) 20cm powyżej stawu biodrowego, blisko kręgosłupa", "Wyróżnia się trzy fazy chodu, trwają one określoną długość cyklu chodu (dwa kroki):", "A.) podporu 49%, przenoszenia 50%, podwójnego podparcia 1%", "B.) podporu około 60%, przenoszenia około 39%, podwójnego podparcia około 1%", "C.) podporu około 40%, przenoszenia około 59%, podwójnego podparcia około 1%", "D.) podporu 69%, przenoszenia 30%, podwójnego podparcia 1%", "Wyróżniamy trzy fazy chodu, jedną z nich jest faza przenoszenia, która rozpoczyna się w momencie oderwania palucha od podłoża, a kończy w chwili zetknięcia pięty tej samej kończyny z podłożem. Składa się ona z trzech podfaz w kolejności:", "A.) przyspieszenie, przenoszenie właściwe, hamowanie", "B.) hamowanie, przyspieszenie, przenoszenie właściwe", "C.) przyspieszenie, hamowanie, przenoszenie właściwe", "D.) przenoszenie właściwe, przyspieszenie, hamowanie", "Ze względu na budowę tkanki mięśniowej wyróżniamy trzy rodzaje mięśni, nie istnieją mięśnie:", "A.) gładkie", "B.) mięsień sercowy", "C.) prążkowane", "D.) poprzecznie prążkowane", "Mięśnie wykorzystują energię z różnych źródeł w zależności od czasu trwania wysiłku:", "A.) kilka sekund - fosfokreatyna, do 60 minut - glukoza, powyżej 60 minut - kwas tłuszczowy", "B.) kilka sekund - glukoza, do 30 minut - fosfokreatyna, powyżej 30 minut - kwas tłuszczowy", "C.) kilka sekund - fosfokreatyna, do 30 minut - kwas tłuszczowy, powyżej 30 minut glukoza", "D.) kilka sekund - glukoza, do 60 minut - fosfokreatyna, powyżej 60 minut - kwas tłuszczowy", "Włóknami nerwowymi przenoszone są bodźce z układu nerwowego do mięśnia. Bodziec elektryczny przenoszony przez włókna nerwowe jest:", "A.) krótkotrwały, asynchroniczny, o dużej częstotliwości (do 50Hz)", "B.) krótkotrwały, synchroniczny, o częstotliwości do 30Hz", "C.) długotrwały, asynchroniczny, o niskiej częstotliwości (do 10Hz)", "D.) krótkotrwały, synchroniczny, o dużej częstotliwości (do 50Hz)", "Mięśnie szkieletowe stanowią około:", "A.) 30-40% ciężaru ciała osobnika dorosłego", "B.) 40-50% ciężaru ciała osobnika dorosłego", "C.) 55-40% ciężaru ciała osobnika dorosłego", "D.) 30-40% ciężaru ciała osobnika dorosłego", "Jaka kara pozbawienia wolności grozi za jazdę w stanie nietrzeźwości?", "A.) kara pozbawienia wolności do 2 lat", "B.) kara pozbawienia wolności do 1 roku", "C.) nie idzie się do więzienia, można tylko stracić prawo jazdy", "D.) do więzienia idzie się tylko w przypadku spowodowania kolizji lub wypadku", "Stan po użyciu alkoholu zaczyna się od:", "A.) od 0,1 mg/l w wydychanym powietrzu", "B.) od 0,2 promila alkoholu we krwi", "C.) od 0,5 promila alkoholu we krwi", "D.) odpowiedzi A i D są prawidłowe", "Ile kosztuje pobyt we WrOPON (Izba Wytrzeźwień ul. Sokolnicza we Wrocławiu):", "A.) pobyt jest darmowy", "B.) 99,98 zł", "C.) 199,98 zł", "D.) 299,98 zł", "Alkoholizm to:", "A.) choroba alkoholowa, uzależnienie od alkoholu", "B.) odpowiedzi A i D są prawidłowe", "C.) picie alkoholu", "D.) utrata kontroli nad ilością spożywanego alkoholu", "Dopuszczalna zawartość alkoholu we krwi w Austrii, Chorwacji, Belgii, Danii, Francji, Grecji to", "A.) tak jak w Polsce - 0,2 promila", "B.) 0,5 promila", "C.) trzeba być zupełnie trzeźwym", "D.) 0,1 promila", "Jakie są inne konsekwencje prawne związane z prowadzeniem pojazdu w stanie nietrzeźwości:", "A.) odpowiedzi B i C są poprawne", "B.) zatrzymanie prawa jazdy", "C.) 10 punktów karnych", "D.) mandat karny w wysokości 500 zł", "Za spożywanie alkoholu w miejscach objętych zakazem grozi mandat karny w wysokości:", "A.) 50 zł", "B.) 100 zł", "C.) 200 zł", "D.) dostaje się wyłącznie pouczenie", "Poczęstowanie alkoholem 17-latka to przestępstwo za które grozi:", "A.) więzienie do 2 lat", "B.) tylko kara grzywny", "C.) można dostać tylko wyrok w zawieszeniu", "D.) nie jest to przestępstwo, 17-latek sam za siebie odpowiada", "Leczenie odwykowe osób uzależnionych od alkoholu jest:", "A.) dobrowolne", "B.) przymusowe, kieruje sąd", "C.) przymusowe, kieruje Policja", "D.) przymusowe, kieruje lekarz orzecznik"};
  //QVector<int> Answears= {1,3,1,4,2,2,1,1,3,2,4,3,1,2,2,4,2,4,2,1,4,3,1,1,4,3,3,4,1,1,2,1,3,1,1,2,1,4,4,1,2,1,2,1,1};
   QVector<int> Answears= {1,3,1,4,2,2,1,1,3,2,4,3,1,2,2,4,2,4,2,1,4,3,1,1,4,3,4,1,1,2,1,3,1,1,2,1,4,4,1,2,1,2,1,1};
   explicit propertybinding(QObject *parent = 0);
   ~propertybinding();
   QString Firstquestionloader();
   QString Questionloader() const;
   QString Aloader();
   QString Bloader();
   QString Cloader();
   QString Dloader();
   int Answearloader();
   QString LoadData();
   void ValuefromQML(int);
   QString Firstloader();
   QString ResumeLoader();


















signals:
    void valueToQMLChanged();

private:
   QString _valueString;
};
