//
//  MDNAppDelegate.h
//  MedicalNow
//
//  Created by Dan Palmer on 06/07/2013.
//  Copyright (c) 2013 Dan Palmer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MDNAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end