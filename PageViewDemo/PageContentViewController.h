//
//  PageContentViewController.h
//  PageViewDemo
//
//  Created by kiwik on 7/2/15.
//  Copyright (c) 2015 Kiwik. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PageContentViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;

@property(assign, nonatomic) NSUInteger pageIndex;
@property(copy, nonatomic) NSString *titleText;
@property(copy, nonatomic) NSString *imageFile;

@end
