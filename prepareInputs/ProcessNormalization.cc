



<!DOCTYPE html>
<html lang="en" class="">
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# object: http://ogp.me/ns/object# article: http://ogp.me/ns/article# profile: http://ogp.me/ns/profile#">
    <meta charset='utf-8'>
    

    <link crossorigin="anonymous" href="https://assets-cdn.github.com/assets/frameworks-c07e6f4b02b556d1d85052fb3853caf84c80e6b23dcdb1ae1b00f051da1115a2.css" media="all" rel="stylesheet" />
    <link crossorigin="anonymous" href="https://assets-cdn.github.com/assets/github-9c07f8394f38bf1048a870912e156db2b6f71826c523fef6869273905407c1fb.css" media="all" rel="stylesheet" />
    
    
    <link crossorigin="anonymous" href="https://assets-cdn.github.com/assets/site-73b3dae8eb441c98982c7306f0e59decca409e87188e07bc1a961b8cea511aab.css" media="all" rel="stylesheet" />
    

    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta http-equiv="Content-Language" content="en">
    <meta name="viewport" content="width=device-width">
    
    <title>HiggsAnalysis-CombinedLimit/ProcessNormalization.cc at master · meng-xiao/HiggsAnalysis-CombinedLimit · GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub">
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
    <link rel="apple-touch-icon" href="/apple-touch-icon.png">
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-57x57.png">
    <link rel="apple-touch-icon" sizes="60x60" href="/apple-touch-icon-60x60.png">
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-72x72.png">
    <link rel="apple-touch-icon" sizes="76x76" href="/apple-touch-icon-76x76.png">
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114x114.png">
    <link rel="apple-touch-icon" sizes="120x120" href="/apple-touch-icon-120x120.png">
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144x144.png">
    <link rel="apple-touch-icon" sizes="152x152" href="/apple-touch-icon-152x152.png">
    <link rel="apple-touch-icon" sizes="180x180" href="/apple-touch-icon-180x180.png">
    <meta property="fb:app_id" content="1401488693436528">

      <meta content="https://avatars2.githubusercontent.com/u/6249876?v=3&amp;s=400" name="twitter:image:src" /><meta content="@github" name="twitter:site" /><meta content="summary" name="twitter:card" /><meta content="meng-xiao/HiggsAnalysis-CombinedLimit" name="twitter:title" /><meta content="HiggsAnalysis-CombinedLimit - CMS Higgs Combination toolkit. See documentation at" name="twitter:description" />
      <meta content="https://avatars2.githubusercontent.com/u/6249876?v=3&amp;s=400" property="og:image" /><meta content="GitHub" property="og:site_name" /><meta content="object" property="og:type" /><meta content="meng-xiao/HiggsAnalysis-CombinedLimit" property="og:title" /><meta content="https://github.com/meng-xiao/HiggsAnalysis-CombinedLimit" property="og:url" /><meta content="HiggsAnalysis-CombinedLimit - CMS Higgs Combination toolkit. See documentation at" property="og:description" />
      <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">
    <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">
    <link rel="assets" href="https://assets-cdn.github.com/">
    
    <meta name="pjax-timeout" content="1000">
    
    <meta name="request-id" content="E0DE:4D7F:3C72534:624EC35:5887BDB9" data-pjax-transient>

    <meta name="msapplication-TileImage" content="/windows-tile.png">
    <meta name="msapplication-TileColor" content="#ffffff">
    <meta name="selected-link" value="repo_source" data-pjax-transient>

    <meta name="google-site-verification" content="KT5gs8h0wvaagLKAVWq8bbeNwnZZK1r1XQysX3xurLU">
<meta name="google-site-verification" content="ZzhVyEFwb7w3e0-uOTltm8Jsck2F5StVihD0exw2fsA">
    <meta name="google-analytics" content="UA-3769691-2">

<meta content="collector.githubapp.com" name="octolytics-host" /><meta content="github" name="octolytics-app-id" /><meta content="E0DE:4D7F:3C72534:624EC35:5887BDB9" name="octolytics-dimension-request_id" />
<meta content="/&lt;user-name&gt;/&lt;repo-name&gt;/blob/show" data-pjax-transient="true" name="analytics-location" />



  <meta class="js-ga-set" name="dimension1" content="Logged Out">



        <meta name="hostname" content="github.com">
    <meta name="user-login" content="">

        <meta name="expected-hostname" content="github.com">
      <meta name="js-proxy-site-detection-payload" content="Mzc3YTU4MWUxM2FlNzVlOGIwNjk1MDAxNzA3YTc2NjRhMzhjYmQ4NzVmYjIzZWRjMDY3MjNhNTY1NTAxOWIxYnx7InJlbW90ZV9hZGRyZXNzIjoiMTg4LjE4NC45MC4xNTYiLCJyZXF1ZXN0X2lkIjoiRTBERTo0RDdGOjNDNzI1MzQ6NjI0RUMzNTo1ODg3QkRCOSIsInRpbWVzdGFtcCI6MTQ4NTI5MDkzOCwiaG9zdCI6ImdpdGh1Yi5jb20ifQ==">


      <link rel="mask-icon" href="https://assets-cdn.github.com/pinned-octocat.svg" color="#000000">
      <link rel="icon" type="image/x-icon" href="https://assets-cdn.github.com/favicon.ico">

    <meta name="html-safe-nonce" content="20c481fe02b73a5c35607850985e8103f08a1eb3">

    <meta http-equiv="x-pjax-version" content="7007ffdc8c20efe5e670a841550558d1">
    

      
  <meta name="description" content="HiggsAnalysis-CombinedLimit - CMS Higgs Combination toolkit. See documentation at">
  <meta name="go-import" content="github.com/meng-xiao/HiggsAnalysis-CombinedLimit git https://github.com/meng-xiao/HiggsAnalysis-CombinedLimit.git">

  <meta content="6249876" name="octolytics-dimension-user_id" /><meta content="meng-xiao" name="octolytics-dimension-user_login" /><meta content="20255173" name="octolytics-dimension-repository_id" /><meta content="meng-xiao/HiggsAnalysis-CombinedLimit" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="true" name="octolytics-dimension-repository_is_fork" /><meta content="10845653" name="octolytics-dimension-repository_parent_id" /><meta content="cms-analysis/HiggsAnalysis-CombinedLimit" name="octolytics-dimension-repository_parent_nwo" /><meta content="10845653" name="octolytics-dimension-repository_network_root_id" /><meta content="cms-analysis/HiggsAnalysis-CombinedLimit" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/meng-xiao/HiggsAnalysis-CombinedLimit/commits/master.atom" rel="alternate" title="Recent Commits to HiggsAnalysis-CombinedLimit:master" type="application/atom+xml">


      <link rel="canonical" href="https://github.com/meng-xiao/HiggsAnalysis-CombinedLimit/blob/master/src/ProcessNormalization.cc" data-pjax-transient>
  </head>


  <body class="logged-out  env-production  vis-public fork page-blob">
    <div id="js-pjax-loader-bar" class="pjax-loader-bar"><div class="progress"></div></div>
    <a href="#start-of-content" tabindex="1" class="accessibility-aid js-skip-to-content">Skip to content</a>

    
    
    



          <header class="site-header js-details-container Details alt-body-font" role="banner">
  <div class="container-responsive">
    <a class="header-logo-invertocat" href="https://github.com/" aria-label="Homepage" data-ga-click="(Logged out) Header, go to homepage, icon:logo-wordmark">
      <svg aria-hidden="true" class="octicon octicon-mark-github" height="32" version="1.1" viewBox="0 0 16 16" width="32"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0 0 16 8c0-4.42-3.58-8-8-8z"/></svg>
    </a>

    <button class="btn-link float-right site-header-toggle js-details-target" type="button" aria-label="Toggle navigation">
      <svg aria-hidden="true" class="octicon octicon-three-bars" height="24" version="1.1" viewBox="0 0 12 16" width="18"><path fill-rule="evenodd" d="M11.41 9H.59C0 9 0 8.59 0 8c0-.59 0-1 .59-1H11.4c.59 0 .59.41.59 1 0 .59 0 1-.59 1h.01zm0-4H.59C0 5 0 4.59 0 4c0-.59 0-1 .59-1H11.4c.59 0 .59.41.59 1 0 .59 0 1-.59 1h.01zM.59 11H11.4c.59 0 .59.41.59 1 0 .59 0 1-.59 1H.59C0 13 0 12.59 0 12c0-.59 0-1 .59-1z"/></svg>
    </button>

    <div class="site-header-menu">
      <nav class="site-header-nav site-header-nav-main">
        <a href="/personal" class="js-selected-navigation-item nav-item nav-item-personal" data-ga-click="Header, click, Nav menu - item:personal" data-selected-links="/personal /personal">
          Personal
</a>        <a href="/open-source" class="js-selected-navigation-item nav-item nav-item-opensource" data-ga-click="Header, click, Nav menu - item:opensource" data-selected-links="/open-source /open-source">
          Open source
</a>        <a href="/business" class="js-selected-navigation-item nav-item nav-item-business" data-ga-click="Header, click, Nav menu - item:business" data-selected-links="/business /business/partners /business/features /business/customers /business">
          Business
</a>        <a href="/explore" class="js-selected-navigation-item nav-item nav-item-explore" data-ga-click="Header, click, Nav menu - item:explore" data-selected-links="/explore /trending /trending/developers /integrations /integrations/feature/code /integrations/feature/collaborate /integrations/feature/ship /showcases /explore">
          Explore
