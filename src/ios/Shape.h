#import "Brush.h"
#import "IHaveProperties.h"

@interface Shape : UIView <IHaveProperties>

@property Brush* stroke;
@property double strokeThickness;
@property NSString* strokeStartLineCap;
@property NSString* strokeEndLineCap;
@property Brush* fill;
@property NSString* strokeLineJoin;
@property double strokeMiterLimit;
@property NSString* stretch;

@end
