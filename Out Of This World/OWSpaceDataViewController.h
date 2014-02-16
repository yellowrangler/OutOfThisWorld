//
//  OWSpaceDataViewController.h
//  Out Of This World
//
//  Created by Tarrant Cutler on 2/13/14.
//  Copyright (c) 2014 Tarrant Cutler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWSpaceObject.h"

@interface OWSpaceDataViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) OWSpaceObject *spaceObject;
@end
