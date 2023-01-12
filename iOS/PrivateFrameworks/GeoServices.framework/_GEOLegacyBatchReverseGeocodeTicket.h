//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOAbstractMapServiceTicket.h"

@class GEOBatchRevGeocodeRequest;

__attribute__((visibility("hidden")))
@interface _GEOLegacyBatchReverseGeocodeTicket : GEOAbstractMapServiceTicket
{
    GEOBatchRevGeocodeRequest *_batchReverseGeocodeRequest;
    CDUnknownBlockType _locationShifter;
}

- (void).cxx_destruct;
- (_Bool)isEqualForHistoryToTicket:(id)arg1;
- (void)_batchReverseGeocodeWithRequest:(id)arg1 auditToken:(id)arg2 handler:(CDUnknownBlockType)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (void)cancel;
- (id)description;
- (id)initWithBatchReverseGeocodeRequest:(id)arg1 locationShifter:(CDUnknownBlockType)arg2 traits:(id)arg3;

@end

