//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, PUToolbarViewModelChange, UIView, UIViewController;

@interface PUToolbarViewModel
{
    _Bool _needsToUpdateToolbarSize;
    NSArray *_toolbarItems;
    UIView *_accessoryView;
    double _accessoryViewTopOutset;
    double _accessoryViewMaximumHeight;
    double _maximumHeight;
    UIViewController *__viewController;
}

@property(nonatomic) _Bool needsToUpdateToolbarSize; // @synthesize needsToUpdateToolbarSize=_needsToUpdateToolbarSize;
@property(nonatomic, setter=_setViewController:) __weak UIViewController *_viewController; // @synthesize _viewController=__viewController;
@property(nonatomic) double maximumHeight; // @synthesize maximumHeight=_maximumHeight;
@property(nonatomic) double accessoryViewMaximumHeight; // @synthesize accessoryViewMaximumHeight=_accessoryViewMaximumHeight;
@property(nonatomic) double accessoryViewTopOutset; // @synthesize accessoryViewTopOutset=_accessoryViewTopOutset;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(copy, nonatomic) NSArray *toolbarItems; // @synthesize toolbarItems=_toolbarItems;
- (void).cxx_destruct;
- (void)didPublishChanges;
@property(readonly, nonatomic) PUToolbarViewModelChange *currentChange;
- (id)newViewModelChange;

@end