</a>      </nav>

      <div class="site-header-actions">
            <a class="btn btn-primary site-header-actions-btn" href="/join?source=header-repo" data-ga-click="(Logged out) Header, clicked Sign up, text:sign-up">Sign up</a>
          <a class="btn site-header-actions-btn mr-1" href="/login?return_to=%2Fmeng-xiao%2FHiggsAnalysis-CombinedLimit%2Fblob%2Fmaster%2Fsrc%2FProcessNormalization.cc" data-ga-click="(Logged out) Header, clicked Sign in, text:sign-in">Sign in</a>
      </div>

        <nav class="site-header-nav site-header-nav-secondary mr-md-3">
          <a class="nav-item" href="/pricing">Pricing</a>
          <a class="nav-item" href="/blog">Blog</a>
          <a class="nav-item" href="https://help.github.com">Support</a>
          <a class="nav-item header-search-link" href="https://github.com/search">Search GitHub</a>
              <div class="header-search scoped-search site-scoped-search js-site-search" role="search">
  <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/meng-xiao/HiggsAnalysis-CombinedLimit/search" class="js-site-search-form" data-scoped-search-url="/meng-xiao/HiggsAnalysis-CombinedLimit/search" data-unscoped-search-url="/search" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
    <label class="form-control header-search-wrapper js-chromeless-input-container">
      <div class="header-search-scope">This repository</div>
      <input type="text"
        class="form-control header-search-input js-site-search-focus js-site-search-field is-clearable"
        data-hotkey="s"
        name="q"
        placeholder="Search"
        aria-label="Search this repository"
        data-unscoped-placeholder="Search GitHub"
        data-scoped-placeholder="Search"
        autocapitalize="off">
    </label>
</form></div>

        </nav>
    </div>
  </div>
</header>



    <div id="start-of-content" class="accessibility-aid"></div>

      <div id="js-flash-container">
</div>


    <div role="main">
        <div itemscope itemtype="http://schema.org/SoftwareSourceCode">
    <div id="js-repo-pjax-container" data-pjax-container>
      
<div class="pagehead repohead instapaper_ignore readability-menu experiment-repo-nav">
  <div class="container repohead-details-container">

    

<ul class="pagehead-actions">

  <li>
      <a href="/login?return_to=%2Fmeng-xiao%2FHiggsAnalysis-CombinedLimit"
    class="btn btn-sm btn-with-count tooltipped tooltipped-n"
    aria-label="You must be signed in to watch a repository" rel="nofollow">
    <svg aria-hidden="true" class="octicon octicon-eye" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>
    Watch
  </a>
  <a class="social-count" href="/meng-xiao/HiggsAnalysis-CombinedLimit/watchers"
     aria-label="1 user is watching this repository">
    1
  </a>

  </li>

  <li>
      <a href="/login?return_to=%2Fmeng-xiao%2FHiggsAnalysis-CombinedLimit"
    class="btn btn-sm btn-with-count tooltipped tooltipped-n"
    aria-label="You must be signed in to star a repository" rel="nofollow">
    <svg aria-hidden="true" class="octicon octicon-star" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M14 6l-4.9-.64L7 1 4.9 5.36 0 6l3.6 3.26L2.67 14 7 11.67 11.33 14l-.93-4.74z"/></svg>
    Star
  </a>

    <a class="social-count js-social-count" href="/meng-xiao/HiggsAnalysis-CombinedLimit/stargazers"
      aria-label="0 users starred this repository">
      0
    </a>

  </li>

  <li>
      <a href="/login?return_to=%2Fmeng-xiao%2FHiggsAnalysis-CombinedLimit"
        class="btn btn-sm btn-with-count tooltipped tooltipped-n"
        aria-label="You must be signed in to fork a repository" rel="nofollow">
        <svg aria-hidden="true" class="octicon octicon-repo-forked" height="16" version="1.1" viewBox="0 0 10 16" width="10"><path fill-rule="evenodd" d="M8 1a1.993 1.993 0 0 0-1 3.72V6L5 8 3 6V4.72A1.993 1.993 0 0 0 2 1a1.993 1.993 0 0 0-1 3.72V6.5l3 3v1.78A1.993 1.993 0 0 0 5 15a1.993 1.993 0 0 0 1-3.72V9.5l3-3V4.72A1.993 1.993 0 0 0 8 1zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3 10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3-10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg>
        Fork
      </a>

    <a href="/meng-xiao/HiggsAnalysis-CombinedLimit/network" class="social-count"
       aria-label="132 users forked this repository">
      132
    </a>
  </li>
</ul>

    <h1 class="public ">
  <svg aria-hidden="true" class="octicon octicon-repo-forked" height="16" version="1.1" viewBox="0 0 10 16" width="10"><path fill-rule="evenodd" d="M8 1a1.993 1.993 0 0 0-1 3.72V6L5 8 3 6V4.72A1.993 1.993 0 0 0 2 1a1.993 1.993 0 0 0-1 3.72V6.5l3 3v1.78A1.993 1.993 0 0 0 5 15a1.993 1.993 0 0 0 1-3.72V9.5l3-3V4.72A1.993 1.993 0 0 0 8 1zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3 10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3-10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg>
  <span class="author" itemprop="author"><a href="/meng-xiao" class="url fn" rel="author">meng-xiao</a></span><!--
--><span class="path-divider">/</span><!--
--><strong itemprop="name"><a href="/meng-xiao/HiggsAnalysis-CombinedLimit" data-pjax="#js-repo-pjax-container">HiggsAnalysis-CombinedLimit</a></strong>

    <span class="fork-flag">
      <span class="text">forked from <a href="/cms-analysis/HiggsAnalysis-CombinedLimit">cms-analysis/HiggsAnalysis-CombinedLimit</a></span>
    </span>
</h1>

  </div>
  <div class="container">
    
<nav class="reponav js-repo-nav js-sidenav-container-pjax"
     itemscope
     itemtype="http://schema.org/BreadcrumbList"
     role="navigation"
     data-pjax="#js-repo-pjax-container">

  <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
    <a href="/meng-xiao/HiggsAnalysis-CombinedLimit" class="js-selected-navigation-item selected reponav-item" data-hotkey="g c" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches /meng-xiao/HiggsAnalysis-CombinedLimit" itemprop="url">
      <svg aria-hidden="true" class="octicon octicon-code" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M9.5 3L8 4.5 11.5 8 8 11.5 9.5 13 14 8 9.5 3zm-5 0L0 8l4.5 5L6 11.5 2.5 8 6 4.5 4.5 3z"/></svg>
      <span itemprop="name">Code</span>
      <meta itemprop="position" content="1">
</a>  </span>


  <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
    <a href="/meng-xiao/HiggsAnalysis-CombinedLimit/pulls" class="js-selected-navigation-item reponav-item" data-hotkey="g p" data-selected-links="repo_pulls /meng-xiao/HiggsAnalysis-CombinedLimit/pulls" itemprop="url">
      <svg aria-hidden="true" class="octicon octicon-git-pull-request" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M11 11.28V5c-.03-.78-.34-1.47-.94-2.06C9.46 2.35 8.78 2.03 8 2H7V0L4 3l3 3V4h1c.27.02.48.11.69.31.21.2.3.42.31.69v6.28A1.993 1.993 0 0 0 10 15a1.993 1.993 0 0 0 1-3.72zm-1 2.92c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zM4 3c0-1.11-.89-2-2-2a1.993 1.993 0 0 0-1 3.72v6.56A1.993 1.993 0 0 0 2 15a1.993 1.993 0 0 0 1-3.72V4.72c.59-.34 1-.98 1-1.72zm-.8 10c0 .66-.55 1.2-1.2 1.2-.65 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg>
      <span itemprop="name">Pull requests</span>
      <span class="counter">0</span>
      <meta itemprop="position" content="3">
</a>  </span>

  <a href="/meng-xiao/HiggsAnalysis-CombinedLimit/projects" class="js-selected-navigation-item reponav-item" data-selected-links="repo_projects new_repo_project repo_project /meng-xiao/HiggsAnalysis-CombinedLimit/projects">
    <svg aria-hidden="true" class="octicon octicon-project" height="16" version="1.1" viewBox="0 0 15 16" width="15"><path fill-rule="evenodd" d="M10 12h3V2h-3v10zm-4-2h3V2H6v8zm-4 4h3V2H2v12zm-1 1h13V1H1v14zM14 0H1a1 1 0 0 0-1 1v14a1 1 0 0 0 1 1h13a1 1 0 0 0 1-1V1a1 1 0 0 0-1-1z"/></svg>
    Projects
    <span class="counter">0</span>
</a>


  <a href="/meng-xiao/HiggsAnalysis-CombinedLimit/pulse" class="js-selected-navigation-item reponav-item" data-selected-links="pulse /meng-xiao/HiggsAnalysis-CombinedLimit/pulse">
    <svg aria-hidden="true" class="octicon octicon-pulse" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M11.5 8L8.8 5.4 6.6 8.5 5.5 1.6 2.38 8H0v2h3.6l.9-1.8.9 5.4L9 8.5l1.6 1.5H14V8z"/></svg>
    Pulse
</a>
  <a href="/meng-xiao/HiggsAnalysis-CombinedLimit/graphs" class="js-selected-navigation-item reponav-item" data-selected-links="repo_graphs repo_contributors /meng-xiao/HiggsAnalysis-CombinedLimit/graphs">
    <svg aria-hidden="true" class="octicon octicon-graph" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M16 14v1H0V0h1v14h15zM5 13H3V8h2v5zm4 0H7V3h2v10zm4 0h-2V6h2v7z"/></svg>
    Graphs
</a>

</nav>

  </div>
</div>

<div class="container new-discussion-timeline experiment-repo-nav">
  <div class="repository-content">

    

<a href="/meng-xiao/HiggsAnalysis-CombinedLimit/blob/68cbeb34119e435084542445f76943cc2e372a1d/src/ProcessNormalization.cc" class="d-none js-permalink-shortcut" data-hotkey="y">Permalink</a>

