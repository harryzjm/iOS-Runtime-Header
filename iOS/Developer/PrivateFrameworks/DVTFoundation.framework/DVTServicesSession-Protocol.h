//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DVTLogAspect, NSDictionary, NSNumber, NSString, NSURLRequest;
@protocol DVTServicesSession;

@protocol DVTServicesSession
@property(readonly) DVTLogAspect *logAspect;
@property(readonly) NSString *portalServiceBasePath;
@property(readonly) NSNumber *portalServicePort;
@property(readonly) NSString *portalServiceScheme;
@property(readonly) NSString *portalServiceHostname;
@property(readonly) long long executionContext;
- (id <DVTServicesSession>)sessionWithAdditionalLogAspect:(DVTLogAspect *)arg1;
- (void)updateWithResponseHeaders:(NSDictionary *)arg1;
- (NSDictionary *)authenticationHeadersForRequest:(NSURLRequest *)arg1;
@end

