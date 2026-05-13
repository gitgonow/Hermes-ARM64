//
//  Growler.h
//  Hermes

@class Song;

#define GROWLER [HMSAppDelegate growler]

@interface Growler : NSObject<NSUserNotificationCenterDelegate>

- (void) growl:(Song*)song withImage:(NSData*)image isNew:(BOOL) n;

@end
