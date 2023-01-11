//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMFWoBLEInfo, HMFWoWLANInfo, NSString;

@interface HMFConnectivityInfo : HMFObject <NSSecureCoding>
{
    NSString *_accessoryIdentifier;
    HMFWoBLEInfo *_woBLEInfo;
    HMFWoWLANInfo *_woWLANInfo;
}

+ (id)shortDescription;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) HMFWoWLANInfo *woWLANInfo; // @synthesize woWLANInfo=_woWLANInfo;
@property(retain, nonatomic) HMFWoBLEInfo *woBLEInfo; // @synthesize woBLEInfo=_woBLEInfo;
@property(readonly, nonatomic) NSString *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)updateWithWoWLANInfo:(id)arg1;
- (void)updateWithWoBLEInfo:(id)arg1;
- (id)initWithAccessory:(id)arg1 woWLANInfo:(id)arg2;
- (id)initWithAccessory:(id)arg1 woBLEInfo:(id)arg2;

@end