<!-- blob contrib key: blob_contributors:v21:be90e296dfcab14cf7491e0cf5800d59 -->

<div class="file-navigation js-zeroclipboard-container">
  
<div class="select-menu branch-select-menu js-menu-container js-select-menu float-left">
  <button class="btn btn-sm select-menu-button js-menu-target css-truncate" data-hotkey="w"
    
    type="button" aria-label="Switch branches or tags" tabindex="0" aria-haspopup="true">
    <i>Branch:</i>
    <span class="js-select-button css-truncate-target">master</span>
  </button>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax aria-hidden="true">

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <svg aria-label="Close" class="octicon octicon-x js-menu-close" height="16" role="img" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
        <span class="select-menu-title">Switch branches/tags</span>
      </div>

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Filter branches/tags" id="context-commitish-filter-field" class="form-control js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" data-filter-placeholder="Filter branches/tags" class="js-select-menu-tab" role="tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" data-filter-placeholder="Find a tag…" class="js-select-menu-tab" role="tab">Tags</a>
            </li>
          </ul>
        </div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches" role="menu">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/meng-xiao/HiggsAnalysis-CombinedLimit/blob/CMSDAS-2014-CERN/src/ProcessNormalization.cc"
               data-name="CMSDAS-2014-CERN"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                CMSDAS-2014-CERN
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/meng-xiao/HiggsAnalysis-CombinedLimit/blob/HiggsAnalysis-CombinedLimit-B5X_bugfix/src/ProcessNormalization.cc"
               data-name="HiggsAnalysis-CombinedLimit-B5X_bugfix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                HiggsAnalysis-CombinedLimit-B5X_bugfix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/meng-xiao/HiggsAnalysis-CombinedLimit/blob/HiggsAnalysis-CombinedLimit-HTT-special/src/ProcessNormalization.cc"
               data-name="HiggsAnalysis-CombinedLimit-HTT-special"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                HiggsAnalysis-CombinedLimit-HTT-special
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/meng-xiao/HiggsAnalysis-CombinedLimit/blob/development/src/ProcessNormalization.cc"
               data-name="development"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                development
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open selected"
               href="/meng-xiao/HiggsAnalysis-CombinedLimit/blob/master/src/ProcessNormalization.cc"
               data-name="master"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                master
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/meng-xiao/HiggsAnalysis-CombinedLimit/blob/slc6-root5.34.17/src/ProcessNormalization.cc"
               data-name="slc6-root5.34.17"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                slc6-root5.34.17
              </span>
            </a>
        </div>

          <div class="select-menu-no-results">Nothing to show</div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/V03-05-00/src/ProcessNormalization.cc"
              data-name="V03-05-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="V03-05-00">
                V03-05-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-logger_bachtis_27Oct12-16h32m57s/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-logger_bachtis_27Oct12-16h32m57s"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-logger_bachtis_27Oct12-16h32m57s">
                HiggsAnalysis-CombinedLimit-logger_bachtis_27Oct12-16h32m57s
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-logger_bachtis_27Oct12-16h01m44s/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-logger_bachtis_27Oct12-16h01m44s"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-logger_bachtis_27Oct12-16h01m44s">
                HiggsAnalysis-CombinedLimit-logger_bachtis_27Oct12-16h01m44s
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-logger_bachtis_27Oct12-16h01m17s/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-logger_bachtis_27Oct12-16h01m17s"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-logger_bachtis_27Oct12-16h01m17s">
                HiggsAnalysis-CombinedLimit-logger_bachtis_27Oct12-16h01m17s
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-logger_bachtis_14Jan13-14h52m07s/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-logger_bachtis_14Jan13-14h52m07s"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-logger_bachtis_14Jan13-14h52m07s">
                HiggsAnalysis-CombinedLimit-logger_bachtis_14Jan13-14h52m07s
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-gs20110713a/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-gs20110713a"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-gs20110713a">
                HiggsAnalysis-CombinedLimit-gs20110713a
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-With_4G/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-With_4G"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-With_4G">
                HiggsAnalysis-CombinedLimit-With_4G
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V03-04-02/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V03-04-02"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V03-04-02">
                HiggsAnalysis-CombinedLimit-V03-04-02
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V03-04-01/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V03-04-01"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V03-04-01">
                HiggsAnalysis-CombinedLimit-V03-04-01
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V03-04-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V03-04-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V03-04-00">
                HiggsAnalysis-CombinedLimit-V03-04-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V03-03-01/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V03-03-01"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V03-03-01">
                HiggsAnalysis-CombinedLimit-V03-03-01
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V03-03-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V03-03-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V03-03-00">
                HiggsAnalysis-CombinedLimit-V03-03-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V03-02-01/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V03-02-01"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V03-02-01">
                HiggsAnalysis-CombinedLimit-V03-02-01
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V03-02-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V03-02-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V03-02-00">
                HiggsAnalysis-CombinedLimit-V03-02-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V03-01-12/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V03-01-12"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V03-01-12">
                HiggsAnalysis-CombinedLimit-V03-01-12
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V03-01-11/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V03-01-11"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V03-01-11">
                HiggsAnalysis-CombinedLimit-V03-01-11
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V03-01-10/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V03-01-10"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V03-01-10">
                HiggsAnalysis-CombinedLimit-V03-01-10
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V03-01-09/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V03-01-09"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V03-01-09">
                HiggsAnalysis-CombinedLimit-V03-01-09
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V03-01-08/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V03-01-08"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V03-01-08">
                HiggsAnalysis-CombinedLimit-V03-01-08
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V03-01-07/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V03-01-07"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V03-01-07">
                HiggsAnalysis-CombinedLimit-V03-01-07
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V03-01-06/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V03-01-06"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V03-01-06">
                HiggsAnalysis-CombinedLimit-V03-01-06
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V03-01-05/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V03-01-05"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V03-01-05">
                HiggsAnalysis-CombinedLimit-V03-01-05
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V03-01-04/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V03-01-04"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V03-01-04">
                HiggsAnalysis-CombinedLimit-V03-01-04
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V03-01-03/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V03-01-03"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V03-01-03">
                HiggsAnalysis-CombinedLimit-V03-01-03
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V03-01-02/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V03-01-02"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V03-01-02">
                HiggsAnalysis-CombinedLimit-V03-01-02
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V03-01-01/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V03-01-01"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V03-01-01">
                HiggsAnalysis-CombinedLimit-V03-01-01
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V03-01-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V03-01-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V03-01-00">
                HiggsAnalysis-CombinedLimit-V03-01-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V03-00-01/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V03-00-01"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V03-00-01">
                HiggsAnalysis-CombinedLimit-V03-00-01
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V03-00-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V03-00-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V03-00-00">
                HiggsAnalysis-CombinedLimit-V03-00-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V02-07-03/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V02-07-03"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V02-07-03">
                HiggsAnalysis-CombinedLimit-V02-07-03
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V02-07-02/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V02-07-02"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V02-07-02">
                HiggsAnalysis-CombinedLimit-V02-07-02
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V02-07-01/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V02-07-01"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V02-07-01">
                HiggsAnalysis-CombinedLimit-V02-07-01
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V02-07-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V02-07-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V02-07-00">
                HiggsAnalysis-CombinedLimit-V02-07-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V02-06-01/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V02-06-01"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V02-06-01">
                HiggsAnalysis-CombinedLimit-V02-06-01
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V02-06-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V02-06-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V02-06-00">
                HiggsAnalysis-CombinedLimit-V02-06-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V02-05-06/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V02-05-06"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V02-05-06">
                HiggsAnalysis-CombinedLimit-V02-05-06
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V02-02-08/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V02-02-08"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V02-02-08">
                HiggsAnalysis-CombinedLimit-V02-02-08
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V02-02-07/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V02-02-07"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V02-02-07">
                HiggsAnalysis-CombinedLimit-V02-02-07
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V02-02-06/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V02-02-06"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V02-02-06">
                HiggsAnalysis-CombinedLimit-V02-02-06
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V02-02-05/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V02-02-05"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V02-02-05">
                HiggsAnalysis-CombinedLimit-V02-02-05
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V02-02-04/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V02-02-04"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V02-02-04">
                HiggsAnalysis-CombinedLimit-V02-02-04
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V02-02-03/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V02-02-03"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V02-02-03">
                HiggsAnalysis-CombinedLimit-V02-02-03
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V02-02-02/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V02-02-02"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V02-02-02">
                HiggsAnalysis-CombinedLimit-V02-02-02
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V02-02-01/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V02-02-01"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V02-02-01">
                HiggsAnalysis-CombinedLimit-V02-02-01
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V02-02-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V02-02-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V02-02-00">
                HiggsAnalysis-CombinedLimit-V02-02-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V02-01-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V02-01-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V02-01-00">
                HiggsAnalysis-CombinedLimit-V02-01-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V02-00-01/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V02-00-01"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V02-00-01">
                HiggsAnalysis-CombinedLimit-V02-00-01
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V02-00-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V02-00-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V02-00-00">
                HiggsAnalysis-CombinedLimit-V02-00-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V01-13-02/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V01-13-02"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V01-13-02">
                HiggsAnalysis-CombinedLimit-V01-13-02
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V01-13-01/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V01-13-01"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V01-13-01">
                HiggsAnalysis-CombinedLimit-V01-13-01
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V01-13-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V01-13-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V01-13-00">
                HiggsAnalysis-CombinedLimit-V01-13-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V01-12-04/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V01-12-04"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V01-12-04">
                HiggsAnalysis-CombinedLimit-V01-12-04
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V01-12-03/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V01-12-03"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V01-12-03">
                HiggsAnalysis-CombinedLimit-V01-12-03
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V01-12-02/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V01-12-02"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V01-12-02">
                HiggsAnalysis-CombinedLimit-V01-12-02
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V01-12-01/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V01-12-01"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V01-12-01">
                HiggsAnalysis-CombinedLimit-V01-12-01
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V01-12-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V01-12-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V01-12-00">
                HiggsAnalysis-CombinedLimit-V01-12-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V01-11-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V01-11-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V01-11-00">
                HiggsAnalysis-CombinedLimit-V01-11-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V01-10-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V01-10-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V01-10-00">
                HiggsAnalysis-CombinedLimit-V01-10-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V01-08-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V01-08-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V01-08-00">
                HiggsAnalysis-CombinedLimit-V01-08-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V01-04-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V01-04-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V01-04-00">
                HiggsAnalysis-CombinedLimit-V01-04-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V01-03-02/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V01-03-02"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V01-03-02">
                HiggsAnalysis-CombinedLimit-V01-03-02
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V01-03-01/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V01-03-01"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V01-03-01">
                HiggsAnalysis-CombinedLimit-V01-03-01
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V01-03-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V01-03-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V01-03-00">
                HiggsAnalysis-CombinedLimit-V01-03-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V01-02-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V01-02-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V01-02-00">
                HiggsAnalysis-CombinedLimit-V01-02-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V01-01-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V01-01-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V01-01-00">
                HiggsAnalysis-CombinedLimit-V01-01-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V01-00-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V01-00-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V01-00-00">
                HiggsAnalysis-CombinedLimit-V01-00-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V00-06-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V00-06-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V00-06-00">
                HiggsAnalysis-CombinedLimit-V00-06-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V00-05-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V00-05-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V00-05-00">
                HiggsAnalysis-CombinedLimit-V00-05-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V00-04-02/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V00-04-02"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V00-04-02">
                HiggsAnalysis-CombinedLimit-V00-04-02
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V00-04-01/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V00-04-01"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V00-04-01">
                HiggsAnalysis-CombinedLimit-V00-04-01
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V00-04-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V00-04-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V00-04-00">
                HiggsAnalysis-CombinedLimit-V00-04-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V00-03-90/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V00-03-90"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V00-03-90">
                HiggsAnalysis-CombinedLimit-V00-03-90
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V00-03-10/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V00-03-10"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V00-03-10">
                HiggsAnalysis-CombinedLimit-V00-03-10
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V00-03-01/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V00-03-01"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V00-03-01">
                HiggsAnalysis-CombinedLimit-V00-03-01
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V00-03-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V00-03-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V00-03-00">
                HiggsAnalysis-CombinedLimit-V00-03-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V00-02-01/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V00-02-01"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V00-02-01">
                HiggsAnalysis-CombinedLimit-V00-02-01
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V00-02-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V00-02-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V00-02-00">
                HiggsAnalysis-CombinedLimit-V00-02-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V00-01-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V00-01-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V00-01-00">
                HiggsAnalysis-CombinedLimit-V00-01-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-V00-00-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-V00-00-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-V00-00-00">
                HiggsAnalysis-CombinedLimit-V00-00-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-T01-09-01/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-T01-09-01"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-T01-09-01">
                HiggsAnalysis-CombinedLimit-T01-09-01
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-T01-09-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-T01-09-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-T01-09-00">
                HiggsAnalysis-CombinedLimit-T01-09-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-T01-07-03/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-T01-07-03"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-T01-07-03">
                HiggsAnalysis-CombinedLimit-T01-07-03
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-T01-07-02/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-T01-07-02"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-T01-07-02">
                HiggsAnalysis-CombinedLimit-T01-07-02
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-T01-07-01/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-T01-07-01"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-T01-07-01">
                HiggsAnalysis-CombinedLimit-T01-07-01
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-T01-07-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-T01-07-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-T01-07-00">
                HiggsAnalysis-CombinedLimit-T01-07-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-T01-06-01/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-T01-06-01"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-T01-06-01">
                HiggsAnalysis-CombinedLimit-T01-06-01
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-T01-06-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-T01-06-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-T01-06-00">
                HiggsAnalysis-CombinedLimit-T01-06-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-T01-05-06/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-T01-05-06"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-T01-05-06">
                HiggsAnalysis-CombinedLimit-T01-05-06
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-T01-05-05/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-T01-05-05"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-T01-05-05">
                HiggsAnalysis-CombinedLimit-T01-05-05
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-T01-05-04/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-T01-05-04"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-T01-05-04">
                HiggsAnalysis-CombinedLimit-T01-05-04
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-T01-05-03/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-T01-05-03"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-T01-05-03">
                HiggsAnalysis-CombinedLimit-T01-05-03
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-T01-05-02/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-T01-05-02"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-T01-05-02">
                HiggsAnalysis-CombinedLimit-T01-05-02
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-T01-05-01/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-T01-05-01"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-T01-05-01">
                HiggsAnalysis-CombinedLimit-T01-05-01
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-T01-05-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-T01-05-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-T01-05-00">
                HiggsAnalysis-CombinedLimit-T01-05-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-T01-04-00/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-T01-04-00"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-T01-04-00">
                HiggsAnalysis-CombinedLimit-T01-04-00
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-Summer2011/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-Summer2011"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-Summer2011">
                HiggsAnalysis-CombinedLimit-Summer2011
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-Michalis_THKeys_111103/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-Michalis_THKeys_111103"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-Michalis_THKeys_111103">
                HiggsAnalysis-CombinedLimit-Michalis_THKeys_111103
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-FINAL_MORIOND/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-FINAL_MORIOND"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-FINAL_MORIOND">
                HiggsAnalysis-CombinedLimit-FINAL_MORIOND
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-CMSSW_5_3_11/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-CMSSW_5_3_11"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-CMSSW_5_3_11">
                HiggsAnalysis-CombinedLimit-CMSSW_5_3_11
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/HiggsAnalysis-CombinedLimit-CMSSW_5_3_10/src/ProcessNormalization.cc"
              data-name="HiggsAnalysis-CombinedLimit-CMSSW_5_3_10"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="HiggsAnalysis-CombinedLimit-CMSSW_5_3_10">
                HiggsAnalysis-CombinedLimit-CMSSW_5_3_10
              </span>
            </a>
        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div>

    </div>
  </div>
