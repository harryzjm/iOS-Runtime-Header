//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FindMyDevice/NSSecureCoding-Protocol.h>

@class NSString;

@interface FMDPairingCheckCommandRequestInfo : NSObject <NSSecureCoding>
{
    NSString *_pairingCheckToken;
    NSString *_authNonce;
    NSString *_accessoryType;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *accessoryType; // @synthesize accessoryType=_accessoryType;
@property(retain, nonatomic) NSString *authNonce; // @synthesize authNonce=_authNonce;
@property(retain, nonatomic) NSString *pairingCheckToken; // @synthesize pairingCheckToken=_pairingCheckToken;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
