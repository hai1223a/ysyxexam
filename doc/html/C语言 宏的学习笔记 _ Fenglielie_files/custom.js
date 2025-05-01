// var OriginTitle = document.title;
// var titleTime;
// document.addEventListener('visibilitychange', function () {
//     if (document.hidden) {
//         // $('[rel="icon"]').attr('href', "/joke.ico");
//         document.title = ' see you ~ ';
//         clearTimeout(titleTime);
//     }
//     else {
//         // $('[rel="icon"]').attr('href', "/favicon.ico");
//         // document.title = '被发现了🐣～';
//         // titleTime = setTimeout(function () {
//         //     document.title = OriginTitle;
//         // }, 2000);
//         document.title = OriginTitle;
//     }
// });

document.querySelectorAll('.avatar-img').forEach(function (image) {
    // 点击转到URL
    image.addEventListener('click', function () {
        window.location.href = 'https://fenglielie.top';
    });

});