</div>

  <div class="BtnGroup float-right">
    <a href="/meng-xiao/HiggsAnalysis-CombinedLimit/find/master"
          class="js-pjax-capture-input btn btn-sm BtnGroup-item"
          data-pjax
          data-hotkey="t">
      Find file
    </a>
    <button aria-label="Copy file path to clipboard" class="js-zeroclipboard btn btn-sm BtnGroup-item tooltipped tooltipped-s" data-copied-hint="Copied!" type="button">Copy path</button>
  </div>
  <div class="breadcrumb js-zeroclipboard-target">
    <span class="repo-root js-repo-root"><span class="js-path-segment"><a href="/meng-xiao/HiggsAnalysis-CombinedLimit"><span>HiggsAnalysis-CombinedLimit</span></a></span></span><span class="separator">/</span><span class="js-path-segment"><a href="/meng-xiao/HiggsAnalysis-CombinedLimit/tree/master/src"><span>src</span></a></span><span class="separator">/</span><strong class="final-path">ProcessNormalization.cc</strong>
  </div>
</div>

<include-fragment class="commit-tease" src="/meng-xiao/HiggsAnalysis-CombinedLimit/contributors/master/src/ProcessNormalization.cc">
  <div>
    Fetching contributors&hellip;
  </div>

  <div class="commit-tease-contributors">
    <img alt="" class="loader-loading float-left" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32-EAF2F5.gif" width="16" />
    <span class="loader-error">Cannot retrieve contributors at this time</span>
  </div>
</include-fragment>

<div class="file">
  <div class="file-header">
  <div class="file-actions">

    <div class="BtnGroup">
      <a href="/meng-xiao/HiggsAnalysis-CombinedLimit/raw/master/src/ProcessNormalization.cc" class="btn btn-sm BtnGroup-item" id="raw-url">Raw</a>
        <a href="/meng-xiao/HiggsAnalysis-CombinedLimit/blame/master/src/ProcessNormalization.cc" class="btn btn-sm js-update-url-with-hash BtnGroup-item" data-hotkey="b">Blame</a>
      <a href="/meng-xiao/HiggsAnalysis-CombinedLimit/commits/master/src/ProcessNormalization.cc" class="btn btn-sm BtnGroup-item" rel="nofollow">History</a>
    </div>


        <button type="button" class="btn-octicon disabled tooltipped tooltipped-nw"
          aria-label="You must be signed in to make or propose changes">
          <svg aria-hidden="true" class="octicon octicon-pencil" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M0 12v3h3l8-8-3-3-8 8zm3 2H1v-2h1v1h1v1zm10.3-9.3L12 6 9 3l1.3-1.3a.996.996 0 0 1 1.41 0l1.59 1.59c.39.39.39 1.02 0 1.41z"/></svg>
        </button>
        <button type="button" class="btn-octicon btn-octicon-danger disabled tooltipped tooltipped-nw"
          aria-label="You must be signed in to make or propose changes">
          <svg aria-hidden="true" class="octicon octicon-trashcan" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M11 2H9c0-.55-.45-1-1-1H5c-.55 0-1 .45-1 1H2c-.55 0-1 .45-1 1v1c0 .55.45 1 1 1v9c0 .55.45 1 1 1h7c.55 0 1-.45 1-1V5c.55 0 1-.45 1-1V3c0-.55-.45-1-1-1zm-1 12H3V5h1v8h1V5h1v8h1V5h1v8h1V5h1v9zm1-10H2V3h9v1z"/></svg>
        </button>
  </div>

  <div class="file-info">
      129 lines (117 sloc)
      <span class="file-info-divider"></span>
    5.69 KB
  </div>
