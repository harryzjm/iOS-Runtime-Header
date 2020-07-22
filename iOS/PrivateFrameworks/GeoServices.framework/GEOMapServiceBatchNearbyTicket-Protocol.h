//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOApplicationAuditToken, GEOMapServiceTraits, GEOSearchCategory, NSString;

@protocol GEOMapServiceBatchNearbyTicket <NSObject>
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (void)cancel;
- (void)submitWithHandler:(void (^)(NSMapTable *, NSError *))arg1 auditToken:(GEOApplicationAuditToken *)arg2 networkActivity:(void (^)(_Bool))arg3;
- (void)submitWithHandler:(void (^)(NSMapTable *, NSError *))arg1 networkActivity:(void (^)(_Bool))arg2;
- (NSString *)resultSectionHeaderForCategory:(GEOSearchCategory *)arg1;
@end

