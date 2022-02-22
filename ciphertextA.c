#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char * cipher = "GURTERNGRFGTYBELVAYVIVATYVRFABGVAARIRESNYYVATOHGVAEVFVATRIRELGVZRJRSNYY.ARYFBAZNAQRYN.GURJNLGBTRGFGNEGRQVFGBDHVGGNYXVATNAQORTVAQBVAT.JNYGQVFARL.LBHEGVZRVFYVZVGRQFBQBABGJNFGRVGYVIVATFBZRBARRYFRFYVSR.QBABGORGENCCRQOLQBTZN.JUVPUVFYVIVATJVGUGURERFHYGFBSBGURECRBCYRFGUVAXVAT.FGRIRWBOF.VSYVSRJRERCERQVPGNOYRVGJBHYQPRNFRGBORYVSRNAQORJVGUBHGSYNIBE.RYRNABEEBBFRIRYG.VSLBHYBBXNGJUNGLBHUNIRVAYVSRLBHJVYYNYJNLFUNIRZBER.VSLBHYBBXNGJUNGLBHQBABGUNIRVAYVSRLBHJVYYYARIREUNIRRABHTU.BCENUJVASERL.VSLBHFRGLBHETBNYFEVQVPHYBHFYLUVTUNAQVGVFNSNVYHERLBHJVYYSNVYNOBIRRIRELBARRYFRFFHPPRFF.WNZRFPNZREBA.YVSRVFJUNGUNCCRAFJURALBHNEROHFLZNXVATBGURECYNAF.WBUAYRAABA.FCERNQYBIRRIRELJURERLBHTB.YRGABBARRIREPBZRGBLBHJVGUBHGYRNIVATUNCCVRE.ZBGUREGRERFN.JURALBHERNPUGURRAQBSLBHEEBCRGVRNXABGVAVGNAQUNATBA.SENAXYVAQ.EBBFRIRYG.NYJNLFERZRZOREGUNGLBHNERNOFBYHGRYLHAVDHR.WHFGYVXRRIRELBARRYFR.ZNETNERGZRNQ.QBABGWHQTRRNPUQNLOLGURUNEIRFGLBHERNCOHGOLGURFRRQFGUNGLBHCYNAG.EBOREGYBHVFFGRIRAFBA.GURSHGHERORYBATFGBGUBFRJUBORYVRIRVAGURORNHGLBSGURVEQERNZF.RYRNABEEBBFRIRYG.GRYYZRNAQVSBETRG.GRNPUZRNAQVERZRZORE.VAIBYIRZRNAQVYRNEA.ORAWNZVASENAXYVA.GURORFGNAQZBFGORNHGVSHYGUVATFVAGURJBEYQPNAABGORFRRABERIRAGBHPURQGURLZHFGORSRYGJVGUGURURNEG.URYRAXRYYRE.VGVFQHEVATBHEQNEXRFGZBZRAGFGUNGJRZHFGSBPHFGBFRRGURYVTUG.NEVFGBGYR.JUBRIREVFUNCCLJVYYZNXRBGUREFUNCCLGBB.NAARSENAX.QBABGTBJURERGURCNGUZNLYRNQTBVAFGRNQJURERGURERVFABCNGUNAQYRNIRNGENVY.ENYCUJNYQBRZREFBA.";
	int length = strlen(cipher);

	for(int shift=1; shift < 26; shift++)
	{
		printf("key: %d shift\n", shift);
		char *plain = (char *) calloc(length, sizeof(char));
		for (int i = 0; i < length; i++)
		{
			int temp = cipher[i] + shift;
			if (temp > 90)
			{
				temp = (temp % 90) + 64;
			}
			plain[i] = temp;
		}
		printf("Plaintext: %s\n", plain);
		free(plain);
	}

	return 0;
}
