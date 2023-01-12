//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/NSObject-Protocol.h>

@class BLSAssertionDescriptor, BLSAssertionIdentifier, NSError;

@protocol BLSXPCAssertionServiceHostInterface <NSObject>
- (oneway void)destroyAssertion:(BLSAssertionIdentifier *)arg1;
- (oneway void)restartAssertionTimeoutTimer:(BLSAssertionIdentifier *)arg1;
- (oneway void)cancelAssertion:(BLSAssertionIdentifier *)arg1 withError:(NSError *)arg2;
- (oneway void)acquireAssertion:(BLSAssertionIdentifier *)arg1;
- (BLSAssertionIdentifier *)acquireAssertionForDescriptor:(BLSAssertionDescriptor *)arg1 error:(out id *)arg2;
@end

