//
//  MDNMasterViewController.h
//  MedicalNow
//
//  Created by Dan Palmer on 06/07/2013.
//  Copyright (c) 2013 Dan Palmer. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MDNMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
