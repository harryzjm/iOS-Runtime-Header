//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface ASDIAPInfo : NSObject <NSCopying, NSSecureCoding>
{
    unsigned char _type;
    NSNumber *_adamId;
    NSNumber *_appAdamId;
    NSNumber *_expirationTimestamp;
    NSNumber *_lastModifiedTimestamp;
    NSNumber *_purchaseTimestamp;
    NSNumber *_accountId;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *accountId; // @synthesize accountId=_accountId;
@property(nonatomic) unsigned char type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *purchaseTimestamp; // @synthesize purchaseTimestamp=_purchaseTimestamp;
@property(retain, nonatomic) NSNumber *lastModifiedTimestamp; // @synthesize lastModifiedTimestamp=_lastModifiedTimestamp;
@property(retain, nonatomic) NSNumber *expirationTimestamp; // @synthesize expirationTimestamp=_expirationTimestamp;
@property(retain, nonatomic) NSNumber *appAdamId; // @synthesize appAdamId=_appAdamId;
@property(retain, nonatomic) NSNumber *adamId; // @synthesize adamId=_adamId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

