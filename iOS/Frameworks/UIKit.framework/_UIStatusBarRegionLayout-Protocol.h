//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, UIView, _UIStatusBarRegion;

@protocol _UIStatusBarRegionLayout <NSObject>
@property(readonly, nonatomic) _Bool fitsAllItems;
@property(copy, nonatomic) NSArray *displayItems;
@property(nonatomic) __weak _UIStatusBarRegion *region;
- (void)invalidate;

@optional
@property(readonly, nonatomic) UIView *containerView;
- (_Bool)mayFitDisplayItems:(NSArray *)arg1;
@end