</div>

  

  <div itemprop="text" class="blob-wrapper data type-c">
      <table class="highlight tab-size js-file-line-container" data-tab-size="8">
      <tr>
        <td id="L1" class="blob-num js-line-number" data-line-number="1"></td>
        <td id="LC1" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>../interface/ProcessNormalization.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L2" class="blob-num js-line-number" data-line-number="2"></td>
        <td id="LC2" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3" class="blob-num js-line-number" data-line-number="3"></td>
        <td id="LC3" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>cmath<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L4" class="blob-num js-line-number" data-line-number="4"></td>
        <td id="LC4" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>cassert<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L5" class="blob-num js-line-number" data-line-number="5"></td>
        <td id="LC5" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>cstdio<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L6" class="blob-num js-line-number" data-line-number="6"></td>
        <td id="LC6" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L7" class="blob-num js-line-number" data-line-number="7"></td>
        <td id="LC7" class="blob-code blob-code-inner js-file-line"><span class="pl-en">ProcessNormalization::ProcessNormalization</span>(<span class="pl-k">const</span> <span class="pl-k">char</span> *name, <span class="pl-k">const</span> <span class="pl-k">char</span> *title, <span class="pl-k">double</span> nominal) :</td>
      </tr>
      <tr>
        <td id="L8" class="blob-num js-line-number" data-line-number="8"></td>
        <td id="LC8" class="blob-code blob-code-inner js-file-line">        RooAbsReal(name,title),</td>
      </tr>
      <tr>
        <td id="L9" class="blob-num js-line-number" data-line-number="9"></td>
        <td id="LC9" class="blob-code blob-code-inner js-file-line">        nominalValue_(nominal),</td>
      </tr>
      <tr>
        <td id="L10" class="blob-num js-line-number" data-line-number="10"></td>
        <td id="LC10" class="blob-code blob-code-inner js-file-line">        thetaList_(<span class="pl-s"><span class="pl-pds">&quot;</span>thetaList<span class="pl-pds">&quot;</span></span>,<span class="pl-s"><span class="pl-pds">&quot;</span>List of nuisances for symmetric kappas<span class="pl-pds">&quot;</span></span>, <span class="pl-c1">this</span>), </td>
      </tr>
      <tr>
        <td id="L11" class="blob-num js-line-number" data-line-number="11"></td>
        <td id="LC11" class="blob-code blob-code-inner js-file-line">        asymmThetaList_(<span class="pl-s"><span class="pl-pds">&quot;</span>asymmThetaList<span class="pl-pds">&quot;</span></span>,<span class="pl-s"><span class="pl-pds">&quot;</span>List of nuisances for asymmetric kappas<span class="pl-pds">&quot;</span></span>, <span class="pl-c1">this</span>), </td>
      </tr>
      <tr>
        <td id="L12" class="blob-num js-line-number" data-line-number="12"></td>
        <td id="LC12" class="blob-code blob-code-inner js-file-line">        otherFactorList_(<span class="pl-s"><span class="pl-pds">&quot;</span>otherFactorList<span class="pl-pds">&quot;</span></span>,<span class="pl-s"><span class="pl-pds">&quot;</span>Other multiplicative terms<span class="pl-pds">&quot;</span></span>, <span class="pl-c1">this</span>)</td>
      </tr>
      <tr>
        <td id="L13" class="blob-num js-line-number" data-line-number="13"></td>
        <td id="LC13" class="blob-code blob-code-inner js-file-line">{ </td>
      </tr>
      <tr>
        <td id="L14" class="blob-num js-line-number" data-line-number="14"></td>
        <td id="LC14" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L15" class="blob-num js-line-number" data-line-number="15"></td>
        <td id="LC15" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L16" class="blob-num js-line-number" data-line-number="16"></td>
        <td id="LC16" class="blob-code blob-code-inner js-file-line"><span class="pl-en">ProcessNormalization::ProcessNormalization</span>(<span class="pl-k">const</span> <span class="pl-k">char</span> *name, <span class="pl-k">const</span> <span class="pl-k">char</span> *title, RooAbsReal &amp;nominal) :</td>
      </tr>
      <tr>
        <td id="L17" class="blob-num js-line-number" data-line-number="17"></td>
        <td id="LC17" class="blob-code blob-code-inner js-file-line">        RooAbsReal(name,title),</td>
      </tr>
      <tr>
        <td id="L18" class="blob-num js-line-number" data-line-number="18"></td>
        <td id="LC18" class="blob-code blob-code-inner js-file-line">        nominalValue_(<span class="pl-c1">1.0</span>),</td>
      </tr>
      <tr>
        <td id="L19" class="blob-num js-line-number" data-line-number="19"></td>
        <td id="LC19" class="blob-code blob-code-inner js-file-line">        thetaList_(<span class="pl-s"><span class="pl-pds">&quot;</span>thetaList<span class="pl-pds">&quot;</span></span>, <span class="pl-s"><span class="pl-pds">&quot;</span>List of nuisances for symmetric kappas<span class="pl-pds">&quot;</span></span>, <span class="pl-c1">this</span>), </td>
      </tr>
      <tr>
        <td id="L20" class="blob-num js-line-number" data-line-number="20"></td>
        <td id="LC20" class="blob-code blob-code-inner js-file-line">        asymmThetaList_(<span class="pl-s"><span class="pl-pds">&quot;</span>asymmThetaList<span class="pl-pds">&quot;</span></span>, <span class="pl-s"><span class="pl-pds">&quot;</span>List of nuisances for asymmetric kappas<span class="pl-pds">&quot;</span></span>, <span class="pl-c1">this</span>), </td>
      </tr>
      <tr>
        <td id="L21" class="blob-num js-line-number" data-line-number="21"></td>
        <td id="LC21" class="blob-code blob-code-inner js-file-line">        otherFactorList_(<span class="pl-s"><span class="pl-pds">&quot;</span>otherFactorList<span class="pl-pds">&quot;</span></span>, <span class="pl-s"><span class="pl-pds">&quot;</span>Other multiplicative terms<span class="pl-pds">&quot;</span></span>, <span class="pl-c1">this</span>)</td>
      </tr>
      <tr>
        <td id="L22" class="blob-num js-line-number" data-line-number="22"></td>
        <td id="LC22" class="blob-code blob-code-inner js-file-line">{ </td>
      </tr>
      <tr>
        <td id="L23" class="blob-num js-line-number" data-line-number="23"></td>
        <td id="LC23" class="blob-code blob-code-inner js-file-line">    otherFactorList_.<span class="pl-c1">add</span>(nominal);</td>
      </tr>
      <tr>
        <td id="L24" class="blob-num js-line-number" data-line-number="24"></td>
        <td id="LC24" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L25" class="blob-num js-line-number" data-line-number="25"></td>
        <td id="LC25" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L26" class="blob-num js-line-number" data-line-number="26"></td>
        <td id="LC26" class="blob-code blob-code-inner js-file-line"><span class="pl-en">ProcessNormalization::ProcessNormalization</span>(<span class="pl-k">const</span> ProcessNormalization &amp;other, <span class="pl-k">const</span> <span class="pl-k">char</span> *newname) :</td>
      </tr>
      <tr>
        <td id="L27" class="blob-num js-line-number" data-line-number="27"></td>
        <td id="LC27" class="blob-code blob-code-inner js-file-line">        RooAbsReal(other, newname ? newname : other.GetName()),</td>
      </tr>
      <tr>
        <td id="L28" class="blob-num js-line-number" data-line-number="28"></td>
        <td id="LC28" class="blob-code blob-code-inner js-file-line">        nominalValue_(other.nominalValue_),</td>
      </tr>
      <tr>
        <td id="L29" class="blob-num js-line-number" data-line-number="29"></td>
        <td id="LC29" class="blob-code blob-code-inner js-file-line">        logKappa_(other.logKappa_),</td>
      </tr>
      <tr>
        <td id="L30" class="blob-num js-line-number" data-line-number="30"></td>
        <td id="LC30" class="blob-code blob-code-inner js-file-line">        thetaList_(<span class="pl-s"><span class="pl-pds">&quot;</span>thetaList<span class="pl-pds">&quot;</span></span>, <span class="pl-c1">this</span>, other.thetaList_), </td>
      </tr>
      <tr>
        <td id="L31" class="blob-num js-line-number" data-line-number="31"></td>
        <td id="LC31" class="blob-code blob-code-inner js-file-line">        logAsymmKappa_(other.logAsymmKappa_),</td>
      </tr>
      <tr>
        <td id="L32" class="blob-num js-line-number" data-line-number="32"></td>
        <td id="LC32" class="blob-code blob-code-inner js-file-line">        asymmThetaList_(<span class="pl-s"><span class="pl-pds">&quot;</span>asymmThetaList<span class="pl-pds">&quot;</span></span>, <span class="pl-c1">this</span>, other.asymmThetaList_), </td>
      </tr>
      <tr>
        <td id="L33" class="blob-num js-line-number" data-line-number="33"></td>
        <td id="LC33" class="blob-code blob-code-inner js-file-line">        otherFactorList_(<span class="pl-s"><span class="pl-pds">&quot;</span>otherFactorList<span class="pl-pds">&quot;</span></span>, <span class="pl-c1">this</span>, other.otherFactorList_)</td>
      </tr>
      <tr>
        <td id="L34" class="blob-num js-line-number" data-line-number="34"></td>
        <td id="LC34" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L35" class="blob-num js-line-number" data-line-number="35"></td>
        <td id="LC35" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L36" class="blob-num js-line-number" data-line-number="36"></td>
        <td id="LC36" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L37" class="blob-num js-line-number" data-line-number="37"></td>
        <td id="LC37" class="blob-code blob-code-inner js-file-line"><span class="pl-en">ProcessNormalization::~ProcessNormalization</span>() {}</td>
      </tr>
      <tr>
        <td id="L38" class="blob-num js-line-number" data-line-number="38"></td>
        <td id="LC38" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L39" class="blob-num js-line-number" data-line-number="39"></td>
        <td id="LC39" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">ProcessNormalization::addLogNormal</span>(<span class="pl-k">double</span> kappa, RooAbsReal &amp;theta) {</td>
      </tr>
      <tr>
        <td id="L40" class="blob-num js-line-number" data-line-number="40"></td>
        <td id="LC40" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (kappa != <span class="pl-c1">0.0</span> &amp;&amp; kappa != <span class="pl-c1">1.0</span>) {</td>
      </tr>
      <tr>
        <td id="L41" class="blob-num js-line-number" data-line-number="41"></td>
        <td id="LC41" class="blob-code blob-code-inner js-file-line">        logKappa_.<span class="pl-c1">push_back</span>(<span class="pl-c1">std::log</span>(kappa));</td>
      </tr>
      <tr>
        <td id="L42" class="blob-num js-line-number" data-line-number="42"></td>
        <td id="LC42" class="blob-code blob-code-inner js-file-line">        thetaList_.<span class="pl-c1">add</span>(theta);</td>
      </tr>
      <tr>
        <td id="L43" class="blob-num js-line-number" data-line-number="43"></td>
        <td id="LC43" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L44" class="blob-num js-line-number" data-line-number="44"></td>
        <td id="LC44" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L45" class="blob-num js-line-number" data-line-number="45"></td>
        <td id="LC45" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L46" class="blob-num js-line-number" data-line-number="46"></td>
        <td id="LC46" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">ProcessNormalization::addAsymmLogNormal</span>(<span class="pl-k">double</span> kappaLo, <span class="pl-k">double</span> kappaHi, RooAbsReal &amp;theta) {</td>
      </tr>
      <tr>
        <td id="L47" class="blob-num js-line-number" data-line-number="47"></td>
        <td id="LC47" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (<span class="pl-c1">fabs</span>(kappaLo*kappaHi - <span class="pl-c1">1</span>) &lt; <span class="pl-c1">1e-5</span>) {</td>
      </tr>
      <tr>
        <td id="L48" class="blob-num js-line-number" data-line-number="48"></td>
        <td id="LC48" class="blob-code blob-code-inner js-file-line">        <span class="pl-c1">addLogNormal</span>(kappaHi, theta);</td>
      </tr>
      <tr>
        <td id="L49" class="blob-num js-line-number" data-line-number="49"></td>
        <td id="LC49" class="blob-code blob-code-inner js-file-line">    } <span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L50" class="blob-num js-line-number" data-line-number="50"></td>
        <td id="LC50" class="blob-code blob-code-inner js-file-line">        logAsymmKappa_.<span class="pl-c1">push_back</span>(<span class="pl-c1">std::make_pair</span>(<span class="pl-c1">std::log</span>(kappaLo), <span class="pl-c1">std::log</span>(kappaHi)));</td>
      </tr>
      <tr>
        <td id="L51" class="blob-num js-line-number" data-line-number="51"></td>
        <td id="LC51" class="blob-code blob-code-inner js-file-line">        asymmThetaList_.<span class="pl-c1">add</span>(theta);</td>
      </tr>
      <tr>
        <td id="L52" class="blob-num js-line-number" data-line-number="52"></td>
        <td id="LC52" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L53" class="blob-num js-line-number" data-line-number="53"></td>
        <td id="LC53" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L54" class="blob-num js-line-number" data-line-number="54"></td>
        <td id="LC54" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L55" class="blob-num js-line-number" data-line-number="55"></td>
        <td id="LC55" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">ProcessNormalization::addOtherFactor</span>(RooAbsReal &amp;factor) {</td>
      </tr>
      <tr>
        <td id="L56" class="blob-num js-line-number" data-line-number="56"></td>
        <td id="LC56" class="blob-code blob-code-inner js-file-line">    otherFactorList_.<span class="pl-c1">add</span>(factor);</td>
      </tr>
      <tr>
        <td id="L57" class="blob-num js-line-number" data-line-number="57"></td>
        <td id="LC57" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L58" class="blob-num js-line-number" data-line-number="58"></td>
        <td id="LC58" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L59" class="blob-num js-line-number" data-line-number="59"></td>
        <td id="LC59" class="blob-code blob-code-inner js-file-line">Double_t <span class="pl-en">ProcessNormalization::evaluate</span>() <span class="pl-k">const</span> {</td>
      </tr>
      <tr>
        <td id="L60" class="blob-num js-line-number" data-line-number="60"></td>
        <td id="LC60" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">double</span> logVal = <span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L61" class="blob-num js-line-number" data-line-number="61"></td>
        <td id="LC61" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (!logKappa_.<span class="pl-c1">empty</span>()) {</td>
      </tr>
      <tr>
        <td id="L62" class="blob-num js-line-number" data-line-number="62"></td>
        <td id="LC62" class="blob-code blob-code-inner js-file-line">        RooLinkedListIter iterTheta = thetaList_.<span class="pl-c1">iterator</span>();</td>
      </tr>
      <tr>
        <td id="L63" class="blob-num js-line-number" data-line-number="63"></td>
        <td id="LC63" class="blob-code blob-code-inner js-file-line">        std::vector&lt;<span class="pl-k">double</span>&gt;::const_iterator logKappa = logKappa_.<span class="pl-c1">begin</span>();</td>
      </tr>
      <tr>
        <td id="L64" class="blob-num js-line-number" data-line-number="64"></td>
        <td id="LC64" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span> (RooAbsReal *theta = (RooAbsReal*) iterTheta.<span class="pl-c1">Next</span>(); theta != <span class="pl-c1">0</span>; theta = (RooAbsReal*) iterTheta.<span class="pl-c1">Next</span>(), ++logKappa) {</td>
      </tr>
      <tr>
        <td id="L65" class="blob-num js-line-number" data-line-number="65"></td>
        <td id="LC65" class="blob-code blob-code-inner js-file-line">            logVal += theta-&gt;<span class="pl-c1">getVal</span>() * (*logKappa);</td>
      </tr>
      <tr>
        <td id="L66" class="blob-num js-line-number" data-line-number="66"></td>
        <td id="LC66" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L67" class="blob-num js-line-number" data-line-number="67"></td>
        <td id="LC67" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L68" class="blob-num js-line-number" data-line-number="68"></td>
        <td id="LC68" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (!logAsymmKappa_.<span class="pl-c1">empty</span>()) {</td>
      </tr>
      <tr>
        <td id="L69" class="blob-num js-line-number" data-line-number="69"></td>
        <td id="LC69" class="blob-code blob-code-inner js-file-line">        RooLinkedListIter iterTheta = asymmThetaList_.<span class="pl-c1">iterator</span>();</td>
      </tr>
      <tr>
        <td id="L70" class="blob-num js-line-number" data-line-number="70"></td>
        <td id="LC70" class="blob-code blob-code-inner js-file-line">        std::vector&lt;std::pair&lt;<span class="pl-k">double</span>,<span class="pl-k">double</span>&gt; &gt;::const_iterator logKappas = logAsymmKappa_.<span class="pl-c1">begin</span>();</td>
      </tr>
      <tr>
        <td id="L71" class="blob-num js-line-number" data-line-number="71"></td>
        <td id="LC71" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span> (RooAbsReal *theta = (RooAbsReal*) iterTheta.<span class="pl-c1">Next</span>(); theta != <span class="pl-c1">0</span>; theta = (RooAbsReal*) iterTheta.<span class="pl-c1">Next</span>(), ++logKappas) {</td>
      </tr>
      <tr>
        <td id="L72" class="blob-num js-line-number" data-line-number="72"></td>
        <td id="LC72" class="blob-code blob-code-inner js-file-line">            <span class="pl-k">double</span> x = theta-&gt;<span class="pl-c1">getVal</span>();</td>
      </tr>
      <tr>
        <td id="L73" class="blob-num js-line-number" data-line-number="73"></td>
        <td id="LC73" class="blob-code blob-code-inner js-file-line">            logVal +=  x * <span class="pl-c1">logKappaForX</span>(x, *logKappas);</td>
      </tr>
      <tr>
        <td id="L74" class="blob-num js-line-number" data-line-number="74"></td>
        <td id="LC74" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L75" class="blob-num js-line-number" data-line-number="75"></td>
        <td id="LC75" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L76" class="blob-num js-line-number" data-line-number="76"></td>
        <td id="LC76" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">double</span> norm = nominalValue_;</td>
      </tr>
      <tr>
        <td id="L77" class="blob-num js-line-number" data-line-number="77"></td>
        <td id="LC77" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (logVal) norm *= <span class="pl-c1">std::exp</span>(logVal);</td>
      </tr>
      <tr>
        <td id="L78" class="blob-num js-line-number" data-line-number="78"></td>
        <td id="LC78" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (otherFactorList_.<span class="pl-c1">getSize</span>()) {</td>
      </tr>
      <tr>
        <td id="L79" class="blob-num js-line-number" data-line-number="79"></td>
        <td id="LC79" class="blob-code blob-code-inner js-file-line">        RooLinkedListIter iterOther = otherFactorList_.<span class="pl-c1">iterator</span>();</td>
      </tr>
      <tr>
        <td id="L80" class="blob-num js-line-number" data-line-number="80"></td>
        <td id="LC80" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">for</span> (RooAbsReal *fact = (RooAbsReal*) iterOther.<span class="pl-c1">Next</span>(); fact != <span class="pl-c1">0</span>; fact = (RooAbsReal*) iterOther.<span class="pl-c1">Next</span>()) {</td>
      </tr>
      <tr>
        <td id="L81" class="blob-num js-line-number" data-line-number="81"></td>
        <td id="LC81" class="blob-code blob-code-inner js-file-line">            norm *= fact-&gt;<span class="pl-c1">getVal</span>();</td>
      </tr>
      <tr>
        <td id="L82" class="blob-num js-line-number" data-line-number="82"></td>
        <td id="LC82" class="blob-code blob-code-inner js-file-line">        }</td>
      </tr>
      <tr>
        <td id="L83" class="blob-num js-line-number" data-line-number="83"></td>
        <td id="LC83" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L84" class="blob-num js-line-number" data-line-number="84"></td>
        <td id="LC84" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> norm;</td>
      </tr>
      <tr>
        <td id="L85" class="blob-num js-line-number" data-line-number="85"></td>
        <td id="LC85" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L86" class="blob-num js-line-number" data-line-number="86"></td>
        <td id="LC86" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L87" class="blob-num js-line-number" data-line-number="87"></td>
        <td id="LC87" class="blob-code blob-code-inner js-file-line">Double_t <span class="pl-en">ProcessNormalization::logKappaForX</span>(<span class="pl-k">double</span> x, <span class="pl-k">const</span> std::pair&lt;<span class="pl-k">double</span>,<span class="pl-k">double</span>&gt; &amp;logKappas) <span class="pl-k">const</span> {</td>
      </tr>
      <tr>
        <td id="L88" class="blob-num js-line-number" data-line-number="88"></td>
        <td id="LC88" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">if</span> (<span class="pl-c1">fabs</span>(x) &gt;= <span class="pl-c1">0.5</span>) <span class="pl-k">return</span> (x &gt;= <span class="pl-c1">0</span> ? logKappas.<span class="pl-smi">second</span> : -logKappas.<span class="pl-smi">first</span>);</td>
      </tr>
      <tr>
        <td id="L89" class="blob-num js-line-number" data-line-number="89"></td>
        <td id="LC89" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> interpolate between log(kappaHigh) and -log(kappaLow) </span></td>
      </tr>
      <tr>
        <td id="L90" class="blob-num js-line-number" data-line-number="90"></td>
        <td id="LC90" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>    logKappa(x) = avg + halfdiff * h(2x)</span></td>
      </tr>
      <tr>
        <td id="L91" class="blob-num js-line-number" data-line-number="91"></td>
        <td id="LC91" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> where h(x) is the 3th order polynomial</span></td>
      </tr>
      <tr>
        <td id="L92" class="blob-num js-line-number" data-line-number="92"></td>
        <td id="LC92" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>    h(x) = (3 x^5 - 10 x^3 + 15 x)/8;</span></td>
      </tr>
      <tr>
        <td id="L93" class="blob-num js-line-number" data-line-number="93"></td>
        <td id="LC93" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> chosen so that h(x) satisfies the following:</span></td>
      </tr>
      <tr>
        <td id="L94" class="blob-num js-line-number" data-line-number="94"></td>
        <td id="LC94" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>      h (+/-1) = +/-1 </span></td>
      </tr>
      <tr>
        <td id="L95" class="blob-num js-line-number" data-line-number="95"></td>
        <td id="LC95" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>      h&#39;(+/-1) = 0</span></td>
      </tr>
      <tr>
        <td id="L96" class="blob-num js-line-number" data-line-number="96"></td>
        <td id="LC96" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>      h&quot;(+/-1) = 0</span></td>
      </tr>
      <tr>
        <td id="L97" class="blob-num js-line-number" data-line-number="97"></td>
        <td id="LC97" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">double</span> logKhi =  logKappas.<span class="pl-smi">second</span>;</td>
      </tr>
      <tr>
        <td id="L98" class="blob-num js-line-number" data-line-number="98"></td>
        <td id="LC98" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">double</span> logKlo = -logKappas.<span class="pl-smi">first</span>;</td>
      </tr>
      <tr>
        <td id="L99" class="blob-num js-line-number" data-line-number="99"></td>
        <td id="LC99" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">double</span> avg = <span class="pl-c1">0.5</span>*(logKhi + logKlo), halfdiff = <span class="pl-c1">0.5</span>*(logKhi - logKlo);</td>
      </tr>
      <tr>
        <td id="L100" class="blob-num js-line-number" data-line-number="100"></td>
        <td id="LC100" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">double</span> twox = x+x, twox2 = twox*twox;</td>
      </tr>
      <tr>
        <td id="L101" class="blob-num js-line-number" data-line-number="101"></td>
        <td id="LC101" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">double</span> alpha = <span class="pl-c1">0.125</span> * twox * (twox2 * (<span class="pl-c1">3</span>*twox2 - <span class="pl-c1">10</span>.) + <span class="pl-c1">15</span>.);</td>
      </tr>
      <tr>
        <td id="L102" class="blob-num js-line-number" data-line-number="102"></td>
        <td id="LC102" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">double</span> ret = avg + alpha*halfdiff;</td>
      </tr>
      <tr>
        <td id="L103" class="blob-num js-line-number" data-line-number="103"></td>
        <td id="LC103" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">return</span> ret;</td>
      </tr>
      <tr>
        <td id="L104" class="blob-num js-line-number" data-line-number="104"></td>
        <td id="LC104" class="blob-code blob-code-inner js-file-line">} </td>
      </tr>
      <tr>
        <td id="L105" class="blob-num js-line-number" data-line-number="105"></td>
        <td id="LC105" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L106" class="blob-num js-line-number" data-line-number="106"></td>
        <td id="LC106" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">ProcessNormalization::dump</span>() <span class="pl-k">const</span> {</td>
      </tr>
      <tr>
        <td id="L107" class="blob-num js-line-number" data-line-number="107"></td>
        <td id="LC107" class="blob-code blob-code-inner js-file-line">    std::cout &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>Dumping ProcessNormalization <span class="pl-pds">&quot;</span></span> &lt;&lt; <span class="pl-c1">GetName</span>() &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span> @ <span class="pl-pds">&quot;</span></span> &lt;&lt; (<span class="pl-k">void</span>*)<span class="pl-c1">this</span> &lt;&lt; std::endl;</td>
      </tr>
      <tr>
        <td id="L108" class="blob-num js-line-number" data-line-number="108"></td>
        <td id="LC108" class="blob-code blob-code-inner js-file-line">    std::cout &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span>nominal value: <span class="pl-pds">&quot;</span></span> &lt;&lt; nominalValue_ &lt;&lt; std::endl;</td>
      </tr>
      <tr>
        <td id="L109" class="blob-num js-line-number" data-line-number="109"></td>
        <td id="LC109" class="blob-code blob-code-inner js-file-line">    std::cout &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span>log-normals (<span class="pl-pds">&quot;</span></span> &lt;&lt; logKappa_.<span class="pl-c1">size</span>() &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>):<span class="pl-pds">&quot;</span></span>  &lt;&lt; std::endl;</td>
      </tr>
      <tr>
        <td id="L110" class="blob-num js-line-number" data-line-number="110"></td>
        <td id="LC110" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span> (<span class="pl-k">unsigned</span> <span class="pl-k">int</span> i = <span class="pl-c1">0</span>; i &lt; logKappa_.<span class="pl-c1">size</span>(); ++i) {</td>
      </tr>
      <tr>
        <td id="L111" class="blob-num js-line-number" data-line-number="111"></td>
        <td id="LC111" class="blob-code blob-code-inner js-file-line">        std::cout &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t\t</span> kappa = <span class="pl-pds">&quot;</span></span> &lt;&lt; <span class="pl-c1">exp</span>(logKappa_[i]) &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>, logKappa = <span class="pl-pds">&quot;</span></span> &lt;&lt; logKappa_[i] &lt;&lt; </td>
      </tr>
      <tr>
        <td id="L112" class="blob-num js-line-number" data-line-number="112"></td>
        <td id="LC112" class="blob-code blob-code-inner js-file-line">                     <span class="pl-s"><span class="pl-pds">&quot;</span>, theta = <span class="pl-pds">&quot;</span></span> &lt;&lt; thetaList_.<span class="pl-c1">at</span>(i)-&gt;<span class="pl-c1">GetName</span>() &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span> = <span class="pl-pds">&quot;</span></span> &lt;&lt; ((RooAbsReal*)thetaList_.<span class="pl-c1">at</span>(i))-&gt;<span class="pl-c1">getVal</span>() &lt;&lt; std::endl;</td>
      </tr>
      <tr>
        <td id="L113" class="blob-num js-line-number" data-line-number="113"></td>
        <td id="LC113" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L114" class="blob-num js-line-number" data-line-number="114"></td>
        <td id="LC114" class="blob-code blob-code-inner js-file-line">    std::cout &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span>asymm log-normals (<span class="pl-pds">&quot;</span></span> &lt;&lt; logAsymmKappa_.<span class="pl-c1">size</span>() &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>):<span class="pl-pds">&quot;</span></span>  &lt;&lt; std::endl;</td>
      </tr>
      <tr>
        <td id="L115" class="blob-num js-line-number" data-line-number="115"></td>
        <td id="LC115" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span> (<span class="pl-k">unsigned</span> <span class="pl-k">int</span> i = <span class="pl-c1">0</span>; i &lt; logAsymmKappa_.<span class="pl-c1">size</span>(); ++i) {</td>
      </tr>
      <tr>
        <td id="L116" class="blob-num js-line-number" data-line-number="116"></td>
        <td id="LC116" class="blob-code blob-code-inner js-file-line">        std::cout &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t\t</span> kappaLo = <span class="pl-pds">&quot;</span></span> &lt;&lt; <span class="pl-c1">exp</span>(logAsymmKappa_[i].<span class="pl-smi">first</span>) &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>, logKappaLo = <span class="pl-pds">&quot;</span></span> &lt;&lt; logAsymmKappa_[i].<span class="pl-smi">first</span> &lt;&lt; </td>
      </tr>
      <tr>
        <td id="L117" class="blob-num js-line-number" data-line-number="117"></td>
        <td id="LC117" class="blob-code blob-code-inner js-file-line">                     <span class="pl-s"><span class="pl-pds">&quot;</span>, kappaHi = <span class="pl-pds">&quot;</span></span> &lt;&lt; <span class="pl-c1">exp</span>(logAsymmKappa_[i].<span class="pl-smi">second</span>) &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>, logKappaHi = <span class="pl-pds">&quot;</span></span> &lt;&lt; logAsymmKappa_[i].<span class="pl-smi">second</span> &lt;&lt; </td>
      </tr>
      <tr>
        <td id="L118" class="blob-num js-line-number" data-line-number="118"></td>
        <td id="LC118" class="blob-code blob-code-inner js-file-line">                     <span class="pl-s"><span class="pl-pds">&quot;</span>, theta = <span class="pl-pds">&quot;</span></span> &lt;&lt; thetaList_.<span class="pl-c1">at</span>(i)-&gt;<span class="pl-c1">GetName</span>() &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span> = <span class="pl-pds">&quot;</span></span> &lt;&lt; ((RooAbsReal*)thetaList_.<span class="pl-c1">at</span>(i))-&gt;<span class="pl-c1">getVal</span>() &lt;&lt; std::endl;</td>
      </tr>
      <tr>
        <td id="L119" class="blob-num js-line-number" data-line-number="119"></td>
        <td id="LC119" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L120" class="blob-num js-line-number" data-line-number="120"></td>
        <td id="LC120" class="blob-code blob-code-inner js-file-line">    std::cout &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t</span>other terms (<span class="pl-pds">&quot;</span></span> &lt;&lt; otherFactorList_.<span class="pl-c1">getSize</span>() &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span>):<span class="pl-pds">&quot;</span></span>  &lt;&lt; std::endl;</td>
      </tr>
      <tr>
        <td id="L121" class="blob-num js-line-number" data-line-number="121"></td>
        <td id="LC121" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">for</span> (<span class="pl-k">int</span> i = <span class="pl-c1">0</span>; i &lt; otherFactorList_.<span class="pl-c1">getSize</span>(); ++i) {  </td>
      </tr>
      <tr>
        <td id="L122" class="blob-num js-line-number" data-line-number="122"></td>
        <td id="LC122" class="blob-code blob-code-inner js-file-line">        std::cout &lt;&lt; <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t\t</span> term <span class="pl-pds">&quot;</span></span> &lt;&lt; otherFactorList_.<span class="pl-c1">at</span>(i)-&gt;<span class="pl-c1">GetName</span>() &lt;&lt;</td>
      </tr>
      <tr>
        <td id="L123" class="blob-num js-line-number" data-line-number="123"></td>
        <td id="LC123" class="blob-code blob-code-inner js-file-line">                     <span class="pl-s"><span class="pl-pds">&quot;</span> (class <span class="pl-pds">&quot;</span></span> &lt;&lt; otherFactorList_.<span class="pl-c1">at</span>(i)-&gt;<span class="pl-c1">ClassName</span>() &lt;&lt; </td>
      </tr>
      <tr>
        <td id="L124" class="blob-num js-line-number" data-line-number="124"></td>
        <td id="LC124" class="blob-code blob-code-inner js-file-line">                     <span class="pl-s"><span class="pl-pds">&quot;</span>), value = <span class="pl-pds">&quot;</span></span> &lt;&lt; ((RooAbsReal*)otherFactorList_.<span class="pl-c1">at</span>(i))-&gt;<span class="pl-c1">getVal</span>() &lt;&lt; std::endl;</td>
      </tr>
      <tr>
        <td id="L125" class="blob-num js-line-number" data-line-number="125"></td>
        <td id="LC125" class="blob-code blob-code-inner js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L126" class="blob-num js-line-number" data-line-number="126"></td>
        <td id="LC126" class="blob-code blob-code-inner js-file-line">    std::cout &lt;&lt; std::endl;</td>
      </tr>
      <tr>
        <td id="L127" class="blob-num js-line-number" data-line-number="127"></td>
        <td id="LC127" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L128" class="blob-num js-line-number" data-line-number="128"></td>
        <td id="LC128" class="blob-code blob-code-inner js-file-line"><span class="pl-en">ClassImp</span>(ProcessNormalization)</td>
      </tr>
</table>

  </div>

</div>

<button type="button" data-facebox="#jump-to-line" data-facebox-class="linejump" data-hotkey="l" class="d-none">Jump to Line</button>
<div id="jump-to-line" style="display:none">
  <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="" class="js-jump-to-line-form" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
    <input class="form-control linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" aria-label="Jump to line" autofocus>
    <button type="submit" class="btn">Go</button>
</form></div>

  </div>
  <div class="modal-backdrop js-touch-events"></div>
</div>


    </div>
  </div>

    </div>

        <div class="container site-footer-container">
  <div class="site-footer" role="contentinfo">
    <ul class="site-footer-links float-right">
        <li><a href="https://github.com/contact" data-ga-click="Footer, go to contact, text:contact">Contact GitHub</a></li>
      <li><a href="https://developer.github.com" data-ga-click="Footer, go to api, text:api">API</a></li>
      <li><a href="https://training.github.com" data-ga-click="Footer, go to training, text:training">Training</a></li>
      <li><a href="https://shop.github.com" data-ga-click="Footer, go to shop, text:shop">Shop</a></li>
        <li><a href="https://github.com/blog" data-ga-click="Footer, go to blog, text:blog">Blog</a></li>
        <li><a href="https://github.com/about" data-ga-click="Footer, go to about, text:about">About</a></li>

    </ul>

    <a href="https://github.com" aria-label="Homepage" class="site-footer-mark" title="GitHub">
      <svg aria-hidden="true" class="octicon octicon-mark-github" height="24" version="1.1" viewBox="0 0 16 16" width="24"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0 0 16 8c0-4.42-3.58-8-8-8z"/></svg>
</a>
    <ul class="site-footer-links">
      <li>&copy; 2017 <span title="0.21023s from github-fe-c5e6852.cp1-iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="https://github.com/site/terms" data-ga-click="Footer, go to terms, text:terms">Terms</a></li>
        <li><a href="https://github.com/site/privacy" data-ga-click="Footer, go to privacy, text:privacy">Privacy</a></li>
        <li><a href="https://github.com/security" data-ga-click="Footer, go to security, text:security">Security</a></li>
        <li><a href="https://status.github.com/" data-ga-click="Footer, go to status, text:status">Status</a></li>
        <li><a href="https://help.github.com" data-ga-click="Footer, go to help, text:help">Help</a></li>
    </ul>
  </div>
</div>



    

    <div id="ajax-error-message" class="ajax-error-message flash flash-error">
      <svg aria-hidden="true" class="octicon octicon-alert" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.865 1.52c-.18-.31-.51-.5-.87-.5s-.69.19-.87.5L.275 13.5c-.18.31-.18.69 0 1 .19.31.52.5.87.5h13.7c.36 0 .69-.19.86-.5.17-.31.18-.69.01-1L8.865 1.52zM8.995 13h-2v-2h2v2zm0-3h-2V6h2v4z"/></svg>
      <button type="button" class="flash-close js-flash-close js-ajax-error-dismiss" aria-label="Dismiss error">
        <svg aria-hidden="true" class="octicon octicon-x" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
      </button>
      You can't perform that action at this time.
    </div>


      <script crossorigin="anonymous" src="https://assets-cdn.github.com/assets/compat-8e19569aacd39e737a14c8515582825f3c90d1794c0e5539f9b525b8eb8b5a8e.js"></script>
      <script crossorigin="anonymous" src="https://assets-cdn.github.com/assets/frameworks-d23e32e482112ba5e3ea9bd8dc7e555680116a74e002746ac91f41a4e5875a9b.js"></script>
      <script async="async" crossorigin="anonymous" src="https://assets-cdn.github.com/assets/github-aab970a9f4a6e9067c2596fa49c58764100df6194dfaa672a3d4dbb4127ddcb3.js"></script>
      
      
      
      
    <div class="js-stale-session-flash stale-session-flash flash flash-warn flash-banner d-none">
      <svg aria-hidden="true" class="octicon octicon-alert" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.865 1.52c-.18-.31-.51-.5-.87-.5s-.69.19-.87.5L.275 13.5c-.18.31-.18.69 0 1 .19.31.52.5.87.5h13.7c.36 0 .69-.19.86-.5.17-.31.18-.69.01-1L8.865 1.52zM8.995 13h-2v-2h2v2zm0-3h-2V6h2v4z"/></svg>
      <span class="signed-in-tab-flash">You signed in with another tab or window. <a href="">Reload</a> to refresh your session.</span>
      <span class="signed-out-tab-flash">You signed out in another tab or window. <a href="">Reload</a> to refresh your session.</span>
    </div>
    <div class="facebox" id="facebox" style="display:none;">
  <div class="facebox-popup">
    <div class="facebox-content" role="dialog" aria-labelledby="facebox-header" aria-describedby="facebox-description">
    </div>
    <button type="button" class="facebox-close js-facebox-close" aria-label="Close modal">
      <svg aria-hidden="true" class="octicon octicon-x" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
    </button>
  </div>
</div>

  </body>
</html>

