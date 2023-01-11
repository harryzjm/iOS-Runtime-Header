//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSSecureCoding-Protocol.h>

@class NSString;

@interface VSDeveloperSettings : NSObject <NSSecureCoding>
{
    _Bool _isInSetTopBoxMode;
    _Bool _cacheBusterEnabled;
    _Bool _requestTimeoutsDisabled;
    _Bool _simulateExpiredToken;
    _Bool _setTopBoxUseDeviceProfile;
    _Bool _setTopBoxSupportsOptOut;
    NSString *_setTopBoxBundleIdentifier;
    NSString *_setTopBoxUserToken;
    NSString *_setTopBoxIdentityProviderID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool setTopBoxSupportsOptOut; // @synthesize setTopBoxSupportsOptOut=_setTopBoxSupportsOptOut;
@property(nonatomic) _Bool setTopBoxUseDeviceProfile; // @synthesize setTopBoxUseDeviceProfile=_setTopBoxUseDeviceProfile;
@property(copy, nonatomic) NSString *setTopBoxIdentityProviderID; // @synthesize setTopBoxIdentityProviderID=_setTopBoxIdentityProviderID;
@property(copy, nonatomic) NSString *setTopBoxUserToken; // @synthesize setTopBoxUserToken=_setTopBoxUserToken;
@property(copy, nonatomic) NSString *setTopBoxBundleIdentifier; // @synthesize setTopBoxBundleIdentifier=_setTopBoxBundleIdentifier;
@property(nonatomic) _Bool simulateExpiredToken; // @synthesize simulateExpiredToken=_simulateExpiredToken;
@property(nonatomic) _Bool requestTimeoutsDisabled; // @synthesize requestTimeoutsDisabled=_requestTimeoutsDisabled;
@property(nonatomic) _Bool cacheBusterEnabled; // @synthesize cacheBusterEnabled=_cacheBusterEnabled;
@property(nonatomic) _Bool isInSetTopBoxMode; // @synthesize isInSetTopBoxMode=_isInSetTopBoxMode;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)setDefaults;

@end
