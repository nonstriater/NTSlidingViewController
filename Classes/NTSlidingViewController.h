//
//  NTSlidingViewController.h
//  NTSlidingViewController
//
//  Created by nonstriater on 14-2-24.
//  Copyright (c) 2014年 xiaoran. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^NTTransitionCompleteBlock)(NSUInteger from,NSUInteger to);


@interface NTSlidingViewController : UINavigationController

@property(nonatomic,assign) NSUInteger selectedIndex;
@property(nonatomic,strong) UIColor *selectedLabelColor;
@property(nonatomic,strong) UIColor *unselectedLabelColor;
@property(nonatomic,strong) UIView *navigationBarView;
@property(nonatomic,strong,readonly) NSMutableArray *titles;//array of NSString
@property(nonatomic,strong,readonly) NSMutableArray *childControllers;//array of UIViewControllers


- (instancetype)initSlidingViewControllerWithTitle:(NSString *)title viewController:(UIViewController *)controller;
- (instancetype)initSlidingViewControllerWithTitlesAndControllers:(NSDictionary *)titlesAndControllers;
- (void)addControllerWithTitle:(NSString *)title viewController:(UIViewController *)controller;
+ (instancetype)slidingViewControllerWithTitlesAndControllers:(NSDictionary *)titlesAndControllers;

- (void)transitionToViewControllerAtIndex:(NSUInteger)index;
- (void)transitionToViewController:(UIViewController *)controller;
- (void)transitionToViewController:(UIViewController *)controller complteBlock:(NTTransitionCompleteBlock)block;


@end
