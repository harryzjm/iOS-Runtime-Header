//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOServiceRequestConfiguring-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOServiceRequestDefaultConfig : NSObject <GEOServiceRequestConfiguring>
{
}

- (int)dataRequestKindForRequest:(id)arg1;
- (unsigned char)requestCounterInfoTypeForRequest:(id)arg1;
- (int)experimentDispatcherRequestTypeForRequest:(id)arg1;
- (long long)experimentType;
- (id)serviceTypeNumber;
- (id)throttleKey;
- (_Bool)shouldThrottleRequests;
- (id)debugRequestName;
- (id)additionalHTTPHeaders;
- (id)additionalURLQueryItems;
- (unsigned long long)urlType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

