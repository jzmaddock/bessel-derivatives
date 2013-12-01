//  Copyright (c) 2013 Anton Bikineev
//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

   static const boost::array<boost::array<typename table_type<T>::type, 3>, 100> bessel_y01_derivative_data = {{
      {{ SC_(0), SC_(0.23917420208454132080078125e0), SC_(2.8160255059578487028902306927374355839994931221929) }}, 
      {{ SC_(0), SC_(0.1785583972930908203125e1), SC_(0.23235748809524737566987412330781331582320965659275) }}, 
      {{ SC_(0), SC_(0.48770198822021484375e1), SC_(-0.18877937536061895899967905227004205899449010228318) }}, 
      {{ SC_(0), SC_(0.54930877685546875e1), SC_(0.021439540975525944323262978206905917504240444712528) }}, 
      {{ SC_(0), SC_(0.5623225688934326171875e1), SC_(0.064329844609384370150216897124757343077869966294738) }}, 
      {{ SC_(0), SC_(0.6349340915679931640625e1), SC_(0.25113079721025853729171234525844025390943188982436) }}, 
      {{ SC_(0), SC_(0.677385044097900390625e1), SC_(0.29897850368696120528734364400288464504363404931976) }}, 
      {{ SC_(0), SC_(0.7094316959381103515625e1), SC_(0.29973771397452326368717823323124759690248504450039) }}, 
      {{ SC_(0), SC_(0.788065433502197265625e1), SC_(0.18613305146905639389328169267949918140504113856277) }}, 
      {{ SC_(0), SC_(0.941909885406494140625e1), SC_(-0.19036122713610246671982274280800441622095889554014) }}, 
      {{ SC_(0), SC_(0.105962162017822265625e2), SC_(-0.224049716604446836736632947893146679975465117857) }}, 
      {{ SC_(0), SC_(0.110517024993896484375e2), SC_(-0.15401608187416716285526369230840576523040780614666) }}, 
      {{ SC_(0), SC_(0.139249114990234375e2), SC_(0.17663964675014901648589363787821263403423499798349) }}, 
      {{ SC_(0), SC_(0.1485147190093994140625e2), SC_(0.0095063636810792453191293211178670792758593381498708) }}, 
      {{ SC_(0), SC_(0.15408351898193359375e2), SC_(-0.099321403407708436538763939792420633860998604008867) }}, 
      {{ SC_(0), SC_(0.180646991729736328125e2), SC_(0.003995388258078618389192173389771024944513081646781) }}, 
      {{ SC_(0), SC_(0.199369258880615234375e2), SC_(0.16966005133295571214255600562172614490470151366759) }}, 
      {{ SC_(0), SC_(0.210880641937255859375e2), SC_(0.017339574559900714978422259933739895574305543221554) }}, 
      {{ SC_(0), SC_(0.242687816619873046875e2), SC_(-0.010219713957012114041092659493343936388808937267773) }}, 
      {{ SC_(0), SC_(0.25183135986328125e2), SC_(0.11955622913751678352855123430187887550301615859819) }}, 
      {{ SC_(0), SC_(0.27344074249267578125e2), SC_(0.019959854807062875248146536482626859126756344259966) }}, 
      {{ SC_(0), SC_(0.273610286712646484375e2), SC_(0.017387606004441014085627545733466105225101904851545) }}, 
      {{ SC_(0), SC_(0.316179637908935546875e2), SC_(0.11937012319340141025582248541533426100937338072567) }}, 
      {{ SC_(0), SC_(0.3198816680908203125e2), SC_(0.13824621020654440713537197265815480030190621850228) }}, 
      {{ SC_(0), SC_(0.327870330810546875e2), SC_(0.11525029856620887832145626883283068936873160517223) }}, 
      {{ SC_(0), SC_(0.33936756134033203125e2), SC_(-0.023942182953281536905519741919209736632424028771619) }}, 
      {{ SC_(0), SC_(0.340679779052734375e2), SC_(-0.041299061230271528530782751216242117326606839248947) }}, 
      {{ SC_(0), SC_(0.362919464111328125e2), SC_(-0.076040143422368981045014883557704218401187566123834) }}, 
      {{ SC_(0), SC_(0.396103668212890625e2), SC_(0.053485533838128848920179998783378623809083891299154) }}, 
      {{ SC_(0), SC_(0.3989643096923828125e2), SC_(0.018814153969104000764568521959687056195021386688711) }}, 
      {{ SC_(0), SC_(0.39905292510986328125e2), SC_(0.017704683455571731729336926149491483229833968511736) }}, 
      {{ SC_(0), SC_(0.400140228271484375e2), SC_(0.0040252887269282480875992256145927731795506603298095) }}, 
      {{ SC_(0), SC_(0.4073618316650390625e2), SC_(-0.079591152610915091040888616417633921498221900112947) }}, 
      {{ SC_(0), SC_(0.4175042724609375e2), SC_(-0.12240131660604621322305671412903301206477516365437) }}, 
      {{ SC_(0), SC_(0.424564666748046875e2), SC_(-0.081814513092091864815448838642070650205449410458487) }}, 
      {{ SC_(0), SC_(0.4392153167724609375e2), SC_(0.080578152330367083761633075994914671599941893724138) }}, 
      {{ SC_(0), SC_(0.452895965576171875e2), SC_(0.10229361274517489736704003772246849525611451668562) }}, 
      {{ SC_(0), SC_(0.45668792724609375e2), SC_(0.072534513057525086636496020282559927205898201325015) }}, 
      {{ SC_(0), SC_(0.45786777496337890625e2), SC_(0.060986134121659023844059098992534975038861816317948) }}, 
      {{ SC_(0), SC_(0.466996612548828125e2), SC_(-0.042137468529811189128826813874937867616660056987678) }}, 
      {{ SC_(0), SC_(0.47858348846435546875e2), SC_(-0.11523731949096424550283622538598501790663780060723) }}, 
      {{ SC_(0), SC_(0.4787534332275390625e2), SC_(-0.11528466188928125885314263368293352091332521612242) }}, 
      {{ SC_(0), SC_(0.47974620819091796875e2), SC_(-0.11489648352025702207072483790810321435068976951751) }}, 
      {{ SC_(0), SC_(0.48244426727294921875e2), SC_(-0.10819345503638207416057912458617958593607541362806) }}, 
      {{ SC_(0), SC_(0.48384746551513671875e2), SC_(-0.1015812774603423801064358240911218545138513149809) }}, 
      {{ SC_(0), SC_(0.48443389892578125e2), SC_(-0.098223836933176429979101352394952671244373747207488) }}, 
      {{ SC_(0), SC_(0.4852964019775390625e2), SC_(-0.092683963080647660414706061073719775474487057139519) }}, 
      {{ SC_(0), SC_(0.49055484771728515625e2), SC_(-0.046138474619323022143430799928990450520107652848686) }}, 
      {{ SC_(0), SC_(0.4964406585693359375e2), SC_(0.019331152830842643045119117081266885927575607100241) }}, 
      {{ SC_(0), SC_(0.4982306671142578125e2), SC_(0.038817353718255684606317546218112519105490212133233) }}, 
      {{ SC_(0.1e1), SC_(0.23917420208454132080078125e0), SC_(10.812507832957341931214545992895156231599712258219) }}, 
      {{ SC_(0.1e1), SC_(0.1785583972930908203125e1), SC_(0.60427443391081334334181766626081228620063260873387) }}, 
      {{ SC_(0.1e1), SC_(0.48770198822021484375e1), SC_(-0.32651079785592346752758523165581662958177729561332) }}, 
      {{ SC_(0.1e1), SC_(0.54930877685546875e1), SC_(-0.33573380038634539617323513325620839606154581909548) }}, 
      {{ SC_(0.1e1), SC_(0.5623225688934326171875e1), SC_(-0.3225973071093089335123479717413924553248076009425) }}, 
      {{ SC_(0.1e1), SC_(0.6349340915679931640625e1), SC_(-0.17333487628710714853031704408209329445293558203248) }}, 
      {{ SC_(0.1e1), SC_(0.677385044097900390625e1), SC_(-0.050131112967268957382438882005038072207535173650758) }}, 
      {{ SC_(0.1e1), SC_(0.7094316959381103515625e1), SC_(0.04472950053731081610648599640847482354474360741216) }}, 
      {{ SC_(0.1e1), SC_(0.788065433502197265625e1), SC_(0.22658164938031188644633615195221479628960534668392) }}, 
      {{ SC_(0.1e1), SC_(0.941909885406494140625e1), SC_(0.16692878936071101734106705164639746574338989772007) }}, 
      {{ SC_(0.1e1), SC_(0.105962162017822265625e2), SC_(-0.11071250374966673495860511216105163231124951079888) }}, 
      {{ SC_(0.1e1), SC_(0.110517024993896484375e2), SC_(-0.19099840388424268371627580842969730925336096713734) }}, 
      {{ SC_(0.1e1), SC_(0.139249114990234375e2), SC_(0.1269836723022387894538920263034159826757379452381) }}, 
      {{ SC_(0.1e1), SC_(0.1485147190093994140625e2), SC_(0.20696877549581033919327742608230231929521193801991) }}, 
      {{ SC_(0.1e1), SC_(0.15408351898193359375e2), SC_(0.17401778584378207213590175652108236648871939175921) }}, 
      {{ SC_(0.1e1), SC_(0.180646991729736328125e2), SC_(-0.1874653662247806012047325668402622759309518551284) }}, 
      {{ SC_(0.1e1), SC_(0.199369258880615234375e2), SC_(0.060576681266409168671201178629315636969603677417947) }}, 
      {{ SC_(0.1e1), SC_(0.210880641937255859375e2), SC_(0.17322122411361177407572623619907102624702081212558) }}, 
      {{ SC_(0.1e1), SC_(0.242687816619873046875e2), SC_(-0.1618000215236425423458293655202291632317096016852) }}, 
      {{ SC_(0.1e1), SC_(0.25183135986328125e2), SC_(-0.10244646824791563451028965200141454446371330311042) }}, 
      {{ SC_(0.1e1), SC_(0.27344074249267578125e2), SC_(0.15160080339883075557243731644472737434389412791864) }}, 
      {{ SC_(0.1e1), SC_(0.273610286712646484375e2), SC_(0.15182294729982620678273880207456651361954838794093) }}, 
      {{ SC_(0.1e1), SC_(0.316179637908935546875e2), SC_(-0.074848459161508012008212703662365112002478351328335) }}, 
      {{ SC_(0.1e1), SC_(0.3198816680908203125e2), SC_(-0.026058372262493194259685050043992626827114618164322) }}, 
      {{ SC_(0.1e1), SC_(0.327870330810546875e2), SC_(0.080095703907591597355456547131827347703852175245458) }}, 
      {{ SC_(0.1e1), SC_(0.33936756134033203125e2), SC_(0.13448043359507423570848832873966795287653905709874) }}, 
      {{ SC_(0.1e1), SC_(0.340679779052734375e2), SC_(0.12968625590210805796183153586957109125536077909944) }}, 
      {{ SC_(0.1e1), SC_(0.362919464111328125e2), SC_(-0.10948170649977114957454569018334523887144494213971) }}, 
      {{ SC_(0.1e1), SC_(0.396103668212890625e2), SC_(0.11560533819010843318104637742152251378818310919984) }}, 
      {{ SC_(0.1e1), SC_(0.3989643096923828125e2), SC_(0.12513284832475310290871439971297893236202382151324) }}, 
      {{ SC_(0.1e1), SC_(0.39905292510986328125e2), SC_(0.12526674849156954841371081792458342160101433537496) }}, 
      {{ SC_(0.1e1), SC_(0.400140228271484375e2), SC_(0.12610585804263713361765492939092873392682615399216) }}, 
      {{ SC_(0.1e1), SC_(0.4073618316650390625e2), SC_(0.095420004209033441386616846916828715092923981164045) }}, 
      {{ SC_(0.1e1), SC_(0.4175042724609375e2), SC_(-0.017876930492640725704353138240070555890101837210027) }}, 
      {{ SC_(0.1e1), SC_(0.424564666748046875e2), SC_(-0.092072082871150743792820142997585126140424565877647) }}, 
      {{ SC_(0.1e1), SC_(0.4392153167724609375e2), SC_(-0.088532602806232415557877716387220939105895451064965) }}, 
      {{ SC_(0.1e1), SC_(0.452895965576171875e2), SC_(0.061079024774647242348217514169879728603535253369637) }}, 
      {{ SC_(0.1e1), SC_(0.45668792724609375e2), SC_(0.093950528119256405378181578872389655349732106204859) }}, 
      {{ SC_(0.1e1), SC_(0.45786777496337890625e2), SC_(0.10157976827894122161910168738072866258894632748933) }}, 
      {{ SC_(0.1e1), SC_(0.466996612548828125e2), SC_(0.10842897035854428421543763648314206962873595663058) }}, 
      {{ SC_(0.1e1), SC_(0.47858348846435546875e2), SC_(0.0037652337631905597277430302803174864751392038332945) }}, 
      {{ SC_(0.1e1), SC_(0.4787534332275390625e2), SC_(0.0018062523047039610297840146828025221156156219518872) }}, 
      {{ SC_(0.1e1), SC_(0.47974620819091796875e2), SC_(-0.009615960187911834875974411530889731103486348447154) }}, 
      {{ SC_(0.1e1), SC_(0.48244426727294921875e2), SC_(-0.039742093272943000337244904492140484310575453741429) }}, 
      {{ SC_(0.1e1), SC_(0.48384746551513671875e2), SC_(-0.054340669186892685422812555325029652310344886183214) }}, 
      {{ SC_(0.1e1), SC_(0.48443389892578125e2), SC_(-0.060129099933968697776798880462499159004592800619415) }}, 
      {{ SC_(0.1e1), SC_(0.4852964019775390625e2), SC_(-0.068249304448534329151126356792676147875495846808989) }}, 
      {{ SC_(0.1e1), SC_(0.49055484771728515625e2), SC_(-0.1046214022934232142095256297166114261466610970061) }}, 
      {{ SC_(0.1e1), SC_(0.4964406585693359375e2), SC_(-0.11137653514477669071095901730717066194022626312986) }}, 
      {{ SC_(0.1e1), SC_(0.4982306671142578125e2), SC_(-0.1057675247210582492156600670383499544602927957322) }}
   }};