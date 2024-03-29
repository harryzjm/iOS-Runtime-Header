//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface WebCoreNSURLSessionTaskTransactionMetrics : NSObject
{
    struct NetworkLoadMetrics _metrics;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)multipath;
- (_Bool)constrained;
- (_Bool)expensive;
- (_Bool)cellular;
@property(readonly) int _privacyStance; // @dynamic _privacyStance;
@property(readonly, getter=isReusedConnection) _Bool reusedConnection; // @dynamic reusedConnection;
@property(readonly, copy) NSString *networkProtocolName; // @dynamic networkProtocolName;
@property(readonly, copy) NSDate *responseEndDate; // @dynamic responseEndDate;
@property(readonly, copy) NSDate *responseStartDate; // @dynamic responseStartDate;
@property(readonly, copy) NSDate *requestStartDate; // @dynamic requestStartDate;
@property(readonly, copy) NSDate *connectEndDate; // @dynamic connectEndDate;
@property(readonly, copy) NSDate *secureConnectionStartDate; // @dynamic secureConnectionStartDate;
@property(readonly, copy) NSDate *connectStartDate; // @dynamic connectStartDate;
@property(readonly, copy) NSDate *domainLookupEndDate; // @dynamic domainLookupEndDate;
@property(readonly, copy) NSDate *domainLookupStartDate; // @dynamic domainLookupStartDate;
@property(readonly, copy) NSDate *fetchStartDate; // @dynamic fetchStartDate;
- (void)dealloc;
- (id)_initWithMetrics:(void *)arg1;

// Remaining properties
@property(readonly, getter=isCellular) _Bool cellular; // @dynamic cellular;
@property(readonly, getter=isConstrained) _Bool constrained; // @dynamic constrained;
@property(readonly, getter=isExpensive) _Bool expensive; // @dynamic expensive;
@property(readonly, getter=isMultipath) _Bool multipath; // @dynamic multipath;

@end

