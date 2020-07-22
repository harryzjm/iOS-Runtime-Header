//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOApplicationAuditToken, GEODirectionsRequest, NSNumber;

@protocol _GEODirectionsRequesterServerProxy <NSObject>
- (void)cancelRequest:(GEODirectionsRequest *)arg1;
- (void)startRequest:(GEODirectionsRequest *)arg1 auditToken:(GEOApplicationAuditToken *)arg2 isDoomRequest:(_Bool)arg3 requestPriority:(NSNumber *)arg4 finished:(void (^)(GEODirectionsResponse *))arg5 networkActivity:(void (^)(_Bool))arg6 error:(void (^)(NSError *, id <GEODirectionsError>))arg7;
@end

