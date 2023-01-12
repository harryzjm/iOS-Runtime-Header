//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NSObject-Protocol.h>

@class HFActionBuilder, HFMediaPlaybackActionBuilder, HMHome, NAFuture, NSArray;

@protocol HFActionSetBuilderProtocol <NSObject>
- (NAFuture *)deleteActionSet;
- (void)removeAllActions;
- (void)removeAction:(HFActionBuilder *)arg1;
- (void)updateAction:(HFActionBuilder *)arg1;
- (void)addAction:(HFActionBuilder *)arg1;
@property(nonatomic, readonly) HFMediaPlaybackActionBuilder *mediaAction;
- (_Bool)isAffectedByEndEvents;
@property(nonatomic, readonly) _Bool requiresDeviceUnlock;
@property(nonatomic, readonly) NSArray *actions;
@property(nonatomic, readonly) HMHome *home;

// Remaining properties
@property(nonatomic, readonly) _Bool affectedByEndEvents;
@end

