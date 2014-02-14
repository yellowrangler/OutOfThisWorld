//
//  OWOutOfThisWorldViewController.h
//  Out Of This World
//
//  Created by Tarrant Cutler on 2/11/14.
//  Copyright (c) 2014 Tarrant Cutler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OWOutOfThisWorldViewController : UITableViewController <UIScrollViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) NSMutableArray *planets;

@end
