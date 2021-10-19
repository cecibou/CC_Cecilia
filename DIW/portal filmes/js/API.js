const APIkey = "4add2ad099f0f2ed2d1e9548095432e1"

function exibeNoticias () {
    let divTela = document.getElementById('tela');
    let texto = '';

    // Montar texto HTML das noticias
    let dados = JSON.parse (this.responseText);
    console.log(dados);
    for (i=0; i< dados.results.length; i=i+2) {
        let noticia = dados.results[i];
        let data = new Date (noticia.release_date);
        let noticia2 = dados.results[i+1];
        let data2 = new Date (noticia2.release_date);
        texto = texto + `   
            
            <div class="wthree-news-top-left">
            <div class="col-md-6 w3-agileits-news-left">
                <div class="col-sm-5 wthree-news-img">
                    <a href="news-single.html"><img src="https://image.tmdb.org/t/p/w500${noticia.poster_path}" alt="" /></a>
                </div>
                <div class="col-sm-7 wthree-news-info">
                    <h5><a href="news-single.html">${noticia.title}</a></h5>
                    <p>${noticia.overview}</p>
                    <ul>
                        <li><i class="fa fa-clock-o" aria-hidden="true"></i> ${data.toLocaleDateString ()}</li>
                        <li><i class="fa fa-eye" aria-hidden="true"></i> ${noticia.popularity}</li>
                    </ul>
                </div>
                <div class="clearfix"> </div>
            </div>
            <div class="col-md-6 w3-agileits-news-left">
                <div class="col-sm-5 wthree-news-img">
                    <a href="news-single.html"><img src="https://image.tmdb.org/t/p/w500${noticia2.poster_path}" alt="" /></a>
                </div>
                <div class="col-sm-7 wthree-news-info">
                    <h5><a href="news-single.html">${noticia2.title}</a></h5>
                    <p>${noticia2.overview}</p>
                    <ul>
                        <li><i class="fa fa-clock-o" aria-hidden="true"></i> ${data2.toLocaleDateString ()}</li>
                        <li><i class="fa fa-eye" aria-hidden="true"></i> ${noticia2.popularity}</li>
                    </ul>
                </div>
                <div class="clearfix"> </div>
            </div>
            <div class="clearfix"> </div>
        </div>
        `;
    };

    // Preencher a DIV com o texto HTML
    divTela.innerHTML = texto;
}

function executaPesquisa () {
    let xhr = new XMLHttpRequest ();
    xhr.onload = exibeNoticias;
    xhr.open ('GET', `https://api.themoviedb.org/3/movie/popular?api_key=${APIkey}&language=pt-BR&page=1`);
    xhr.send ();
}