//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Engram/NSSecureCoding-Protocol.h>

@class NSArray, NSSet;
@protocol ENAccountPublicKey;

@interface ENParticipant : NSObject <NSSecureCoding>
{
    id <ENAccountPublicKey> _accountPublicKey;
    NSSet *_aliases;
    NSArray *_devices;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(retain, nonatomic) NSSet *aliases; // @synthesize aliases=_aliases;
@property(retain, nonatomic) id <ENAccountPublicKey> accountPublicKey; // @synthesize accountPublicKey=_accountPublicKey;
- (id)deviceWithIdentifier:(id)arg1;
@property(readonly, nonatomic) _Bool supportsEngram;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccountPublicKey:(id)arg1 aliases:(id)arg2 devices:(id)arg3;

@end
