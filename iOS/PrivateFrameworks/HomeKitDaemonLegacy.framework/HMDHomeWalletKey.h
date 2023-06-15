//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeWalletKeySecureElementInfo, NSString, NSURL, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDHomeWalletKey : HMFObject
{
    NSString *_typeIdentifier;
    NSString *_serialNumber;
    NSString *_walletKeyDescription;
    NSString *_homeName;
    long long _state;
    HMDHomeWalletKeySecureElementInfo *_nfcInfo;
    NSString *_accessCode;
    NSURL *_changeAccessCodeHomeAppCustomURL;
    long long _color;
    NSURL *_customURL;
}

- (void).cxx_destruct;
@property(copy) NSURL *customURL; // @synthesize customURL=_customURL;
@property long long color; // @synthesize color=_color;
@property(copy) NSURL *changeAccessCodeHomeAppCustomURL; // @synthesize changeAccessCodeHomeAppCustomURL=_changeAccessCodeHomeAppCustomURL;
@property(copy) NSString *accessCode; // @synthesize accessCode=_accessCode;
@property(copy) HMDHomeWalletKeySecureElementInfo *nfcInfo; // @synthesize nfcInfo=_nfcInfo;
@property long long state; // @synthesize state=_state;
@property(copy) NSString *homeName; // @synthesize homeName=_homeName;
@property(copy) NSString *walletKeyDescription; // @synthesize walletKeyDescription=_walletKeyDescription;
@property(readonly, copy) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, copy) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
- (id)attributeDescriptions;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)xpcWalletKeyWithExpressEnabled:(_Bool)arg1;
@property(readonly, copy) NSUUID *uuid;
@property(readonly, copy) NSString *labelColorValue;
@property(readonly, copy) NSString *passColorValue;
- (id)initWithPKPass:(id)arg1;
- (id)initWithTypeIdentifier:(id)arg1 serialNumber:(id)arg2 state:(long long)arg3 walletKeyDescription:(id)arg4 homeName:(id)arg5 color:(long long)arg6 nfcInfo:(id)arg7;

@end

