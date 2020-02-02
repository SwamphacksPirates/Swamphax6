!function($){
  
    var defaults = {
          animation: "dissolve",
          separator: "|",
          speed: 1
      };
      
      $.fx.step.textShadowBlur = function(fx) {
      $(fx.elem).prop('textShadowBlur', fx.now).css({textShadow: '0 0 ' + Math.floor(fx.now) + 'px black'});
    };
      
    $.fn.textrotator = function(options){
      var settings = $.extend({}, defaults, options);
      
      return this.each(function(){
        var el = $(this)
        var array = [];
        $.each(el.text().split(settings.separator), function(key, value) { 
          array.push(value); 
        });
        el.text(array[0]);
        
        // animation option
        var rotate = function() {
          switch (settings.animation) { 
            case 'dissolve':
              el.animate({
                textShadowBlur:20,
                opacity: 0
              }, 0 , function() {
                index = $.inArray(el.text(), array)
                if((index + 1) == array.length) index = -1
                el.text(array[index + 1]).animate({
                  textShadowBlur:20,
                  opacity: 1
                }, 0 );
              });
            break;
            
            case 'flip':
              if(el.find(".back").length > 0) {
                el.html(el.find(".back").html())
              }
          }
        };
        setInterval(rotate, settings.speed);
      });
    }
    
  }(window.jQuery);
  
