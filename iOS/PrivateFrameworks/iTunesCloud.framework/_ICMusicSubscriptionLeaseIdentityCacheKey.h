//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _ICMusicSubscriptionLeaseIdentityCacheKey : NSObject
{
    NSNumber *_delegatedDSID;
    NSNumber *_DSID;
    NSString *_carrierBundleDeviceIdentifier;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *carrierBundleDeviceIdentifier; // @synthesize carrierBundleDeviceIdentifier=_carrierBundleDeviceIdentifier;
@property(readonly, copy, nonatomic) NSNumber *DSID; // @synthesize DSID=_DSID;
@property(readonly, copy, nonatomic) NSNumber *delegatedDSID; // @synthesize delegatedDSID=_delegatedDSID;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDSID:(id)arg1 carrierBundleDeviceIdentifier:(id)arg2 delegatedDSID:(id)arg3;

@end

