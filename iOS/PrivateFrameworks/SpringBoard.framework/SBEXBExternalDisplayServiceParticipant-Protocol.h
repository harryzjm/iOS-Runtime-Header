//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class FBSDisplayConfiguration;

@protocol SBEXBExternalDisplayServiceParticipant <NSObject>
@property(readonly, nonatomic, getter=isExtendedDisplayCapable) _Bool extendedDisplayCapable;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@end

