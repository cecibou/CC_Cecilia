maioraltura=0
menoraltura=0
mediamulheres = 0
mediahomens = 0
mediaalturatotal = 0
altura=0
sexo=0
i=0

while(i<4):
    altura = int(input("Digite a altura: " ))

    sexo = int(input("Digite o sexo( H (1), M (2): " ))

    if(i == 0):
        menoraltura = altura
        maioraltura = altura
    else:
        if(altura < menoraltura):
            menoraltura = altura
        if(altura > maioraltura):
            maioraltura = altura
    

    
    if(sexo == 1):
        if(mediahomens != 0):
            mediahomens = (mediahomens+altura)/2
        else:
            mediahomens = altura
    else:
        if(mediamulheres != 0):
            mediamulheres = (mediamulheres+altura)/2
        else:
            mediamulheres = altura
    
    if(mediaalturatotal != 0):
        mediaalturatotal = (mediaalturatotal+altura)/2
    else:
        mediaalturatotal = altura

    i= i+1   
    


print("menor altura eh : ",menoraltura);
print("maior altura eh : ",maioraltura);
print("media altura homens eh : ",mediahomens);
print("media altura mulheres eh : ",mediamulheres);
print("media altura total eh : ",mediaalturatotal);