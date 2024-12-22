#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

const int MAX_SIZE=100;
int main(int argc, char** argv) {
	int arr[MAX_SIZE],currentSize=0;
	while(1)
	{
		printf("\n==========MENU==========\n");
	    printf("1. Nhap so phan tu va gia tri vao mang\n");
	    printf("2. Hien thi mang\n");
    	printf("3. In ra cac phan tu chan va tinh tong\n");
	    printf("4. In ra gia tri lon nha va nho nhat trong mang\n");
	    printf("5. In ra cac phan tu la so nguyen to va tinh tong\n");
	    printf("6. Nhap vao mot so va thong ke co bao nhieu phan tu do trong mang\n");
	    printf("7. Them 1 phan tu\n");
	    printf("8. Thoat\n");
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
				if(currentSize==0)
				{
					printf("Mang chua co du lieu!");
				}
				else
				{
					int sumEven=0,noEven=0;
					printf("Cac phan tu la so chan: ");
					for(int i=0;i<currentSize;i++)
					{
						if(arr[i]%2==0)
						{
							printf("%d  ",arr[i]);
							sumEven+=arr[i];
							noEven=1;
						}
					}
					if(!noEven)
					{
						printf("Khong co phan tu nao la so chan.\n");
					}
					else
					{
						printf("\nTong: %d",sumEven);
					}
				}
				break;
			case 4:
				if(currentSize==0)
				{
					printf("Mang chua co du lieu!");
				}
				else
				{
					int max=arr[0], min=arr[0];
					for(int i=0;i<currentSize;i++)
					{
						if(arr[i]>max)
						{
							max=arr[i];
						}
						if(arr[i]<min)
						{
							min=arr[i];
						}
					}
					printf("Gia tri lon nhat la: %d\n",max);
					printf("Gia tri nho nhat la: %d",min);
				}
				break;
			case 5:
				if(currentSize==0)
				{
					printf("Mang chua co du lieu!");
				}
				else
				{
					int checkValue,sumPrime;
				    sumPrime=0;
				    printf("Cac phan tu la so nguyen to: ");
				    for(int i=0;i<currentSize;i++)
				    {
					    int isPrime=1;
				    	checkValue=arr[i];
				    	if(checkValue<2)
				    	{
						continue;
					    }
					    else
					    {
				    		for(int j=2;j*j<=checkValue;j++)
				    		{
				    			if(checkValue%j==0)
				    			{
					    			isPrime=0;
					    		}
					    	}
					    	if(isPrime)
					    	{
					    		printf("%d  ",checkValue);
					    		sumPrime+=checkValue;
					    	}
				    	}
				    }
			    	printf("\nTong cac so nguyen to = %d",sumPrime);
			    }
			    break;			    
			case 6:
				int number,count;
				count=0;
				printf("Nhap vao mot so bat ki: ");
				scanf("%d",&number);
				for(int i=0;i<currentSize;i++)
				{
					if(arr[i]==number)
					{
						count++;
					}
				}
				printf("So phan tu %d co trong mang la %d",number,count);
				break;
			case 7:
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
			case 8:
				break;
			default:
				printf("Lua chon khong hop le(1-6)!");
				break;
	    }
	    if(choice==8)
		{
			printf("Thoat chuong trinh!");
			break;
		}
    }
	return 0;
}
