//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFTimer.h>

@class NSArray, NSSet, NSString;

@interface HMDCameraSnapshotNotificationTimer : HMFTimer
{
    NSSet *_changedCharacteristics;
    NSString *_sessionID;
    NSArray *_postedBulletins;
}

@property(retain, nonatomic) NSArray *postedBulletins; // @synthesize postedBulletins=_postedBulletins;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) NSSet *changedCharacteristics; // @synthesize changedCharacteristics=_changedCharacteristics;
- (void).cxx_destruct;
- (id)initWithCameraSessionID:(id)arg1 changedCharacteristics:(id)arg2 timeInterval:(double)arg3;

@end

