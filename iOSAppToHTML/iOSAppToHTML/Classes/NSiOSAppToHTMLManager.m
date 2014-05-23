//
//  NSiOSAppToHTMLManager.m
//  iPhoneHTTPServer
//
//  Created by adelskott on 20/05/2014.
//
//

#import "NSiOSAppToHTMLManager.h"

@implementation NSiOSAppToHTMLManager


+(NSiOSAppToHTMLManager *) sharedInstance{
    static NSiOSAppToHTMLManager *sharedMyManager = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedMyManager = [[self alloc] init];
    });
    return sharedMyManager;
}
-(id)init{
    self = [super init];
    if (self){
#warning todo init ...
    }
    return self;
}

/**
 *  active live HTML debug
 */
-(void)start{
    
}

/**
 *  stop live HTML debug
 */
-(void)stop{
    
}
@end
