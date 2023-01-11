//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/_GCDeviceMatchingFilter-Protocol.h>

@class NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _GCDevicePIDVIDMatchingFilter : NSObject <_GCDeviceMatchingFilter>
{
    NSNumber *_vendorID;
    NSArray *_productIDs;
}

- (void).cxx_destruct;
- (id)identifier;
- (_Bool)match:(id)arg1;
- (id)initWithVendorID:(id)arg1 productIDs:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
