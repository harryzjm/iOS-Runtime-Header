//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class NSString;

@interface HMDSoftwareUpdateStartedEvent <HMDAWDLogEvent>
{
    _Bool _automaticUpdateEnabled;
}

+ (id)eventUpdateStartedWithAutomaticUpdateEnabled:(_Bool)arg1;
+ (id)uuid;
+ (void)initialize;
@property(nonatomic, getter=isAutomaticUpdateEnabled) _Bool automaticUpdateEnabled; // @synthesize automaticUpdateEnabled=_automaticUpdateEnabled;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

