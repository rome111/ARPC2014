//
//  DetailViewController.h
//  ARPC2014
//
//  Created by Elrae Epps on 9/3/14.
//  Copyright (c) 2014 Elrae Epps. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
