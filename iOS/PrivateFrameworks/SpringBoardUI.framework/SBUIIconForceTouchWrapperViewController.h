//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSMutableArray, UIView;

@interface SBUIIconForceTouchWrapperViewController : UIViewController
{
    UIView *_containerView;
    NSMutableArray *_mutableLayoutConstraints;
    UIViewController *_childViewController;
    double _contentAlpha;
    struct CGSize _contentNativeSize;
}

@property(nonatomic) struct CGSize contentNativeSize; // @synthesize contentNativeSize=_contentNativeSize;
@property(nonatomic) double contentAlpha; // @synthesize contentAlpha=_contentAlpha;
@property(readonly, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
- (void).cxx_destruct;
- (void)_updateChildViewTransform;
- (void)_updateLayoutConstraints;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithChildViewController:(id)arg1;

@end

