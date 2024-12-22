#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
const int MAX_SIZE=100;
int main(int argc, char** argv) {
	int arr[MAX_SIZE],currentSize;
	while(1)
	{
		printf("\n==========MENU==========\n");
	    printf("1. Nhap vao mang\n");
	    printf("2. Hien thi mang\n");
    	printf("3. Them phan tu\n");
	    printf("4. Sua phan tu\n");
	    printf("5. Xoa phan tu\n");
	    printf("6. Thoat\n");
	    int choice;
	    printf("Lua chon cua ban: ");
	    scanf("%d",&choice);
	    switch(choice)
	    {
	    	case 1:
	    		int n;
	    		printf("Moi ban nhap vao so luong phan tu muon them vao mang(1-100): ");
	    		scanf("%d",&n);
	    		if(n<=0 || n>MAX_SIZE)
	    		{
	    			printf("Khong hop le!");
	    			break;
				}
				else
				{
					for(int i=0;i<n;i++)
					{
						printf("Nhap vao phan tu arr[%d]: \n",i);
						scanf("%d",&arr[i]);
					}
				}
				currentSize=n;
				printf("Nhap du lieu thanh cong!");
				break;
			case 2:
				if(currentSize==0)
				{
					printf("Mang chua co du lieu!");
				}
				else
				{
					printf("Cac phan tu trong mang la: ");					
					for(int i=0;i<currentSize;i++)
					{
						printf("%d  ",arr[i]);
					}
				}
				break;
			case 3:
				int addIndex, addValue;
				printf("Nhap vi tri ban muon them: ");
				scanf("%d",&addIndex);
				printf("Nhap gia tri ban muon them: ");
				scanf("%d",&addValue);
				if(addIndex<0 || addIndex>MAX_SIZE)
				{
					printf("Vi tri khong nam trong mang(1-100)!");
					break;
				}
				else if(addIndex>currentSize)
				{
					addIndex=currentSize;
				}
				else
				{
					for(int i=currentSize;i>=addIndex;i--)
					{
						arr[i]=arr[i-1];
					}
			    }
			    arr[addIndex]=addValue;
			    currentSize++;
			    printf("Them thanh cong!");
			    break;
			case 4:
			    int fixIndex, newValue;
				printf("Nhap vi tri ban muon sua: ");
				scanf("%d",&fixIndex);
				if(fixIndex<0 || fixIndex>=currentSize)
				{
					printf("Vi tri khong hop le!");
					break;
				}
				printf("Nhap gia tri ban muon thay vao: ");
				scanf("%d",&newValue);
				arr[fixIndex]=newValue;
				printf("Sua thanh cong!");
				break;
			case 5:
				int deleteIndex;
				printf("Nhap vi tri ban muon xoa: ");
				scanf("%d",&deleteIndex);
				if(deleteIndex<0 || deleteIndex>=currentSize)
				{
					printf("Vi tri khong hop le!");
					break;
				}
				for(int i=deleteIndex;i<currentSize;i++)
				{
					arr[i]=arr[i+1];
				}
				printf("Xoa thanh cong!");
				currentSize--;
				break;
			case 6:
				break;
			default:
				printf("Lua chon khong hop le(1-6)!");
				break;
		}
		if(choice==6)
		{
			printf("Thoat chuong trinh!");
			break;
		}
	}
	return 0;
}
