//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <CoreUtils/NSSecureCoding-Protocol.h>

@class NSData, NSUUID;

@interface CUPairingIdentity : NSObject <NSSecureCoding>
{
    NSData *_altIRK;
    NSUUID *_identifier;
    NSData *_publicKey;
    NSData *_secretKey;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSData *secretKey; // @synthesize secretKey=_secretKey;
@property(copy, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSData *altIRK; // @synthesize altIRK=_altIRK;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

