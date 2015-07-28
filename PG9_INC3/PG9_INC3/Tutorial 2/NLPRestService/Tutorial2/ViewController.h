//
//  ViewController.h
//  Tutorial2
//
//  Created by Pradyumna Doddala on 20/05/15.
//  Copyright (c) 2015 Pradyumna Doddala. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (strong, nonatomic) IBOutlet UITextField *sentenceTextField;
@property (strong, nonatomic) IBOutlet UITableView *responseTableView;

@end

