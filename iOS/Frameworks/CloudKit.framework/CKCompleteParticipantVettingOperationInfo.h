//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface CKCompleteParticipantVettingOperationInfo <NSSecureCoding>
{
    NSString *_vettingToken;
    NSString *_vettingEmail;
    NSString *_vettingPhone;
    NSString *_routingKey;
    NSData *_encryptedKey;
    NSString *_baseToken;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *baseToken; // @synthesize baseToken=_baseToken;
@property(retain, nonatomic) NSData *encryptedKey; // @synthesize encryptedKey=_encryptedKey;
@property(retain, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
@property(retain, nonatomic) NSString *vettingPhone; // @synthesize vettingPhone=_vettingPhone;
@property(retain, nonatomic) NSString *vettingEmail; // @synthesize vettingEmail=_vettingEmail;
@property(copy, nonatomic) NSString *vettingToken; // @synthesize vettingToken=_vettingToken;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

