#import "UAEvent.h"

@interface UAEvent ()

@property (nonatomic, copy) NSString *time;
@property (nonatomic, copy) NSString *eventId;
@property (nonatomic, strong) NSDictionary *data;

+ (id)getSessionValueForKey:(NSString *)key;
@end
