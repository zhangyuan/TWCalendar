//
//  EventDetailViewController.h
//  TWCalendar
//
//  Created by zhangyuan on 3/30/15.
//  Copyright (c) 2015 Ev Cheung. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVOSCloud/AVOSCloud.h>

@interface EventDetailViewController : UIViewController
@property (nonatomic, strong) AVObject* event;
@property (strong, nonatomic) IBOutlet UILabel *introductionLabel;
@property (strong, nonatomic) IBOutlet UILabel *titleLabel;
@end
