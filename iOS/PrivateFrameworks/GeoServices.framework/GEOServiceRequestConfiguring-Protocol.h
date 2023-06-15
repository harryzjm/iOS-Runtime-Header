//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOMapServiceTraits, NSArray, NSDictionary, NSNumber, NSString, PBRequest;

@protocol GEOServiceRequestConfiguring <NSObject>
- (_Bool)supportsOffline;
- (NSNumber *)serviceTypeNumber;
- (NSString *)debugRequestName;
- (CDStruct_026435ec)dataRequestKindForRequest:(PBRequest *)arg1 traits:(GEOMapServiceTraits *)arg2;
- (NSDictionary *)additionalHTTPHeaders;
- (NSArray *)additionalURLQueryItems;
- (unsigned long long)urlType;

@optional
- (int)analyticNetworkServiceTypeForRequest:(PBRequest *)arg1 traits:(GEOMapServiceTraits *)arg2;
- (_Bool)usesBackgroundURL;
- (NSArray *)additionalStatesForNetworkEvent;
- (unsigned long long)multipathServiceType;
- (double)timeout;
@end

