//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEORequestCounterProtocol-Protocol.h>

@class GEORequestCounterPersistence, NSString;

__attribute__((visibility("hidden")))
@interface GEORequestCounterLocalProxy : NSObject <GEORequestCounterProtocol>
{
    GEORequestCounterPersistence *_persistence;
}

- (void).cxx_destruct;
- (void)incrementCountsForLogMsgCollection:(id)arg1 appId:(id)arg2 result:(unsigned char)arg3 xmitBytes:(unsigned long long)arg4 recvBytes:(unsigned long long)arg5;
- (void)fetchTrafficProbeCollectionsStartingFrom:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)recordTrafficProbeCollectionAt:(id)arg1 tripId:(id)arg2 locationCount:(int)arg3 result:(unsigned char)arg4;
- (void)clearCounters;
- (void)startPowerLogSessionWithName:(id)arg1;
- (void)readRequestsPerAppSince:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)incrementAtTime:(id)arg1 app:(id)arg2 requestType:(unsigned char)arg3 result:(unsigned char)arg4 xmitBytes:(unsigned long long)arg5 recvBytes:(unsigned long long)arg6;
- (void)incrementForApp:(id)arg1 requestType:(unsigned char)arg2 result:(unsigned char)arg3 xmitBytes:(unsigned long long)arg4 recvBytes:(unsigned long long)arg5;
@property(nonatomic) _Bool countersEnabled;
- (id)initWithPersistence:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

