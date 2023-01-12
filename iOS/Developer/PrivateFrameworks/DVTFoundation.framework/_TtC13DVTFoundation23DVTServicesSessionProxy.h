//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class DVTLogAspect, MISSING_TYPE, NSNumber, NSString;

@interface _TtC13DVTFoundation23DVTServicesSessionProxy : _TtCs12_SwiftObject
{
    MISSING_TYPE *executionContext;
    MISSING_TYPE *portalServiceEndpoint;
    MISSING_TYPE *logAspect;
    MISSING_TYPE *defaults;
}

- (id)sessionWithAdditionalLogAspect:(id)arg1;
- (void)updateWithResponseHeaders:(id)arg1;
- (id)authenticationHeadersForRequest:(id)arg1;
@property(nonatomic, readonly) NSString *portalServiceBasePath;
@property(nonatomic, readonly) NSString *portalServiceScheme;
@property(nonatomic, readonly) NSNumber *portalServicePort;
@property(nonatomic, readonly) NSString *portalServiceHostname;
@property(nonatomic, retain) DVTLogAspect *logAspect; // @synthesize logAspect;
@property(nonatomic) long long executionContext; // @synthesize executionContext;

@end

