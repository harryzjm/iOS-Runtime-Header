//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Announce/NSSecureCoding-Protocol.h>

@class NSString;

@interface ANSender : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    unsigned long long _type;
}

+ (_Bool)supportsSecureCoding;
+ (id)senderWithID:(id)arg1 type:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)stringForSenderIdentifierType:(unsigned long long)arg1;
- (id)initWithID:(id)arg1 type:(unsigned long long)arg2;

@end
