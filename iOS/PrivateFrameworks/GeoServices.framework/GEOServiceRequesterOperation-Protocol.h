//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOApplicationAuditToken, GEODataRequestThrottlerToken, GEOMapServiceTraits, PBRequest;
@protocol GEOServiceRequestConfiguring, GEOServiceRequesterOperation;

@protocol GEOServiceRequesterOperation <NSObject>
- (void)cancel;
- (void)start;
- (id <GEOServiceRequesterOperation>)initWithRequest:(PBRequest *)arg1 traits:(GEOMapServiceTraits *)arg2 auditToken:(GEOApplicationAuditToken *)arg3 config:(id <GEOServiceRequestConfiguring>)arg4 throttleToken:(GEODataRequestThrottlerToken *)arg5 options:(unsigned long long)arg6 willSendRequestHandler:(void (^)(void (^)(PBRequest *)))arg7 validationHandler:(NSError * (^)(PBCodable *))arg8 completionHandler:(void (^)(PBCodable *, NSError *))arg9;
@end

