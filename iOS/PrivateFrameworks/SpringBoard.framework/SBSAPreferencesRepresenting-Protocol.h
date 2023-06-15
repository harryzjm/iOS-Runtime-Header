//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSCopying-Protocol.h>
#import <SpringBoard/SBSAInterfaceElementAnimationDescribingPublic-Protocol.h>

@class NSArray, SBSAContext;

@protocol SBSAPreferencesRepresenting <NSCopying, SBSAInterfaceElementAnimationDescribingPublic>
@property(readonly, copy, nonatomic) NSArray *actions;
@property(readonly, copy, nonatomic) NSArray *timerDescriptions;
@property(readonly, copy, nonatomic) NSArray *gestureDescriptions;
- (void)finalizePreferencesForApplication:(SBSAContext *)arg1;
@end

