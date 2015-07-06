//
//  PageContentViewController.m
//  PageViewDemo
//
//  Created by kiwik on 7/2/15.
//  Copyright (c) 2015 Kiwik. All rights reserved.
//

#import "PageContentViewController.h"

@interface PageContentViewController ()

@end

@implementation PageContentViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.titleLabel.text=self.titleText;
    self.backgroundImageView.image=[UIImage imageNamed:self.imageFile];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
}

@end
