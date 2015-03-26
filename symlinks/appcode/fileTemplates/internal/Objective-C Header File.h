#parse("C File Header.h")
@import Foundation;

@interface ${NAME} : NSObject #if ($PUT_IVARS_TO_IMPLEMENTATION != "true"){

}
#end
@end