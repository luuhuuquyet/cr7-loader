/*
 * Copyright (c) 2015-2016, Renesas Electronics Corporation
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *   - Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimer.
 *
 *   - Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *
 *   - Neither the name of Renesas nor the names of its contributors may be
 *     used to endorse or promote products derived from this software without
 *     specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef BOOT_INIT_DRAM_REGDEF_V3M_H_
#define BOOT_INIT_DRAM_REGDEF_V3M_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define				BIT0						0x00000001U
#define				BIT30						0x40000000U

/* DBSC registers */

// modified , last 2016.12.08 

#define				DBSC_V3M_DBSYSCONF0         0xE6790000U
#define				DBSC_V3M_DBSYSCONF1         0xE6790004U
#define				DBSC_V3M_DBPHYCONF0         0xE6790010U
#define				DBSC_V3M_DBKIND             0xE6790020U
#define				DBSC_V3M_DBMEMCONF00        0xE6790030U
#define				DBSC_V3M_DBMEMCONF01        0xE6790034U
#define				DBSC_V3M_DBMEMCONF02        0xE6790038U
#define				DBSC_V3M_DBMEMCONF03        0xE679003CU
#define				DBSC_V3M_DBMEMCONF10        0xE6790040U
#define				DBSC_V3M_DBMEMCONF11        0xE6790044U
#define				DBSC_V3M_DBMEMCONF12        0xE6790048U
#define				DBSC_V3M_DBMEMCONF13        0xE679004CU
#define				DBSC_V3M_DBMEMCONF20        0xE6790050U
#define				DBSC_V3M_DBMEMCONF21        0xE6790054U
#define				DBSC_V3M_DBMEMCONF22        0xE6790058U
#define				DBSC_V3M_DBMEMCONF23        0xE679005CU
#define				DBSC_V3M_DBMEMCONF30        0xE6790060U
#define				DBSC_V3M_DBMEMCONF31        0xE6790064U
#define				DBSC_V3M_DBMEMCONF32        0xE6790068U
#define				DBSC_V3M_DBMEMCONF33        0xE679006CU
#define				DBSC_V3M_DBSYSCNT0          0xE6790100U
#define				DBSC_V3M_DBSVCR1            0xE6790104U
#define				DBSC_V3M_DBSTATE0           0xE6790108U
#define				DBSC_V3M_DBSTATE1           0xE679010CU
#define				DBSC_V3M_DBINTEN            0xE6790180U
#define				DBSC_V3M_DBINTSTAT0         0xE6790184U
#define				DBSC_V3M_DBACEN             0xE6790200U
#define				DBSC_V3M_DBRFEN             0xE6790204U
#define				DBSC_V3M_DBCMD              0xE6790208U
#define				DBSC_V3M_DBWAIT             0xE6790210U
#define				DBSC_V3M_DBSYSCTRL0         0xE6790280U
#define				DBSC_V3M_DBTR0              0xE6790300U
#define				DBSC_V3M_DBTR1              0xE6790304U
#define				DBSC_V3M_DBTR2              0xE6790308U
#define				DBSC_V3M_DBTR3              0xE679030CU
#define				DBSC_V3M_DBTR4              0xE6790310U
#define				DBSC_V3M_DBTR5              0xE6790314U
#define				DBSC_V3M_DBTR6              0xE6790318U
#define				DBSC_V3M_DBTR7              0xE679031CU
#define				DBSC_V3M_DBTR8              0xE6790320U
#define				DBSC_V3M_DBTR9              0xE6790324U
#define				DBSC_V3M_DBTR10             0xE6790328U
#define				DBSC_V3M_DBTR11             0xE679032CU
#define				DBSC_V3M_DBTR12             0xE6790330U
#define				DBSC_V3M_DBTR13             0xE6790334U
#define				DBSC_V3M_DBTR14             0xE6790338U
#define				DBSC_V3M_DBTR15             0xE679033CU
#define				DBSC_V3M_DBTR16             0xE6790340U
#define				DBSC_V3M_DBTR17             0xE6790344U
#define				DBSC_V3M_DBTR18             0xE6790348U
#define				DBSC_V3M_DBTR19             0xE679034CU
#define				DBSC_V3M_DBTR20             0xE6790350U
#define				DBSC_V3M_DBTR21             0xE6790354U
#define				DBSC_V3M_DBTR22             0xE6790358U
#define				DBSC_V3M_DBTR23             0xE679035CU
#define				DBSC_V3M_DBTR24             0xE6790360U
#define				DBSC_V3M_DBTR25             0xE6790364U
#define				DBSC_V3M_DBBL               0xE6790400U
#define				DBSC_V3M_DBRFCNF1           0xE6790414U
#define				DBSC_V3M_DBRFCNF2           0xE6790418U
#define				DBSC_V3M_DBTSPCNF           0xE6790420U
#define				DBSC_V3M_DBCALCNF           0xE6790424U
#define				DBSC_V3M_DBRNK2             0xE6790438U
#define				DBSC_V3M_DBRNK3             0xE679043CU
#define				DBSC_V3M_DBRNK4             0xE6790440U
#define				DBSC_V3M_DBRNK5             0xE6790444U
#define				DBSC_V3M_DBPDNCNF           0xE6790450U
#define				DBSC_V3M_DBODT0             0xE6790460U
#define				DBSC_V3M_DBODT1             0xE6790464U
#define				DBSC_V3M_DBODT2             0xE6790468U
#define				DBSC_V3M_DBODT3             0xE679046CU
#define				DBSC_V3M_DBODT4             0xE6790470U
#define				DBSC_V3M_DBODT5             0xE6790474U
#define				DBSC_V3M_DBODT6             0xE6790478U
#define				DBSC_V3M_DBODT7             0xE679047CU
#define				DBSC_V3M_DBADJ0             0xE6790500U
#define				DBSC_V3M_DBDBICNT           0xE6790518U
#define				DBSC_V3M_DBDFIPMSTRCNF      0xE6790520U
#define				DBSC_V3M_DBDFIPMSTRSTAT     0xE6790524U
#define				DBSC_V3M_DBDFILPCNF         0xE6790528U
#define				DBSC_V3M_DBDFICUPDCNF       0xE679052CU
#define				DBSC_V3M_DBDFISTAT0         0xE6790600U
#define				DBSC_V3M_DBDFICNT0          0xE6790604U
#define				DBSC_V3M_DBPDCNT00          0xE6790610U
#define				DBSC_V3M_DBPDCNT01          0xE6790614U
#define				DBSC_V3M_DBPDCNT02          0xE6790618U
#define				DBSC_V3M_DBPDCNT03          0xE679061CU
#define				DBSC_V3M_DBPDLK0            0xE6790620U
#define				DBSC_V3M_DBPDRGA0           0xE6790624U
#define				DBSC_V3M_DBPDRGD0           0xE6790628U
#define				DBSC_V3M_DBPDSTAT00         0xE6790630U
#define				DBSC_V3M_DBDFISTAT1         0xE6790640U
#define				DBSC_V3M_DBDFICNT1          0xE6790644U
#define				DBSC_V3M_DBPDCNT10          0xE6790650U
#define				DBSC_V3M_DBPDCNT11          0xE6790654U
#define				DBSC_V3M_DBPDCNT12          0xE6790658U
#define				DBSC_V3M_DBPDCNT13          0xE679065CU
#define				DBSC_V3M_DBPDLK1            0xE6790660U
#define				DBSC_V3M_DBPDRGA1           0xE6790664U
#define				DBSC_V3M_DBPDRGD1           0xE6790668U
#define				DBSC_V3M_DBPDSTAT10         0xE6790670U
#define				DBSC_V3M_DBDFISTAT2         0xE6790680U
#define				DBSC_V3M_DBDFICNT2          0xE6790684U
#define				DBSC_V3M_DBPDCNT20          0xE6790690U
#define				DBSC_V3M_DBPDCNT21          0xE6790694U
#define				DBSC_V3M_DBPDCNT22          0xE6790698U
#define				DBSC_V3M_DBPDCNT23          0xE679069CU
#define				DBSC_V3M_DBPDLK2            0xE67906A0U
#define				DBSC_V3M_DBPDRGA2           0xE67906A4U
#define				DBSC_V3M_DBPDRGD2           0xE67906A8U
#define				DBSC_V3M_DBPDSTAT20         0xE67906B0U
#define				DBSC_V3M_DBDFISTAT3         0xE67906C0U
#define				DBSC_V3M_DBDFICNT3          0xE67906C4U
#define				DBSC_V3M_DBPDCNT30          0xE67906D0U
#define				DBSC_V3M_DBPDCNT31          0xE67906D4U
#define				DBSC_V3M_DBPDCNT32          0xE67906D8U
#define				DBSC_V3M_DBPDCNT33          0xE67906DCU
#define				DBSC_V3M_DBPDLK3            0xE67906E0U
#define				DBSC_V3M_DBPDRGA3           0xE67906E4U
#define				DBSC_V3M_DBPDRGD3           0xE67906E8U
#define				DBSC_V3M_DBPDSTAT30         0xE67906F0U
#define				DBSC_V3M_DBBUS0CNF0         0xE6790800U
#define				DBSC_V3M_DBBUS0CNF1         0xE6790804U
#define				DBSC_V3M_DBCAM0CNF1         0xE6790904U
#define				DBSC_V3M_DBCAM0CNF2         0xE6790908U
#define				DBSC_V3M_DBCAM0CNF3         0xE679090CU
#define				DBSC_V3M_DBCAM0CTRL0        0xE6790940U
#define				DBSC_V3M_DBCAM0STAT0        0xE6790980U
#define				DBSC_V3M_DBCAM1STAT0        0xE6790990U
#define				DBSC_V3M_DBBCAMSWAP         0xE67909F0U
#define				DBSC_V3M_DBBCAMDIS          0xE67909FCU
#define				DBSC_V3M_DBSCHCNT0          0xE6791000U
#define				DBSC_V3M_DBSCHCNT1          0xE6791004U
#define				DBSC_V3M_DBSCHSZ0           0xE6791010U
#define				DBSC_V3M_DBSCHRW0           0xE6791020U
#define				DBSC_V3M_DBSCHRW1           0xE6791024U
#define				DBSC_V3M_DBSCHQOS00         0xE6791030U
#define				DBSC_V3M_DBSCHQOS01         0xE6791034U
#define				DBSC_V3M_DBSCHQOS02         0xE6791038U
#define				DBSC_V3M_DBSCHQOS03         0xE679103CU
#define				DBSC_V3M_DBSCHQOS10         0xE6791040U
#define				DBSC_V3M_DBSCHQOS11         0xE6791044U
#define				DBSC_V3M_DBSCHQOS12         0xE6791048U
#define				DBSC_V3M_DBSCHQOS13         0xE679104CU
#define				DBSC_V3M_DBSCHQOS20         0xE6791050U
#define				DBSC_V3M_DBSCHQOS21         0xE6791054U
#define				DBSC_V3M_DBSCHQOS22         0xE6791058U
#define				DBSC_V3M_DBSCHQOS23         0xE679105CU
#define				DBSC_V3M_DBSCHQOS30         0xE6791060U
#define				DBSC_V3M_DBSCHQOS31         0xE6791064U
#define				DBSC_V3M_DBSCHQOS32         0xE6791068U
#define				DBSC_V3M_DBSCHQOS33         0xE679106CU
#define				DBSC_V3M_DBSCHQOS40         0xE6791070U
#define				DBSC_V3M_DBSCHQOS41         0xE6791074U
#define				DBSC_V3M_DBSCHQOS42         0xE6791078U
#define				DBSC_V3M_DBSCHQOS43         0xE679107CU
#define				DBSC_V3M_DBSCHQOS50         0xE6791080U
#define				DBSC_V3M_DBSCHQOS51         0xE6791084U
#define				DBSC_V3M_DBSCHQOS52         0xE6791088U
#define				DBSC_V3M_DBSCHQOS53         0xE679108CU
#define				DBSC_V3M_DBSCHQOS60         0xE6791090U
#define				DBSC_V3M_DBSCHQOS61         0xE6791094U
#define				DBSC_V3M_DBSCHQOS62         0xE6791098U
#define				DBSC_V3M_DBSCHQOS63         0xE679109CU
#define				DBSC_V3M_DBSCHQOS70         0xE67910A0U
#define				DBSC_V3M_DBSCHQOS71         0xE67910A4U
#define				DBSC_V3M_DBSCHQOS72         0xE67910A8U
#define				DBSC_V3M_DBSCHQOS73         0xE67910ACU
#define				DBSC_V3M_DBSCHQOS80         0xE67910B0U
#define				DBSC_V3M_DBSCHQOS81         0xE67910B4U
#define				DBSC_V3M_DBSCHQOS82         0xE67910B8U
#define				DBSC_V3M_DBSCHQOS83         0xE67910BCU
#define				DBSC_V3M_DBSCHQOS90         0xE67910C0U
#define				DBSC_V3M_DBSCHQOS91         0xE67910C4U
#define				DBSC_V3M_DBSCHQOS92         0xE67910C8U
#define				DBSC_V3M_DBSCHQOS93         0xE67910CCU
#define				DBSC_V3M_DBSCHQOS100        0xE67910D0U
#define				DBSC_V3M_DBSCHQOS101        0xE67910D4U
#define				DBSC_V3M_DBSCHQOS102        0xE67910D8U
#define				DBSC_V3M_DBSCHQOS103        0xE67910DCU
#define				DBSC_V3M_DBSCHQOS110        0xE67910E0U
#define				DBSC_V3M_DBSCHQOS111        0xE67910E4U
#define				DBSC_V3M_DBSCHQOS112        0xE67910E8U
#define				DBSC_V3M_DBSCHQOS113        0xE67910ECU
#define				DBSC_V3M_DBSCHQOS120        0xE67910F0U
#define				DBSC_V3M_DBSCHQOS121        0xE67910F4U
#define				DBSC_V3M_DBSCHQOS122        0xE67910F8U
#define				DBSC_V3M_DBSCHQOS123        0xE67910FCU
#define				DBSC_V3M_DBSCHQOS130        0xE6791100U
#define				DBSC_V3M_DBSCHQOS131        0xE6791104U
#define				DBSC_V3M_DBSCHQOS132        0xE6791108U
#define				DBSC_V3M_DBSCHQOS133        0xE679110CU
#define				DBSC_V3M_DBSCHQOS140        0xE6791110U
#define				DBSC_V3M_DBSCHQOS141        0xE6791114U
#define				DBSC_V3M_DBSCHQOS142        0xE6791118U
#define				DBSC_V3M_DBSCHQOS143        0xE679111CU
#define				DBSC_V3M_DBSCHQOS150        0xE6791120U
#define				DBSC_V3M_DBSCHQOS151        0xE6791124U
#define				DBSC_V3M_DBSCHQOS152        0xE6791128U
#define				DBSC_V3M_DBSCHQOS153        0xE679112CU
#define				DBSC_V3M_SCFCTST0           0xE6791700U
#define				DBSC_V3M_SCFCTST1           0xE6791708U
#define				DBSC_V3M_SCFCTST2           0xE679170CU
#define				DBSC_V3M_DBMRRDR0           0xE6791800U
#define				DBSC_V3M_DBMRRDR1           0xE6791804U
#define				DBSC_V3M_DBMRRDR2           0xE6791808U
#define				DBSC_V3M_DBMRRDR3           0xE679180CU
#define				DBSC_V3M_DBMRRDR4           0xE6791810U
#define				DBSC_V3M_DBMRRDR5           0xE6791814U
#define				DBSC_V3M_DBMRRDR6           0xE6791818U
#define				DBSC_V3M_DBMRRDR7           0xE679181CU
#define				DBSC_V3M_DBDTMP0            0xE6791820U
#define				DBSC_V3M_DBDTMP1            0xE6791824U
#define				DBSC_V3M_DBDTMP2            0xE6791828U
#define				DBSC_V3M_DBDTMP3            0xE679182CU
#define				DBSC_V3M_DBDTMP4            0xE6791830U
#define				DBSC_V3M_DBDTMP5            0xE6791834U
#define				DBSC_V3M_DBDTMP6            0xE6791838U
#define				DBSC_V3M_DBDTMP7            0xE679183CU
#define				DBSC_V3M_DBDQSOSC00         0xE6791840U
#define				DBSC_V3M_DBDQSOSC01         0xE6791844U
#define				DBSC_V3M_DBDQSOSC10         0xE6791848U
#define				DBSC_V3M_DBDQSOSC11         0xE679184CU
#define				DBSC_V3M_DBDQSOSC20         0xE6791850U
#define				DBSC_V3M_DBDQSOSC21         0xE6791854U
#define				DBSC_V3M_DBDQSOSC30         0xE6791858U
#define				DBSC_V3M_DBDQSOSC31         0xE679185CU
#define				DBSC_V3M_DBDQSOSC40         0xE6791860U
#define				DBSC_V3M_DBDQSOSC41         0xE6791864U
#define				DBSC_V3M_DBDQSOSC50         0xE6791868U
#define				DBSC_V3M_DBDQSOSC51         0xE679186CU
#define				DBSC_V3M_DBDQSOSC60         0xE6791870U
#define				DBSC_V3M_DBDQSOSC61         0xE6791874U
#define				DBSC_V3M_DBDQSOSC70         0xE6791878U
#define				DBSC_V3M_DBDQSOSC71         0xE679187CU
#define				DBSC_V3M_DBOSCTHH00         0xE6791880U
#define				DBSC_V3M_DBOSCTHH01         0xE6791884U
#define				DBSC_V3M_DBOSCTHH10         0xE6791888U
#define				DBSC_V3M_DBOSCTHH11         0xE679188CU
#define				DBSC_V3M_DBOSCTHH20         0xE6791890U
#define				DBSC_V3M_DBOSCTHH21         0xE6791894U
#define				DBSC_V3M_DBOSCTHH30         0xE6791898U
#define				DBSC_V3M_DBOSCTHH31         0xE679189CU
#define				DBSC_V3M_DBOSCTHH40         0xE67918A0U
#define				DBSC_V3M_DBOSCTHH41         0xE67918A4U
#define				DBSC_V3M_DBOSCTHH50         0xE67918A8U
#define				DBSC_V3M_DBOSCTHH51         0xE67918ACU
#define				DBSC_V3M_DBOSCTHH60         0xE67918B0U
#define				DBSC_V3M_DBOSCTHH61         0xE67918B4U
#define				DBSC_V3M_DBOSCTHH70         0xE67918B8U
#define				DBSC_V3M_DBOSCTHH71         0xE67918BCU
#define				DBSC_V3M_DBOSCTHL00         0xE67918C0U
#define				DBSC_V3M_DBOSCTHL01         0xE67918C4U
#define				DBSC_V3M_DBOSCTHL10         0xE67918C8U
#define				DBSC_V3M_DBOSCTHL11         0xE67918CCU
#define				DBSC_V3M_DBOSCTHL20         0xE67918D0U
#define				DBSC_V3M_DBOSCTHL21         0xE67918D4U
#define				DBSC_V3M_DBOSCTHL30         0xE67918D8U
#define				DBSC_V3M_DBOSCTHL31         0xE67918DCU
#define				DBSC_V3M_DBOSCTHL40         0xE67918E0U
#define				DBSC_V3M_DBOSCTHL41         0xE67918E4U
#define				DBSC_V3M_DBOSCTHL50         0xE67918E8U
#define				DBSC_V3M_DBOSCTHL51         0xE67918ECU
#define				DBSC_V3M_DBOSCTHL60         0xE67918F0U
#define				DBSC_V3M_DBOSCTHL61         0xE67918F4U
#define				DBSC_V3M_DBOSCTHL70         0xE67918F8U
#define				DBSC_V3M_DBOSCTHL71         0xE67918FCU
#define				DBSC_V3M_DBMEMSWAPCONF0     0xE6792000U


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* BOOT_INIT_DRAM_REGDEF_V3M_H_*/