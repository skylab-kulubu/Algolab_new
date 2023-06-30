# Github Nedir ve Nasıl Kullanılır ?

## Git Nedir?
Git açık kaynaklı sürüm kontrol sistemidir.

## Sürüm Kontrol Sistemi (version control) Nedir ?
Dosyalarınızı yönetmenizi, düzenlemenizi, geçmişini görmenizi sağlayan bir sistemdir.

### Terimler
- **Directory -> Klasör (Folder)**
- **Terminal or Command lane -> Komut yazabileceğiniz arayüz (Interface for commond lane)**

  -  ![Örnek resim](https://www.mfitzp.com/images/method/1472/GitBranchName_1.png)
  -  Dosya ve klasörlerde gezinebileceğiniz, dosya oluşturabileceğiniz, güncelleme öğelerini değiştirebileceğiniz, dosyalar yükleyip çalıştırabileceğiniz ve daha fazlasını yapabileceğiniz bir arayüzdür.
- **CLI -> Komut satırı arayüzü (Commond line interface)**
- **cd -> Klasörü değiştir (Change directory)**
- **Code editor -> Kod yazmak için kelime düzenleyici (Word processor for Writing code)**
  - Herhangi bir metin belgesine kod yazabilirsiniz fakat bu oldukça zor olacaktır. Kod yazmak için içinde birçok araç olan özel tasarımlı uygulamalar vardır. Biz bunlara kod düzenleyici diyoruz.
- **Repository -> Projelerinin beya kodlarının saklandığı bir yer, _kütüphane_**
- **Github -> Kütüphanelerinin çevrimiçi saklayabileceğin bir website**
## Git Komutları Kısa

- **diff -> 2 versiyon arasındaki farkları görmek için kullanırız. (difference = fark)**
- **git log -p -> 
- **git show ->
- **git log --stat -> 

- **git rm [dosya ismi] -> 
- **git mv [dosya ismi] ->  
=======
- **diff -> 2 versiyon arasındaki farkları görmek için kullanırız. (difference = fark)
- 


## Git Komutları Detaylı
- **clone -> Bu komut, mevcut bir URL'den bir havuz elde etmek için kullanılır.**
- ```console
  git clone [url]
  ```
-  ![Git clone](https://linuxteaching.com/storage/img/images_4/git_clone_ssh.png)

- **add -> Bir dosyada değişiklik yaptığınız zaman izlemek istediğinizi söylemek için kullanılır. Staging area'ya ekler.**
  - Staging area:  Git adlı bir versiyon kontrol sistemine ait bir kavramdır ve bu sistemdeki değişiklikleri kaydetmek ve yönetmek için kullanılır. Git, yazılım geliştirme sürecinde kullanılan birçok farklı dosya ve değişiklik kaydeder ve bu değişikliklerin tümünü birden kaydetmek yerine, bunları adım adım ve parça parça kaydeder. 

- ```console
  git add [dosya-adi] 
  ```
 -  ![Git add](https://i.hizliresim.com/g03r8qd.jpg)
 
 - **commit -> Bu komut, dosyayı sürüm geçmişinde kalıcı olarak kaydeder veya anlık görüntüler.**
- ```console
  git commit -m “[Commit mesajınız]”
  ```
 -  ![Git commit](https://static.javatpoint.com/tutorial/git/images/git-push1.png)

 - **push ->  - **commit -> Bu komut, dosyayı sürüm geçmişinde kalıcı olarak kaydeder veya anlık görüntüler. Yani yerel makinanızda yaptığınız değişikliker, uzaktaki bir kütüphaneye veya Githuba yüklemenizi sağlar. **
- ```console
  git push -u origin master
  ```
 -  ![Git push](https://static.javatpoint.com/tutorial/git/images/git-push2.png)

 - **pull ->  - **commit -> Bu komut, uzak sunucudaki değişiklikleri çalışma dizininize getirir ve birleştirir. **
- ```console
  git pull [Repository Link]
  ```
 -  ![Git pull](https://www.jquery-az.com/wp-content/uploads/2018/06/4.0_4-Git-local-pull.png)

> #### Githuba [buradan](https://sosyalmedyabilgi.com/github-hesap-olusturma-nasil-yapilir-2022/) nasıl kayıt olacağınızı öğrenebilirsiniz.

> #### Github'ta [buradan](https://docs.github.com/en/repositories/creating-and-managing-repositories/creating-a-new-repository) nasıl yeni kütüphane (repository) oluşturacağınızı öğrenebilirsiniz.
#### README.md Nedir
README.md kısaca kütüphanenizin açıklamasıdır. Buraya çeşitli yazılar yazarak içeriğiniz hakkında bilgi verebilirsiniz.
![README.md Nasıl Düzenleyebilirsiniz](https://user-images.githubusercontent.com/102587414/186388658-6b74c2e3-58db-43d5-a3c0-d553f750db6c.png)
Okla gösterildiği yerden bu dosyayı düzenleyebilirsiniz.

## Github'ta geçmiş düzenlemeleri Nerden görebilirsiniz?
**1. Kütüphanenizi açın.**
**2. Ardından commit yazısına tıklayın.**

   ![Opem commit](https://user-images.githubusercontent.com/102587414/186391609-a575695a-053c-4d93-bc29-e4afda618c38.png)
   **Tıkladıktan sonra karşınıza buna benzer bir ekran çıkacaktır.**
   
   ![opened commit](https://user-images.githubusercontent.com/102587414/186391876-5cfeb11f-8d5f-422c-959e-11ec81767b0a.png)
**3.Ardından herhangi bir commit e tıklayarak geçmişte yapılan işlemleri görebilirsiniz.**

![image](https://user-images.githubusercontent.com/102587414/186392547-4d57b245-64de-4245-b13e-5ce43d244bca.png)

## Bir Kütüphaneyi (Repo) nasıl yerel makinenize alırsınız/ klonlarsınız. 
[buradan](https://docs.github.com/en/repositories/creating-and-managing-repositories/cloning-a-repository) bu işin nasıl yapıldığını öğrenebilirsiniz.

### Visual Studiodan nasıl oluyormuş ona bakalım.
1. Üst menü -> Terminal -> New Terminal
2. Ardından Terminale 
  ```console
  git clone [url]
  ```
  yazın.
  ![image](https://user-images.githubusercontent.com/102587414/186403087-27b59eac-0308-4cb3-813c-faa17d6103bd.png)
  url'yi kendi oluşturduğunuz kütüphanenin yukarıdaki gösterdiğim kısımdan edinebilirsiniz.
  
  Terminale bu kodu yazdıktan sonra bir hata alıcaksınız. Nedeni henüs bir SSH Key'iniz olmaması. SSH key basitçe sizin kütüphanenizi korumak için yapılan bir anahtardır. Sonuç olarak istemediğiniz kişilerin bu kütüphanelerinizle oynamasını istemezsiniz.
  SSH key oluşturmak için [buradaki](https://docs.github.com/en/authentication/connecting-to-github-with-ssh/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent) bağlatıya gidip denilenleri yapmanız yeterli olacaktır. Youtube üzerinde de bir sürü video vardır bunun için. Küçük bir araştırma ile bunu rahatlıkla yapabilirsiniz.
  
![make ssh key](https://user-images.githubusercontent.com/102587414/186407930-7c855ce5-c28d-43af-a98e-7f5cafb56906.png)
Yukarıdaki linkten SSH key yaparken böyle bir ekran olucaktır.
1. İlk codu consola yazdığınız zaman sizden sonradan kullanmak için şifre oluşturmanızı isteyecektir **yeşil** ile belirttiğim yere şifrenizi yazın. (unutmayın yazarken şifeniz size gözükmeyecektir).
2. Şifre oluşturduktan sonra SSH keyiniz hazırdır.
3. Bu SSH keyi nereden alacağız. 
   - Mavi ile gösterdiğim yeri açarak. Unutmayın sizde daha farklı gözükebilir.
   ![SSH Key](https://user-images.githubusercontent.com/102587414/186408806-1d8f2e0b-d539-46e0-90c8-79c23b93b717.png)
   - Elinizde buna benzer bir yazı olacaktır bunu kopyalayın.
4. Ardından sağ üst köşe profiliniz -> settings -> SSH and GPH keys -> new ssh keys 
   - SSH keyinizie isim verin ve altına kopyaladığınız dizini yapıştırın. -> add SSH keys


 







