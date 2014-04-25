(function( $ ){
	$.fn.sideMove = function() {
		this.animate({width: '-='+'#sidebar.width'});
	};
};
	
})(jQuery);

exports.sideMove = sideMove;