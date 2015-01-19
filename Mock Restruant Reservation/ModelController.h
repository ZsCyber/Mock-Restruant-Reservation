//
//  ModelController.h
//  Mock Restruant Reservation
//
//  Created by Zachary Waller on 1/18/15.
//  Copyright (c) 2015 Zachary Waller. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

