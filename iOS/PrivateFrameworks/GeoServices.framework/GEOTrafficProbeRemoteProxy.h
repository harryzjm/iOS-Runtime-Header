//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOTrafficProbeProxy-Protocol.h>

@interface GEOTrafficProbeRemoteProxy : NSObject <GEOTrafficProbeProxy>
{
}

- (void)reportBatchTrafficProbes:(id)arg1 auditToken:(id)arg2;
- (void)reportRealtimeTrafficProbes:(id)arg1 probeCount:(unsigned long long)arg2 recvTime:(id)arg3 forTripId:(id)arg4 auditToken:(id)arg5;
- (void)_reportTrafficProbesWithMessageDict:(id)arg1;

@end

