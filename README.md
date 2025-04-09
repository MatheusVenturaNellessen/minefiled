<h1>Campo Minado em C</h1>
<p>Um jogo de campo minado desenvolvido em C com objetivo de, ao informar uma linha e coluna, não selecionar uma bomba aleatória. A cada acerto, +1 ponto e, ao atingir 5 pontos, o jogador vence o jogo.</p>

<hr>

<h2>Tecnologias utilizadas</h2>
<ul>
  <li>C
  <li>Code::Blocks v20.03
</ul>

<hr>

<h2>Estrutura do projeto</h2>
<pre>
MINEFIELD-PROGRAM/
├── campo-minado.c            # Código-fonte principal
└── campo_minado.cbp          # Arquivo do projeto (Code::Blocks)
</pre>
<span>Outros arquivos foram omitidos por não serem essenciais para o entendimento da estrutura do projeto.</span>

<hr>

<h2>Funcionalidades</h2>
<ul>
  <li>O programa gera uma matriz 10 po 10 de números (0 ou 1) aleatoriamente. O número 1 é configurado como bomba e o número 0 é configurado como espaço livre.
  <li>O programa exibe uma mensagem explicando ao jogador como jogar o jogo.
  <li>O jogador digita uma linha e uma coluna por jogada.
  <li>O programa exibe as últimas jogadas a cada jogada.
  <li>Validações:
  <ul>
    <li>Caso uma bomba seja selecionada, o programa finaliza o jogo na condição de derrota.
    <li>O jogador pontua +1 ao selecionar um espaço livre.
    <li>Caso a pontuação do jogador chegue a 5 pontos, o programa finaliza o jogo na condição de vitória.
  </ul>
  <li>Ao ser finalizado, o jogo exibe a condição de vitória ou derrota e pontuação final do jogador.
</ul>

<hr>

<h2>Demonstração do programa</h2>
<div align="center">
  <img src="./demonstration.gif" alt="Imagem animada de demonstração do programa" width="800px">
</div>

<hr>

<h2>Depedências</h2>
<ul>
  <li>Compilador GCC ou Code::Blocks.
  <li>Bibliotecas:
    <ul>
      <li>stdio.h
      <li>stdlib.h
      <li>windows.h
      <li>time.h
      <li>locale.h
    </ul>
</ul>

<hr>

<h2>Como rodar o projeto</h2>
<ul>
  <li><strong>Pelo Code::Blocks</strong>:
  <ol>
    <li>Navegue até o diretório pretendido:      
    <pre><code>cd caminho\do\diretorio</code></pre>
    <li>No diretório escolhido, clone o repositório:
    <pre><code>git clone https://github.com/MatheusVenturaNellessen/minefield-program.git</code></pre>
    <li>Abra o Code::Blocks.
    <li>Vá em <strong>File > Open</strong> e selecione o arquivo <strong>campo_minado.cbp</strong>.
    <li>Clique em <strong>Build and Run</strong> para compilar e executar o jogo.
  </ol>
  <br>
  <li><strong>Pelo Terminal</strong>:</li>
    <ol>
      <li>Instale o compilador GCC:
        <ul>
          <li>No <strong>Windows</strong>:
          <ol>
            <li>Baixe e instale <a href="https://osdn.net/projects/mingw/releases/" target="_blank">MinGW</a> (Minimalist GNU for Windows).
            <li>Durante a instalação do executável <code>mingw-get-setup.exe</code>, em Gerenciador De Pacotes, selecione o pacote <code>mingw32-gcc-g++</code>.
            <li>Após a instalação, acesse <strong>Variáveis de Ambiente > Editar as Variáveis de Ambiente do Sistema</strong>, na seção <strong>Variáveis do Sistema > Path > Editar > Novo </strong>, adicione o caminho da pasta <code>bin</code> do MinGW. 
          </ol>
          <li>No <strong>Linux</strong>:
          <ul>
            <li>Abra o terminal e execute:
            <pre><code>sudo apt update
sudo apt install build-essential</code></pre>
          </ul>
          <li>No <strong>macOS</strong>:
          <ul>
            <li>Instale o <strong>Xcode Command Line Tools</strong> com o comando:
            <pre><code>xcode-select --install</code></pre>
          </ul>
        </ul>
      <li>Para verificar se o GCC foi instalado corretamente, execute no terminal:
      <pre><code>gcc --version</code></pre>
      <p>Ocorreu um erro na instalação do compilador GCC caso aparecer uma mensagem similar a essa:</p>
      <pre>'gcc' não é reconhecido como um comando interno ou externo, um programa operável ou um arquivo em lotes.</pre>
      <li>No terminal, navegue até o diretório pretendido:
        <pre><code>cd caminho\do\diretorio</code></pre>
      <li>No diretório escolhido, clone o repositório:
        <pre><code>git clone https://github.com/MatheusVenturaNellessen/minefield.git</code></pre>
      <li>Compile o código com GCC:
        <pre><code>gcc campo-minado.c -o campo-minado</code></pre>
      <li>Execute o programa compilado:
       <ul>
         <li>Windows:
          <pre><code>campo_minado.exe</code></pre>
        <li>Linux/macOS:
          <pre><code>./campo_minado</code></pre>
      </ul>
</ul>

<hr>

<h2>Problemas encontrados</h2>
<ol>
  <li>Erro no compilador do Code::Blocks.
    <ul>
      <li></strong>Solução</strong>: Com a IDE aberta, clique em <strong>Settings > Compiler</strong>, irá abrir um menu, em <strong>Global compiler settings</strong> em <strong>Select compiler</strong> selecione a opção <strong>GNU GCC Compiler</strong> (caso não esteja), após clique em <strong>Reset defaults > Sim > Sim > Ok</strong>.
    </ul>
</ol>

<hr>

<h2>Contribuições</h2>
<p>Este projeto está aberto para contribuições através de issues. Caso você tenha encontrado um bug, queira sugerir uma melhoria ou tenha dúvidas sobre o funcionamento do projeto, por favor, siga as instruções abaixo:</p>
<ol>
    <li>Verifique se já existe uma issue da situação aberta. Se já existir, adicione seu comentário na issue existente.
    <li>Caso não tenha sido aberta, crie uma issue nova.
</ol>

<hr>

<h2>Licença e Autor</h2>
<p>Este projeto foi desenvolvido por <a href="https://www.linkedin.com/in/matheus-ventura-nellessen/">Matheus Ventura Nellessen</a> e está licenciado sob a licença MIT. Veja o <a href="./LICENSE">documento</a> para mais detalhe.</p>
