
<link rel="preconnect" href="https://fonts.googleapis.com">
<link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
<link href="https://fonts.googleapis.com/css2?family=Jersey+10&display=swap" rel="stylesheet">
  <style>
    body {
      margin: 0;
      min-height: 100vh;
      display: flex;
      justify-content: center;
      align-items: center;
      background: ;
      font-family: "Jersey 10", sans-serif;
    }

    .wave {
      font-size: 3rem;
      font-weight: 700;
      letter-spacing: 0.2rem;
      color: #e5e7eb;
      text-transform: uppercase;
    }

    .wave span {
      display: inline-block;
      animation: wave 1.2s ease-in-out infinite;
      color: skyblue;
    }

    /* create the wave effect using delays */
    .wave span:nth-child(1)  { animation-delay: 0s;   }
    .wave span:nth-child(2)  { animation-delay: 0.08s;}
    .wave span:nth-child(3)  { animation-delay: 0.16s;}
    .wave span:nth-child(4)  { animation-delay: 0.24s;}
    .wave span:nth-child(5)  { animation-delay: 0.32s;}
    .wave span:nth-child(6)  { animation-delay: 0.40s;}
    .wave span:nth-child(7)  { animation-delay: 0.48s;}
    .wave span:nth-child(8)  { animation-delay: 0.56s;}
    .wave span:nth-child(9)  { animation-delay: 0.64s;}
    .wave span:nth-child(10) { animation-delay: 0.72s;}
    .wave span:nth-child(11) { animation-delay: 0.80s;}
    .wave span:nth-child(12) { animation-delay: 0.88s;}

    @keyframes wave {
      0%, 100% {
        transform: translateY(0);
      }
      50% {
        transform: translateY(-12px);
      }
    }
  </style>
</head>
<body>
  <div class="wave">
    <span>U</span>
    <span>T</span>
    <span>S</span>
    <span>A</span>
    <span>V</span>
    <span>&nbsp;</span>
    <span>L</span>
    <span>A</span>
    <span>H</span>
    <span>E</span>
    <span>R</span>
    <span>U</span>
  </div>



 


