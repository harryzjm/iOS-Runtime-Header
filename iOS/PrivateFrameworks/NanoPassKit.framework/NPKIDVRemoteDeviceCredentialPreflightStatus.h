//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NSSecureCoding-Protocol.h>

@interface NPKIDVRemoteDeviceCredentialPreflightStatus : NSObject <NSSecureCoding>
{
    _Bool _preflightSuccessful;
    unsigned long long _credentialType;
    unsigned long long _provisionedPassesCount;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool preflightSuccessful; // @synthesize preflightSuccessful=_preflightSuccessful;
@property(readonly, nonatomic) unsigned long long provisionedPassesCount; // @synthesize provisionedPassesCount=_provisionedPassesCount;
@property(readonly, nonatomic) unsigned long long credentialType; // @synthesize credentialType=_credentialType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCredentialType:(unsigned long long)arg1 provisionedPassesCount:(unsigned long long)arg2 preflightSuccessful:(_Bool)arg3;

@end
