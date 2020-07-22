//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FindMyDevice/NSObject-Protocol.h>
#import <FindMyDevice/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@protocol FMDIdentityAttesting <NSObject, NSSecureCoding>
@property(readonly, nonatomic) NSString *sessionIdentifier;
@property(readonly, nonatomic) NSData *signature;
@property(readonly, nonatomic) NSData *attestation;
@end
