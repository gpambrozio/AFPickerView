//
//  ViewController.h
//  PickerView
//
//  Created by Fraerman Arkady on 24.11.11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AFPickerView.h"

@interface ViewController : UIViewController <AFPickerViewDataSource, AFPickerViewDelegate>
{
    AFPickerView *defaultPickerView;
    AFPickerView *daysPickerView;
    NSArray *daysData;
}

@property (strong, nonatomic) IBOutlet UILabel *numberLabel;
@property (strong, nonatomic) IBOutlet UILabel *dayLabel;

@end
