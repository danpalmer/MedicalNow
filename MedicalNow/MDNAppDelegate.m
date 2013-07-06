//
//  MDNAppDelegate.m
//  MedicalNow
//
//  Created by Dan Palmer on 06/07/2013.
//  Copyright (c) 2013 Dan Palmer. All rights reserved.
//

#import "MDNAppDelegate.h"

#import "MDNMasterViewController.h"
#import <MagicalRecord/CoreData+MagicalRecord.h>

@implementation MDNAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
	[MagicalRecord setupAutoMigratingCoreDataStack];
	return YES;
}

- (void)applicationWillTerminate:(UIApplication *)application {
	[MagicalRecord cleanUp];
}

- (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken {
	
}

- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler {
	
}

- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo {
	
}

@end
