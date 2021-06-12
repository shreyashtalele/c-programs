#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct compound
{
    char name[50],representation[30],preparation[200],uses[2700],constituent_elements[60];
};

struct compound *molecules_data(){
    struct compound *molecule = malloc(sizeof(struct compound) * 150);

    strcpy(molecule[0].name,"");
    strcpy(molecule[0].representation,"");
    strcpy(molecule[0].preparation,"");
    strcpy(molecule[0].constituent_elements,"");
    strcpy(molecule[0].uses,"");

    strcpy(molecule[1].name,"");
    strcpy(molecule[1].representation,"");
    strcpy(molecule[1].preparation,"");
    strcpy(molecule[1].constituent_elements,"");
    strcpy(molecule[1].uses,"");

    strcpy(molecule[51].name,"Phenol");
    strcpy(molecule[51].representation,"C6H5OH");
    strcpy(molecule[51].preparation,"Phenol is prepared by four methods 
                                    \n Method 1: From chlrobenzene(Dow's Process):-Chlorobenzene is fused with NaOH at high temprature and pressure
                                    (623k and 150atm)followed by treatment with dil.HCL to obtain phenol 
                                    \n C6H5-Cl ->C6H5-OH(Phenol) + NaCl\n
                                    \nMethod 2:From Cumene:-Cumene on air oxidation in presence of co-naphthenate gives cumene hydroperoxide which
                                    on decomposition with dilute acid gives phenol with acetone as a valuable product
                                    \n C9H12 + O2 -> C9H12O2 ->C6H5-OH(Phenol) + CH3COCH3(Acetone)\n
                                    \nMethod 3:From benzene sulfonic acid:-Benzene sulfonic acid on neutralization by NaOH gives benzene sulfonate,which 
                                    on fusion with solid NaOH at 573k gives sodium phenoxide ,followed by reaction with dilaute acid gives phenol
                                    \n C6H6O3S -> C6H5SO3Na -> NaOC6H5 -> C6H5-OH(Phenol)\n
                                    \nMethod 4:From aniline :- aniline is treated with nitrous acid at low temp. to obtain benzene diazonium chloride,which 
                                    on hydrolysis gives phenol 
                                    \n C6H5NH2 -> HNO2 -> [C6H5N2]Cl -> C6H5-OH(Phenol)+N2 \n ");
    strcpy(molecule[51].constituent_elements,"C,H,O");
    strcpy(molecule[51].uses,"Uses of Phenol:- 1.Phenol is uesd in plastic manufacturing industries\n
                                               2.Phenol is used to commercially prepare phenolic resins\n
                                               3.Phenol is used in the study and extraction of bio-molecule\n
                                               4.Phenol is used in cosmetic industries ");

    strcpy(molecule[52].name,"alcohol");
    strcpy(molecule[52].representation,"C-OH");
    strcpy(molecule[52].preparation,"preparation  of alcohol;-
                                                            1.Hydrolysis of halides:- alkyl halides when boiled with an aq.solution of an alkali hydroxide gives 
                                                            alcohol through nucleophilic substitution mechanism\n
                                                              \n R-X + KOH -> R-OH(Alcohol) + KX\n
                                                            2.Hydration of alkenes :- direct hydration takes place by adding water in the presence of a catalyst\n
                                                              \neg.Ethanol is manufactured by reacting ethene with steam(the reaction is reversible)
                                                              \n CH2=CH2(g) + H2O(g) -> CH3CH2OH(g)\n
                                                            3. Grignard synthesis:- all three types of alcohols can be prepared from Grignard reagents by interction 
                                                             with suitable cabronyl compounds 
                                                              \neg.ethyl magnesium chloride react with propanol to give ethane 
                                                              \n CH3CH2CH2OH + CH3CH2MgCl -> CH3CH2CH2MgCl + CH3CH2H ");
    strcpy(molecule[52].constituent_elements,"C,H,O");
    strcpy(molecule[52].uses,"Uses of Alcohol:- 1.Alcohols are uesd as a solvent for paints,shellac,varnishes and cement plant\n
                                                2.Alcohol uses for manufacturing dyes and antibiotics drugs\n
                                                3.Alcohol is used for prepration of hand-sanitizers");

    strcpy(molecule[53].name,"Methyl alcohol");
    strcpy(molecule[53].representation,"H3C-OH");
    strcpy(molecule[53].preparation,"Preparation of Methyl alcohol:-1.Hydrolysis of methyl chloride:
                                                                         \n CH3​−Cl+aq KOH→CH3​−OH+KCl \n
                                                                    2.By hydrolysis of dimethyl ether with hot dil sulphuric acid under pressure:
                                                                        \n CH3​−O−CH3​ + H2​O -> ​2CH3​−OH \n");
    strcpy(molecule[53].constituent_elements,"C,H,O");
    strcpy(molecule[53].uses,"Uses of Methyl alcohol:-1.Methyl Alcohol is primarily used as an industrial solvent to help create inks, resins, adhesives, and dyes.\n
                                                    2.It is also used as a solvent in the manufacture of important pharmaceutical ingredients and products such as
                                                    cholesterol, streptomycin, vitamins and hormones.\n
                                                    3.It is used as antifreeze, solvent, fuel \n");

    strcpy(molecule[54].name,"Ethyl alcohol");
    strcpy(molecule[54].representation,"H3C-CH2-OH");
    strcpy(molecule[54].preparation,"Preparation of Ethyl alcohol(From Molasses):-When sucrose is crystallized from concentrated sugar cane juice, dark brown coloured mother liquor 
                                     is left which is called molasses. It is diluted with water, acidified with dil sulphuric acid and 
                                     then ammonium sulphate is added. Then yeast is added and temperature is kept at 30 deg C for 2-3 days. 
                                     Ethyl Alcohol is formed by fermentation. The contents are filtered and the filtrate is distilled.
                                     \n C12​H22​O11(sucrose) ​​+ H2​O -> ​C6​H12​O6(Glucose) ​​+ C6​H12​O6​​(Fructose) \n
                                     \n C6​H12​O6 -> 2C2​H5​OH + 2C2​H5​OH​ + 2CO2​↑ \n");
    strcpy(molecule[54].constituent_elements,"C,H,O");
    strcpy(molecule[54].uses,"Uses of Ethyl Alcohol:-
                                                1.it is used as a solvent, in the synthesis of other organic chemicals \n
                                                2.it is also used in additive to automotive gasoline \n
                                                3.Ethyl alcohol is a common ingredient in many cosmetics and beauty products \n ");

    strcpy(molecule[55].name,"Propane");
    strcpy(molecule[55].representation,"CH3CH2CH3");
    strcpy(molecule[55].preparation,"Wurtz Reaction:
                                                when iodoethane and iodomethane is treated with sodium and H2O is forms propane and it is called wrutz reation
                                                \n CH3​CH2​I + CH3​I -> CH3​CH2​CH3​ \n");
    strcpy(molecule[55].constituent_elements,"C,H");
    strcpy(molecule[55].uses,"uses of propane:-1.It is mainly used in home and water heating \n
                                            2.The chemical industry also uses propane as a raw material for making plastics and other compounds \n ");

    strcpy(molecule[56].name,"Isopropyl Alcohol");
    strcpy(molecule[56].representation,"CH3CHCH2");
    strcpy(molecule[56].preparation," Preaparation of Isopropyl alcohol:-Propylene is reacted with H20 and in the presence of H2SO4 to form isopropyl alcohol 
                                      \n CH3CHCH2 + H-OH + H2SO4 -> CH3CHOHCH3 \n");
    strcpy(molecule[56].constituent_elements,"C,H,O");
    strcpy(molecule[56].uses,"uses of isopropyl alcohol:- 1.isopropyl alcohol is mixed with water for use as a rubbing-alcohol antiseptic \n
                                                          2. It is also used in aftershave lotions, hand lotions, and other cosmetics.\n
                                                          3.In industry it is used as an inexpensive solvent for cosmetics, drugs, shellacs, and gums, as well as for denaturing ethanol \n");


    
    strcpy(molecule[57].name,"Ethylene glycol");
    strcpy(molecule[57].representation,"(CH2OH)2");
    strcpy(molecule[57].preparation,"Preparation of Ethylene glycol:-Ethylene is converted into ethylene oxide in the presence of sliver oxide and oxygen,
                                    then ethylene oxide is reacted with h+ ions and H2O to form ethylene glycol (ethane-1,2-diol)
                                    \n H2C=CH + O2 +Ag2O -> C2H4O \n
                                    \n C2H4O + H2O + H+ -> (CH2OH)2");
    strcpy(molecule[57].constituent_elements,"C,O,H");
    strcpy(molecule[57].uses,"Uses of ethylene glycol:-1.the major use of ethylene glycol is a medium for convective heat transfer\n
                                                      2.ethylene glycol disrupts hydrogen bonding when dissolved in water \n
                                                      3.it also is used as a pharmaceutical vehicle.");

    strcpy(molecule[58].name,"Propylene glycol");
    strcpy(molecule[58].representation,"CH₃CHCH₂OH");
    strcpy(molecule[58].preparation,"Preparation of propylene glycol :- Glycol is treated with hydrogen catalyst to form the propylene glycol
                                      with water 
                                      \n C3H8O3 + hydrogen -> CH₃CHCH₂OH + water \n");
    strcpy(molecule[58].constituent_elements,"C,H,O");
    strcpy(molecule[58].uses,"Uses of propylene glycol:-1.It is used to absorb extra water and maintain moisture in certain medicines, cosmetics, or food products \n
                                                        2. It is a solvent for food colors and flavors, and in the paint and plastics industries.
                                                        3.Propylene glycol is also used to create artificial smoke or fog used in fire-fighting training and in theatrical productions.");

    strcpy(molecule[59].name,"Nitro phenol ");
    strcpy(molecule[59].representation,"C6H5NO3");
    strcpy(molecule[59].preparation,"Preparation of nitro phenol:- phenol is reacted with NaNO2 and H2SO4 at 7-8 celcius to form Nitrousphenol
                                      and nitrousphenol is treated with HNO3 to form Nitro phenol
                                      \n C6H5OH + NaNO2 + H2SO4 -> C6H5NO2 \n
                                         C6H5NO2 + HNO3 -> C6H5NO3 \n ");
    strcpy(molecule[59].constituent_elements,"C,H,O");
    strcpy(molecule[59].uses,"Uses of nitro phenol:-Nitrophenol is used to manufacture drugs, fungicides, insecticides, and dyes and to darken leather");

    strcpy(molecule[60].name,"Catechol");
    strcpy(molecule[60].representation," C₆H₄(OH)₂");
    strcpy(molecule[60].preparation,"Preparation of Catechol:-2-amino phenol are diazotised in the ordinary way and the diazo-solution slowly run into 100 ml of boiling, 10%,
                                     copper sulphate solution. When the reaction is complete the solution is cooled and the pyrocatechol extracted with ether. 
                                     Ether is removed by evaporation yielding catechol
                                    \n C₆H₇NO + NaNO2 + H2SO4 -> C₆H₄(OH)₂ \n ");
    strcpy(molecule[60].constituent_elements,"C,H,O");
    strcpy(molecule[60].uses,"Uses of catechol:- 1. Catechol Used as a redox mediator \n
                                                2. catechol is consumed in the production of pesticides, the remainder being used as a
                                                  precursor to fine chemicals such as perfumes and pharmaceuticals.\n ");

    
    strcpy(molecule[61].name,"Methoxyphenol");
    strcpy(molecule[61].representation,"C7H8O2");
    strcpy(molecule[61].preparation,"Preparation of 3-Methoxyphenol:-resorcinol is reacted with sodium hydroxide and dimethyl sulfate With vigorous
                                       stirring to form product 3-Methoxyphenol
                                      \n C₆H₄(OH)₂ + NaOH + (CH3)2SO4 ->  C7H8O2 \n");
    strcpy(molecule[61].constituent_elements,"C,H,O");
    strcpy(molecule[61].uses,"Uses of methoxyphenol:-1.2-Methoxyphenol is used as an expectorant, and in synthetic flavors \n
                                                     2.3-Methoxyphenol can be used as catalysts and as building blocks in synthesis of 
                                                      organic compounds such as antioxidants.\n
                                                    3. 4-Methoxyphenol is used to manufacture plasticizers, dyestuffs, stabilizer for chlorinated hydrocarbon");

    strcpy(molecule[62].name,"Pyrogallol ");
    strcpy(molecule[62].representation,"C6H3(OH)3");
    strcpy(molecule[62].preparation,"Preparation of pyrogallol:- pyrogallol is prepared by heating gallic acid 
                                    \n C₆H₂(OH)₃CO₂H (heating,-co2) ->  C6H3(OH)3 \n ");
    strcpy(molecule[62].constituent_elements,"C,H,O");
    strcpy(molecule[62].uses,"Uses of pyrogallol :- 1. it is used in hair dyeing \n
                                                    2. Pyrogallol was also used as a developing agent in black-and-white developers\n
                                                    3.It also has antiseptic properties");

    strcpy(molecule[63].name,"Dimethyl ether");
    strcpy(molecule[63].representation,"CH₃OCH₃");
    strcpy(molecule[63].preparation,"Preparation of Dimethyl ether(Williamson synthesis method):-
                                     In this method sodium or potassium ethoxide is heated with chloro ethane or bromo ethane or iodo ethane.
                                      This reaction results in Diethyl ether.
                                      \n C2H5ONa + C2H5I → C2H5 – O – C2H5 + NaI \n ");
    strcpy(molecule[63].constituent_elements,"C,H");
    strcpy(molecule[63].uses,"Uses of Dimethyl ether:-1.Dimethyl ether is a synthetically produced alternative to diesel for use in
                                                       specially designed compression ignition diesel engines \n
                                                      2.It is used extensively in the chemical industry and as an aerosol propellant. ");

    strcpy(molecule[64].name,"methoxy ethane");
    strcpy(molecule[64].representation,"CH3-CH2-O-CH3");
    strcpy(molecule[64].preparation,"Preparation  of methoxy ethane:-Sodium ethoxide is treated with methyl oxide to form methoxy ethane 
                                     \n C2H5ONa + CH3I -> C3H5OCH3 \n");
    strcpy(molecule[64].constituent_elements,"C,H,O");
    strcpy(molecule[64].uses,"Uses of methoxy ethane :-1.It is used as an aerosol propellant, as a refrigerant,
                                                           and as a blowing agent for the production of some foams \n 
                                                        2.It can also be used as a fuel in diesel engines \n");

    strcpy(molecule[65].name,"Ethoxy benzene");
    strcpy(molecule[65].representation,"C8H10O");
    strcpy(molecule[65].preparation,"Preparation of Ethoxy benzene:-sodium phenoxide reacts with bromoethane to form ethoxy benzene
                                      \n  C6H5NaO + CH3CH2Br -> C8H10O + NaBr \n ");
    strcpy(molecule[65].constituent_elements,"C,H");
    strcpy(molecule[65].uses,"Uses of ethoxy benzene:- Ethoxybenzene is can be used as an analyte in assaying the performance of porous 
                                                       graphitic carbon (PGC) particles.");

     strcpy(molecule[66].name,"Propoxybenzene");
    strcpy(molecule[66].representation,"C9H12O");
    strcpy(molecule[66].preparation,"Preparation of propoxybenzene:-sodium propoxide and 1-bromopropane is reacted to form a product 1-propoxypropane
                                    \n CH3CH2CHONa + CH3CH2CH2Br -> C2H5CH2-O-CH2C2H5 + NaBr \n");
    strcpy(molecule[66].constituent_elements,"C,H,O");
    strcpy(molecule[66].uses,"Uses of propoxybenzene:-Propylbenzene is used as a nonpolar organic solvent in various industries, including printing 
                                                      and the dyeing of textiles and in the manufacture of methylstyrene");

    strcpy(molecule[67].name,"Methyl tertbutyl ether(MTBE)");
    strcpy(molecule[67].representation,"(CH₃)₃COCH₃");
    strcpy(molecule[67].preparation,"Preparation of Methyl tertbutyl ether :-sodium methyl propoxide is reacted with bromoethane to get product methyl tertbutyl ether
                                                                              (2-Methoxy-2-methylpropane)
                                      \n CH3CH3CH3CONa + CH3Br -> CH3CH3CH3COCH3 + NaBr \n");
    strcpy(molecule[67].constituent_elements,"C,H,O");
    strcpy(molecule[67].uses,"Uses of methyl tertbutyl ether:-MTBE is a volatile, flammable, and colorless liquid that is sparingly soluble in water. Primarily used as a fuel additive, 
                                              MTBE is blended into gasoline to increase knock resistance and reduce unwanted emissions");

    strcpy(molecule[68].name,"Picric acid ");
    strcpy(molecule[68].representation,"((O₂N)₃C₆H₂OH)";
    strcpy(molecule[68].preparation,"Preparation of picric acid:- phenol reacts with concentrated nitric acid to form picric acid
                                   \n C6H6O + 3HO-NO2 -> (O₂N)₃C₆H₂OH + 3H2O ");
    strcpy(molecule[68].constituent_elements,"C,H,O,N ");
    strcpy(molecule[68].uses,"Uses of picric acid:- 1.Picric acid is used in the production of explosives, matches, and electric batteries.\n
                                                    2. picric acid used in etching copper and manufacturing colored glass");

    strcpy(molecule[69].name,"Benzoquinone");
    strcpy(molecule[69].representation,"C₆H₄O₂");
    strcpy(molecule[69].preparation,"Praparation of Benzoquinone:- phenol on oxidation with chromic anhyride or sodium dichromate in presence 
                                              of H2So4 give p-benzoquinone
                                                \n C6H6O + CrO3/Na2Cr2o + H2SO4 -> C₆H₄O₂ \n");
    strcpy(molecule[69].constituent_elements,"C,H,O");
    strcpy(molecule[69].uses,"uses of Benzoquinone:- 1.it is used to form benzofuranone derivatives on reacting with anilides of β-aminocrotonic acids 
                                                        via Nenitzescu reaction.\n
                                                      2. 1,4 Benzoquinone serves as a dehydrogenation reagent.\n
                                                      3.It is also used as a dienophile in Diels Alder reactions. ");

    strcpy(molecule[70].name,"Formic acid");
    strcpy(molecule[70].representation,"HCOOH");
    strcpy(molecule[70].preparation,"Praparation of formic acid:-when oxalic acid is heated with glycerol then it forms formic acid
                                      \n HO 2C−CO 2H +C3H8O3 (on heating at 393k)  :- HCOOH + CO2 \n");
    strcpy(molecule[70].constituent_elements,"H,C,O");
    strcpy(molecule[70].uses,"use of formic acid:- 1.formic acid is used as a preservative and antibacterial agent in livestock feed.\n
                                                  2.it is widely used to preserve winter feed for cattle.");

    strcpy(molecule[71].name,"Acetic acid");
    strcpy(molecule[71].representation,"CH3-COOH");
    strcpy(molecule[71].preparation,"Praparation of acetic acid:-when Mmethyl nitrile reacts with H2O  in the presence of H2SO4 then it forms acetic acid 
                                       \n CH3CN + 3H2O + H2SO4 -> CH3COOH + NH4OH \n");
    strcpy(molecule[71].constituent_elements,"C,H,O");
    strcpy(molecule[71].uses,"use of acetic acid:- 1. Acetic acid is used in the preparation of metal acetates \n 
                                                    2.it is used as a coagulant for latex in industries \n
                                                    3.it is also used in medicine as well as local irritant");

    strcpy(molecule[72].name,"Butanoic acid ");
    strcpy(molecule[72].representation,"CH₃CH₂CH₂CO₂H");
    strcpy(molecule[72].preparation,"Praparation of butanoic acid :-butanol is converted into butanoic acid in the presence of K2Cr2O7 and
                                              H2SO4
                                              \n C₄H₉OH, + K2Cr2O7 + H2SO4 -> CH₃CH₂CH₂CO₂H ");
    strcpy(molecule[72].constituent_elements,"C,H,O");
    strcpy(molecule[72].uses,"use of butanoic acid :- 1.Butanoic acid can be used in various butyrate ester preparationc\n
                                                      2.. It can also be used to produce cellulose acetate butyrate (CAB),
                                                       which is helpful to use in a wide range of paints, tools, and coatings ");

    
    strcpy(molecule[73].name,"toluic acid ");
    strcpy(molecule[73].representation,"C8H8O2");
    strcpy(molecule[73].preparation,"Praparation of toluic acid:- p-tolunitrile is reacted with 10% of aq. solution of sodium hydroxide to form 
                                              toluic acid 
                                               \n 	C8H7N + NaOH -> C8H8O2 \n");
    strcpy(molecule[73].constituent_elements,"C,H,O");
    strcpy(molecule[73].uses,"use of toluic acid:-Toluic acid can be used for spices, m-cresol, pesticides fungicides phosphorylaminopropyl, vinyl chloride polymerization initiator MBPO,
                                                     color film reagent organic synthesis intermediates. \n ");

    strcpy(molecule[74].name,"Formaldehyde");
    strcpy(molecule[74].representation,"H-CHO");
    strcpy(molecule[74].preparation,"Praparation of formaledhyde:- nascent oxygen is paased through methyl alcohol to form formaldehyde 
                                      \n CH3OH + [O] -> CH2O \n");
    strcpy(molecule[74].constituent_elements,"C,H,O");
    strcpy(molecule[74].uses,"use of Formaldehyde :-1.it is used in making building materials and many household products \n
                                                    2. It is used in pressed-wood products, such as particleboard, plywood \n");

    strcpy(molecule[75].name,"Acetaldehyde ");
    strcpy(molecule[75].representation,"CH3CHO");
    strcpy(molecule[75].preparation,"Praparation of acetaldehyde :- Ethanol is oxidised to get acetaldehyde 
                                      \n CH ₃−CH ₂−OH + (O) ->  CH3CHO \n");
    strcpy(molecule[75].constituent_elements,"C,H,O");
    strcpy(molecule[75].uses,"use of acetaldehyde :- 1.It is used as a precursor to pyridine derivatives, crotonaldehyde, 
                                                      and pentaerythritol \n
                                                      2. it is Used in the manufacturing of resin.\n
                                                      3.It is used to produce polyvinyl acetate.\n 
                                                      4.It is used in the production of chemicals such as acetic acid.");

    strcpy(molecule[76].name,"Propinaldehyde");
    strcpy(molecule[76].representation,"CH3-CH2-CHO");
    strcpy(molecule[76].preparation,"Praparation of propinaldehyde :-when alcohols are passed over copper gauze ,they get dehydrogenated
                                              to from aldehydes 
                                              eg.propinaldehyde formed by alcohols
                                              \n CH3CH2CH2OH + Cu (573k) ->CH3-CH2-CHO + H2");
    strcpy(molecule[76].constituent_elements,"C,H,O");
    strcpy(molecule[76].uses,"use of propinaldehyde:-1.Propionaldehyde is used in the manufacture of plastics \n
                                                    2. also used in the synthesis of rubber chemicals \n
                                                    3. it is used as a disinfectant and preservative. ");

    strcpy(molecule[77].name,"Butyraldehyde");
    strcpy(molecule[77].representation,"CH3-CH2-CH2-CHO");
    strcpy(molecule[77].preparation,"Praparation of Butyraledhyde:-Butyraldehyde can be formed by dehydrogentaion of n-butanol with cu/mgo as a
                                                                  catalyst at 275-375 celsius
                                              \n C₄H₉OH + mgo/cu -> CH3-CH2-CH2-CHO \n ");
    strcpy(molecule[77].constituent_elements,"C,H,O");
    strcpy(molecule[77].uses,"use of Butyraldehyde:-1.Butyraldehye is used mainly as an intermediate in the production of synthetic resins \n
                                                    2.It is also an intermediate for the manufacture of pharmaceuticals, crop protection products,
                                                     pesticides, antioxidants, tanning auxiliaries, and perfumes.");

    strcpy(molecule[78].name,"Acerolien");
    strcpy(molecule[78].representation,"CH2=CHCHO ");
    strcpy(molecule[78].preparation,"Praparation of Acerolien:-Acrolein is prepared industrially by oxidation of propene. The process uses air as the 
                                      source of oxygen and requires metal oxides as heterogeneous catalysts
                                      \n CH2CHCH3 + O2 → CH2CHCHO + H2O \n ");
    strcpy(molecule[78].constituent_elements,"C,H,O");
    strcpy(molecule[78].uses,"use of acerolien:- 1.Acrolein is mostly used to make acrylic acid \n
                                                2. It is also used to control plant and algae growth in irrigation canals \n
                                                3.Acrolein kills or controls microorganisms and bacteria in oil wells, liquid hydrocarbon fuels,
                                                 cooling-water towers and water treatment ponds. In papermaking, acrolein is used to control slime.");
      
    strcpy(molecule[79].name,"Benzaldehyde");
    strcpy(molecule[79].representation,"(C6H5CHO) ");
    strcpy(molecule[79].preparation,"Praparation of benzaldehyde:-When benzene is treated with vapours of carbon monoxide and hydrogen chloride in the presence 
                                                        of a catalyst mixture of AlCl3 and CuCl under high pressure benzaldehyde is obtained.
                                              \n  C₆H₆ + CO + HCl + AlCl3 -> (C6H5CHO) + HCl \n ");
    strcpy(molecule[79].constituent_elements,"C,H,O");
    strcpy(molecule[79].uses,"use of Benzaldehyde :-1.Benzaldehyde is also used in the production of dyes ,soaps ans perfumes \n
                                                    2.It is also used in cakes and baked goods as almond extract \n
                                                    3.Benzaldehyde is also used in additives like antibacterial and antifungal preservatives.");

    strcpy(molecule[80].name,"Dimethyl Ketone ");
    strcpy(molecule[80].representation,"CH3-CO-CH3");
    strcpy(molecule[80].preparation,"Praparation of Dimethyl ketone(acetone)):- In the laboratory acetone is obtained by dry distillation of calcium acetate.
                                            \n Ca(C₂H₃O₂)₂ + (Dry distillation) -> CH3-CO-CH3  + CaCO3");
    strcpy(molecule[80].constituent_elements,"C,H,O");
    strcpy(molecule[80].uses,"use of dimethyl ketone:-1.dimethyl ketone  primary applications are based on its ability to dissolve such a wide array of
                                                       organic substances \n 
                                                       2. It is used as a solvent for paints, varnishes, lacquers, inks, glues, rubber cements, fats, oils,
                                                       waxes, and various types of rubber and plastics.");

    strcpy(molecule[81].name,"Ehtyl methyl ketone");
    strcpy(molecule[81].representation,"CH₃CCH₂CH₃");
    strcpy(molecule[81].preparation,"Praparation of Ethyl methyl ketone:- butyl alcohol is treated with cocn H2SO4 and Na2Cr2O7 to form ethyl
                                                                          methyl ketone
                                                        \n C₄H₉OH + H2SO4 + Na2Cr2O7 -> CH₃CCH₂CH₃ ");
    strcpy(molecule[81].constituent_elements,"C,H");
    strcpy(molecule[81  ].uses,"use of ehtyl methyl ketone:- 1.MEK is a liquid solvent used in surface coatings, adhesives, printing inks, chemical intermediates,
                                                             magnetic tapes and lube oil dewaxing agents\n 
                                                          2. MEK also is used as an extraction medium for fats, oils, waxes and resins.");

    strcpy(molecule[82].name"Monochloro acetic acid");
    strcpy(molecule[82].representation,"CH2ClCOOH");
    strcpy(molecule[82].preparation,"Monochloro acetic acid is prepared by reacting acetic acid with chlorine in the presence of red
                                                phosphrus
                                                 \n CH3COOH + Cl2(red P) -> CH2ClCOOH + HCl\n ");
    strcpy(molecule[82].constituent_elements,"C,H,O,Cl");
    strcpy(molecule[82].uses,"use of monochloro acetic acid:-1.Monochloroacetic acid (MCAA) as a raw material is mainly used in the production of carboxymethylcellulose, 
                                                              crop protection chemicals, thioglycol acid \n
                                                              2. MCAA is also used as a component in paint removal baths.");

    strcpy(molecule[83].name,"Dichloro acetic acid");
    strcpy(molecule[83].representation,"CHCl2COOH");
    strcpy(molecule[83].preparation,"Praparation of Dichloro acetic acid :- Dichloro acetic acid is prepared by reacting Chloroacetic acid
                                                                            with chlorine in the presence of red phosphrus
                                                                            \n CH2ClCOOH + Cl2 (red p) -> CHCl2COOH + HCl \n");
    strcpy(molecule[83].constituent_elements,"C,H,O,Cl");
    strcpy(molecule[83].uses,"use of dichloro acetic acid:-Dichloroacetic acid is used as a chemical intermediate in the synthesis of organic materials, as an ingredient in pharmaceuticals and medicines,
                                                             as a topical astringent, and as a fungicide ");

    strcpy(molecule[84].name,"Trichloro acetic acid");
    strcpy(molecule[84].representation,"CCl3COOH");
    strcpy(molecule[84].preparation,"Praparation of Trichloro acid:-Trichloro acetic acid is prepared by Dichloroacetic acid with chlorine 
                                                                      in the presence of red phosphrus
                                                                  \nCHCl2COOH + Cl2 (red p) -> CClCOOH + HCl \n" );
    strcpy(molecule[84].constituent_elements,"C,H,O,Cl");
    strcpy(molecule[84].uses,"use of Tricholro acetic acid:-1.It is widely used in biochemistry for the precipitation of macromolecules, such as proteins, DNA, and RNA.\n
                                                            2.TCA is used in cosmetic treatments (such as chemical peels and tattoo removal) and as topical medication for chemoablation of warts, 
                                                              including genital warts. It can kill normal cells as well.");

    strcpy(molecule[85].name,"Methyl amine");
    strcpy(molecule[85].representation,"CH3NH2");
    strcpy(molecule[85].preparation,"Praparation of Methyl amine:-aceta amide is reacted with Br2 and 4KOH to form methyl amine 
                                                        \n  CH3CONH2   + 2KBr +4KOH  ->CH3NH2+ 2KBr + K2CO3 + 2H2O \n");
    strcpy(molecule[85].constituent_elements,"C,N,H");
    strcpy(molecule[85].uses,"use of Methyl amine:-1.Used for making pharmaceuticals, insecticides, paint removers, surfactants, rubber chemicals \n
                                                    2. Methylamines are important compounds, which can be utilized in a variety of applications including agricultural chemicals,
                                                     paint industries, water treatment ");

    strcpy(molecule[86].name,"Aniline ");
    strcpy(molecule[86].representation,"C₆H₅NH₂");
    strcpy(molecule[86].preparation,"Praparation of Aniline:-Benzamide reacts with with Br2 and 4KOH to form aniline
                                              \n C₆H₅CNH₂ + 2KBr +4KOH  ->C6H5NH2 + 2KBr + K2CO3 + 2H2O \n ");
    strcpy(molecule[86].constituent_elements,"C,H,N");
    strcpy(molecule[86].uses,"use of aniline:-1.Anilines have their uses in the rubber industry to process the rubber chemicals and products like car tyres
                                                          , gloves, balloons, etc. \n
                                                          2.. It is also used as a dyeing agent for the manufacturing of clothes like jeans, etc. \n
                                                          3. It is used for the production of drugs, for example, paracetamol, acetaminophen, and Tylenol. ");

    strcpy(molecule[87].name,"Acetamide");
    strcpy(molecule[87].representation,"CH3CONH2");
    strcpy(molecule[87].preparation,"Praparation of Acetamide:-acetalehyde reacts with K2Cr2O7 and H2SO4 in the presence of nacent oxygen then 
                                                                it gets converted into acetic acid and then acetic acid in the presence of NH3
                                                                 acetamide is formed 
                                                                 \nCH3CHO + K2Cr2O7 + H2SO4 + [O] -> CH3COOH + 2NH3 -> CH3CONH2");
    strcpy(molecule[87].constituent_elements,"C,H,O,N");
    strcpy(molecule[87].uses,"use of Acetamide :-1.Acetamide is used as a plasticizer and an industrial solvent.  \n
                                                2.. Molten acetamide is good solvent with a broad range of applicability \n
                                                3.. It is used as a solvent and stabilizer, accelerator in the estimation of bilirubin");

    strcpy(molecule[88].name,"saccharic acid");
    strcpy(molecule[88].representation,"C₆H₁₀O₈");
    strcpy(molecule[88].preparation,"Praparation of Saccharic acid:-Glucose reacted with nascent oxygen to form a saccharic acid
                                          \n C₆H₁₂O₆ + 3[O] -> C₆H₁₀O₈  + H2o ");
    strcpy(molecule[88].constituent_elements,"C,H,O");
    strcpy(molecule[88].uses,"use of Saccharic acid :-saccharic acid's only significant commercial value is the use of its sodium salt in dishwasher detergents.
                                                       The acid acts as a chelating agent that ties up the hard-water calcium and magnesium ions to make the detergents
                                                        more efficient");

    strcpy(molecule[89].name,"Benzoyl Chloride");
    strcpy(molecule[89].representation,"C₇H₅ClO");
    strcpy(molecule[89].preparation,"Praparation of Benzoyl Chloride :- phenol on distillation with Zn converted into benzene then benzene 
                                                                        reacts with COCl2 and anhydrus AlCl3 then benzoyl chloride formed 
                                                \n C₆H₅OH + Zn (distillation ) -> C₆H₅ + COCl2 + AlCl3 -> C₇H₅ClO ");
    strcpy(molecule[89].constituent_elements,"C,H,O,Cl");
    strcpy(molecule[89].uses,"use of benzoyl chloride :-1.Benzoyl chloride is an important intermediate for preparing dyes, perfumes, organic peroxides, 
                                                          resins and drugs \n
                                                          2. It is also used in photography and artificial tannin production, which was formerly used as an irritant gas
                                                           in chemical warfare.");

    strcpy(molecule[90].name,"N-methyldiethanolamine");
    strcpy(molecule[90].representation,"CH₃N(C₂H₄OH)₂");
    strcpy(molecule[90].preparation,"Praparation of  N-methyldiethanolamine:-N-methyldiethanolamine is produced by the reaction between ethylene oxide and methylamine.
                                                   \n CH₃NH₂ + C ₂H ₄O -> CH₃N(C₂H₄OH)₂ ");
    strcpy(molecule[90].constituent_elements,"C,H,O,N");
    strcpy(molecule[90].uses,"use of  -methyldiethanolamine:-1.N-methyldiethanolamine is used as an intermediate in the synthesis of numerous products \n
                                                            2.. Its unique chemistry has resulted in its use in diverse areas, including coatings, textile lubricants, polishes,
                                                                detergents, pesticides, personal-care products, pharmaceuticals, urethane catalysts, and water-treatment chemicals \n
                                                            3.It is also used in absorption of acidic gases, catalyst for polyurethane foams, pH control agent. ");

    strcpy(molecule[91].name,"Cyclohexylamine");
    strcpy(molecule[91].representation,"");
    strcpy(molecule[91].preparation,"Praparation of Cyclohexylamine:-Cyclohexylamine is obtained, by hydrogenating aniline in hydrochloric-acetic acid in the presence of 
                                                                        colloidal platinum.
                                                \n C₆H₅NH₂ +  H2 + Pt -> C6H13N");
    strcpy(molecule[91].constituent_elements,"C,H,N");
    strcpy(molecule[91].uses,"use of Cyclohexylamine:- 1.Cyclohexylamine is used as an intermediate in synthesis of other organic compounds.\n
                                                        2.. It is the precursor to sulfenamide-based reagents used as accelerators for vulcanization \n
                                                        3. It is used as a corrosion inhibitor for boiler feed water, and to make other chemicals and insecticides. determine potentially hazardous exposures.\n");

    strcpy(molecule[92].name,"Cyclohexene");
    strcpy(molecule[92].representation,"C6H10 ");
    strcpy(molecule[92].preparation,"Praparation of cyclohexene:-cyclohexene will be prepared by dehydration of an alcohol cyclohexanol using an acid catalyst such as phosphoric acid
                                            \n  HOCH(CH₂)₅ + H3PO4 -> C6H10 + H2O ");
    strcpy(molecule[92].constituent_elements,"C,H");
    strcpy(molecule[92].uses,"use of Cyclohexene:-1.Cyclohexene is used in a diverse range of chemical synthesis \n
                                                  2.. It is a building block that is used in Pharma \n
                                                  3. It is used in oil extraction, to make other chemicals, and as a catalyst solvent.");

    strcpy(molecule[93].name," Benzylamine");
    strcpy(molecule[93].representation," C6H5CH2");
    strcpy(molecule[93].preparation," Preparation of Benzylamine:-Benzylamine is prepared by reacting benzyl chloride with hexamethylenetetramine. If ammonia itself is used, the mixture of primary, secondary, and tertiary amines is formed,
                                                             and the yield of benzylamine is poor.
                                            \n  C₆H₅CH₂Cl + (CH₂)₆N₄ ->    C6H5CH2 \n ");
    strcpy(molecule[93].constituent_elements,"C,H,N");
    strcpy(molecule[93].uses,"use of Benzylamine:- Benzylamine is mainly used in chemical synthesis, and for production of pesticides, polymer auxiliaries, pharmaceutical substances. Corrosive. Contact with skin causes burns. 
                                                    Vapours highly irritating to mucous membranes.");

    strcpy(molecule[94].name,"Trimethylamine");
    strcpy(molecule[94].representation,"(CH3)3N");
    strcpy(molecule[94].preparation,"Praparation of Trimethylamine:- Trimethylamine is prepared by the reaction of ammonia and methanol employing a catalyst
                                                        \n 3 CH3OH + NH3 → (CH3)3N + 3 H2O. \n");
    strcpy(molecule[94].constituent_elements,"C,H,N");
    strcpy(molecule[94].uses,"use of Trimethylamine:-1.Trimethylamine is used in the synthesis of choline, tetramethylammonium hydroxide, plant growth regulators, herbicides, strongly basic anion exchange resins, dye leveling agents and a number of basic
                                                     dyes. Gas sensors to test for fish freshness detect trimethylamine. \n
                                                     2. It is used as a warning (smell) agent in natural gas, as an insect attractant, and in chemical manufacturing.");

    strcpy(molecule[95].name,"Tribromoaniline");
    strcpy(molecule[95].representation," C6H4Br3N");
    strcpy(molecule[95].preparation,"Praparation of Tribromoaniline:- Aniline undergoes nucleophilic substitution with bromine to form tribromoaniline
                                              \n C6H5NH2 + 3Br ->  C6H4Br3N ");
    strcpy(molecule[95].constituent_elements,"C,H,Br,O");
    strcpy(molecule[95].uses,"use of Tribromoaniline:-A trihalogen substituted aniline with potential inhibitory effect on human cytochrome");

    strcpy(molecule[96].name,"Glycin");
    strcpy(molecule[96].representation,"HO2CC6H4NHCH2CO2H");
    strcpy(molecule[96].preparation,"Praparation of Glycin:-2-Chlorobenzoic acid reacts with H2NCH2COOH to form glycin
                                            \n ClC₆H₄CO₂H + H2NCH2COOH -> HO2CC6H4NHCH2CO2H");
    strcpy(molecule[96].constituent_elements,"C,H,O,N");
    strcpy(molecule[96].uses,"use of glycin:- 1.Glycine is used for treating schizophrenia, stroke, benign prostatic hyperplasia (BPH), 
                                                  and some rare inherited metabolic disorders \n
                                              2.It is also used to protect kidneys from the harmful side effects of certain drugs used after organ transplantation 
                                              as well as the liver from harmful effects of alcohol.");

    strcpy(molecule[97].name,"Alanine");
    strcpy(molecule[97].representation,"C₆H₅NH₂");
    strcpy(molecule[97].preparation,"Praparation of Alanine:-When 2-bromopropionic acid isreact with ammonium carbonate and ammonium hydroxide then it forms
                                                              alanine
                                                      \n  CH3CHBrCOOH + (NH4)2CO3 + NH4OH -> C₆H₅NH₂");
    strcpy(molecule[97].constituent_elements,"C,H,N");
    strcpy(molecule[97].uses,"use of alanine:-Aniline is a type of organic base which is used in the making of several dyes, explosives, plastics, drugs, and rubber,
                                                and photographic chemicals.");

    strcpy(molecule[98].name,"4-iodotoluene");
    strcpy(molecule[98].representation,"C7H7I");
    strcpy(molecule[98].preparation,"Praparation of 4-iodotoluene:-Benzeneamine reacts with hydrochloric acid and sodium nitrite and potassium iodide to 
                                                                to form 4-iodotoluene 
                                                      \n C₆H₅NH₂ + HCl + NANO2 + KI ->  C7H7I \n");
    strcpy(molecule[98].constituent_elements,"C,H,I");
    strcpy(molecule[98].uses,"use of 4--iodotoluene:-4-Iodotoluene is used in wide range of medicals industrial applications as well as in pharmaceutical intermediates,\n
                                                             polarizing films for Liquid Crystal Display (LCD) chemicals.");

    strcpy(molecule[99].name,"p-nitrophenol");
    strcpy(molecule[99].representation,"C6H5NO3");
    strcpy(molecule[99].preparation,"Praparation of p-nitrophenol:-When phenol is treated with dil nitric acid at 200C, a mixture of ortho (40%) and para (10%) nitro phenol is obtained.
                                                                    solution 
                                                      \n C6H5OH + NaNO2 + H2SO4 -> C6H5NO2 + HNO3 -> C6H5NO3 \n");
    strcpy(molecule[99].constituent_elements,"C,H,N,O");
    strcpy(molecule[99].uses,"use of p-nitrophenol:-p-Nitrophenol is used to manufacture drugs, fungicides, insecticides, and dyes and to darken leather.\n");

    strcpy(molecule[100].name,"Salicyclic acid");
    strcpy(molecule[100].representation,"HOC₆H₄CO₂H");
    strcpy(molecule[100].preparation,"Praparation of salicyclic acid :- Phenol reacts with carbontetrachloride and sodium hydroxide to form
                                                                         salicyclic acid
                                                                         \n C6H5OH. + CCl4 +4NaOH -> C₇H₆O₃ + 2H2O + 4NaCl  \n");
    strcpy(molecule[100].constituent_elements,"C,H,O");
    strcpy(molecule[100].uses,"use of Salicyclic acid :-1.Salicylic acid is used as a medicine to help remove the outer layer of the skin.\n
                                                        2.it is used to treat warts, calluses, psoriasis, dandruff, acne, ringworm, and ichthyosis.\n
                                                        3.Salicylic acid improves the skin's appearance, reduces blemishes and helps to prevent blackheads and breakouts.");













