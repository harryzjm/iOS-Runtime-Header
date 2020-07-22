//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class NSString;

@interface HMDHomeInviteLogEvent <HMDAWDLogEvent>
{
    int _stage;
    int _responseType;
}

+ (id)uuid;
+ (id)homeInvitationWithStage:(int)arg1 responseType:(int)arg2;
+ (id)homeInvitationWithStage:(int)arg1;
@property(readonly, nonatomic) int responseType; // @synthesize responseType=_responseType;
@property(readonly, nonatomic) int stage; // @synthesize stage=_stage;
- (id)initInvitationWithStage:(int)arg1 responseType:(int)arg2;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
