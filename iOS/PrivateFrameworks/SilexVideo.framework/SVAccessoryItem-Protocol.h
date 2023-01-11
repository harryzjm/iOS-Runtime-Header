//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SilexVideo/NSObject-Protocol.h>

@class UIView;
@protocol SVVideoAccessoryItemDisplayModeTransitioning;

@protocol SVAccessoryItem <NSObject>
@property(nonatomic) unsigned long long displayMode;
@property(readonly, nonatomic) UIView *view;

@optional
- (void)willTransitionToDisplayMode:(unsigned long long)arg1 withTransitionCoordinator:(id <SVVideoAccessoryItemDisplayModeTransitioning>)arg2;
@end

