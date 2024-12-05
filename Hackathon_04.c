#include<stdio.h>

int main(){
	int arr[100];
	int n=0;
	int i, j, key, choice, pos, value;
	int searchValue, check, start, mid, end;
	
	do {
		printf("\nMENU\n");
		printf("1. Nhap so phan tu va gia tri cho mang\n");
        printf("2. In ra gia tri cac phan tu trong mang theo dang(arr[0] = 1, arr[1] = 5 …)\n");
        printf("3. Dem so luong cac so hoan hao co trong mang\n");
        printf("4. Tim gia tri lon thu 2 trong mang, khong duoc sap xep mang\n");
        printf("5. Them mot phan tu vao vi tri ngau nhien trong mang\n");
        printf("6. Xoa phan tu tai mot vi tri cu the\n");
        printf("7. Sap xep mang theo thu tu tang dan\n");
        printf("8. Tim kiem phan tu trong mang\n");
        printf("9. Sap xep lai mang va hien thi ra toan bo phan tu co trong mang (so chan dung truoc, so le dung sau)\n");
        printf("10. Dao nguoc thu tu cac phan tu co trong mang\n");
        printf("11. Thoat chuong trinh\n");
        printf("Lua chon cua ban: ");        
        scanf("%d", &choice);
        
        switch(choice) {
        	case 1:
        		printf("Nhap so phan tu cua mang: ");
        		scanf("%d", &n);
        		
        		for (i = 0; i < n; i++) {
                    printf("Nhap phan tu arr[%d]: ", i);
                    scanf("%d", &arr[i]);
                }
        		break;
        		
        	case 2:
        		printf("Gia tri cac phan tu trong mang:\n");
        		for(i=0; i<n; i++) {
        			printf("arr[%d] = %d\n", i, arr[i]);
				}
				break;
			
			case 3:
				
				break;
				
			case 4:
				
				break;
				
			case 5:
				printf("Nhap vi tri muon them vao mang: ");
				scanf("%d", &pos);
				printf("Nhap phan tu muon them moi vao mang: ");
				scanf("%d", &value);
				
				if(pos<0 || pos>n) {
					printf("Vi tri khong hop le.\n");
				} else {
					for(i=n; i>pos; i--){
						arr[i] = arr[i-1];
					}
					arr[pos] = value;
					n++;
				}
				printf("Mang sau khi them moi phan tu: ");
				for(i=0; i<n; i++) {
					printf("%d ", arr[i]);
				}
				printf("\n");
				break;
				
			case 6:
				printf("Nhap vi tri muon xoa phan tu: ");
				scanf("%d", &pos);
				if(pos<0 || pos>n) {
					printf("So nhap vao khong hop le. Thu lai!");
				} else {
					for(i=pos; i<n-1; i++) {
						arr[i] = arr[i+1];
					}
					n--;
				}				
				printf("Mang sau khi xoa: ");
				for(i=0; i<n; i++){
					printf("%d ", arr[i]);
				}
				printf("\n"); 
				break;
				
			case 7:
				for (i = 1; i < n; i++) {
			    	key = arr[i];
			    	j = i - 1;
			     	while (j >= 0 && arr[j] > key) {
			            arr[j + 1] = arr[j];
			            j = j - 1;
				    }
				    arr[j + 1] = key;
				}
				    
				printf("Mang duoc sap xep theo thu tu tang dan: ");
				for (i = 0; i < n; i++) {
				    printf("%d ", arr[i]);
				}
				printf("\n");
				break;	
				
			case 8:
				printf("Nhap gia tri can tim: ");
				scanf("%d", &searchValue);				
				start = 0;
				end = n - 1;
								
				while(start <= end) {
				    mid = start + (end - start) / 2;
				        
				    if(arr[mid] == searchValue) {
				        printf("Phan tu %d xuat hien tai vi tri arr[%d]\n", searchValue, mid);
				        check = 1;
				        break;
				    }				        
				    if(arr[mid] < searchValue) {
				        start = mid + 1;
				    }
				    else {
				        end = mid - 1;
				    }
				}				
				if(check == 0) {
				    printf("Phan tu %d khong co trong mang\n", searchValue);
				}
				break;
				
			case 9:
				
				break;	
				
			case 10:
				printf("Mang sau khi dao nguoc vi tri:\n");
				for(i=n-1; i>=0; i--) {
					printf("arr[%d] = %d\n", i, arr[i]);
				}
				break;
				
			case 11:
				printf("Thoat chuong trinh");
				break;
				
				default:
				printf("Lua chon khong hop le. Thu lai\n");								
		}
		
	} while (choice != 11);
	
	return 0;
}
