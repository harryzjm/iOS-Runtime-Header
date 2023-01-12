//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@class NSArray, NSString, SBFTraitsSettingsActuationContext;

@protocol SBFTraitsArbiterUpdateContextBuilding <NSObject>
@property(copy, nonatomic) SBFTraitsSettingsActuationContext *orientationActuationContext;
@property(nonatomic) _Bool forceOrientationResolution;
@property(copy, nonatomic) NSArray *requestingParticipantsUniqueIdentifiers;
@property(copy, nonatomic) NSString *reason;
@end
