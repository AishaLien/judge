#include<stdio.h>
//�Ƨ� 
void sort(int input[],int n){
	int i,j,tmp;
	for(i=0; i<n; i++){
		tmp=input[i];
		for(j=i; j>=0; j--){
			if(input[j]>tmp){
				input[j+1]=input[j];
			}
			if(input[j]<tmp)
				break;
		}
		input[j+1]=tmp;
	}
}
int main(){
	//drink���������ơAother����L�ӫ~�ƶq�Aothermoney,drinkmoney���O����L���~�`���ζ����`���Aprice����J��L���~�� 
	int drink,other,i,othermoney=0,drinkmoney=0,price;
	//5��6�J�ȥέ� 
	double tmp;
	printf("�n�R�X������?\n");
	scanf("%d",&drink);
	printf("��L�٭n�R�X��?\n");
	scanf("%d",&other);
	//�]���u�����Ʒ|���o�ͨS������u�f���t�O�����D �ҥH���ƨϥΤ@�Ӱ}�C�ӱƧǻ��� 
	int drinkprice[drink];
	for(i=0; i<drink; i++){
		printf("��%d�����ƪ����� ",i+1);
		scanf("%d",&drinkprice[i]);
	}
	sort(drinkprice,drink);
	
	//��X��L���~���`�� 
	for(i=0; i<other; i++){
		printf("��%d�ӪF�誺���� ",i+1);
		scanf("%d",&price);
		othermoney=othermoney+price;
	}
	tmp=othermoney*0.9;
	othermoney=(int)(tmp+0.4);
	//�ⶼ�ƻ��� 
	if(drink%2==0){
		for(i=0; i<drink; i++){
			drinkmoney+=drinkprice[i];
		}
		tmp=drinkmoney*0.88;
		drinkmoney=(int)(tmp+0.4);
	}else{
		for(i=0; i<drink-1; i++){
			drinkmoney+=drinkprice[i];
		}
		tmp=drinkmoney*0.88+drinkprice[i]*0.9;
		drinkmoney=(int)(tmp+0.4);
	}
	printf("\n��X���`�@�����ƻ��欰%d��\n��L���欰%d��\n�`�p��%d��\n",drinkmoney,othermoney,drinkmoney+othermoney);
}
