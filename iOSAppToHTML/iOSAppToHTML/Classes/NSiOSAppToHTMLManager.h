//
//  NSiOSAppToHTMLManager.h
//  iPhoneHTTPServer
//
//  Created by adelskott on 20/05/2014.
//
//

#import <Foundation/Foundation.h>

@interface NSiOSAppToHTMLManager : NSObject

/**
 *  Get the singleton instance
 *
 *  @return return the instance
 */
+(NSiOSAppToHTMLManager *) sharedInstance;



/**
 *  active live HTML debug
 */
-(void)start;

/**
 *  stop live HTML debug
 */
-(void)stop;

/**
 *  Enable HTML client to interact with the application by clicking on button or active gesture
 *
 *  @param active TRUE to active HTML interact with the application
 */
-(void)enableHTMLInteraction:(BOOL)active;


/**
 *  Optional
 *  use to override the default watcher on the main vindow
 *  it can be change in live to afin the debug
 *
 *  @param rootTree root view to create the downstream view
 */
-(void)rootTreeObserer:(UIView *)rootTree;

/**
 *  Optional
 *  Override the default ROOTID in the generated HTML
 *
 *  @param rootID html id
 */
-(void)rootHTMLID:(NSString *)rootID;


/**
 *  Optional 
 *  add in all class the prefix
 *
 *  @param prefix string in prefix
 */
-(void)classPrefix:(NSString *)prefix;

@end








