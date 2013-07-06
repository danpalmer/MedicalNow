//
//  MDNDetailViewController.h
//  MedicalNow
//
//  Created by Dan Palmer on 06/07/2013.
//  Copyright (c) 2013 Dan Palmer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MDNDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
