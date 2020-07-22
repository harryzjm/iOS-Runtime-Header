//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class BBBulletinUpdate;

@interface BBBulletinUpdateTransaction : NSObject <NSCopying, NSSecureCoding>
{
    BBBulletinUpdate *_bulletinUpdate;
    unsigned long long _transactionID;
}

+ (_Bool)supportsSecureCoding;
+ (id)transactionWithBulletinUpdate:(id)arg1 transactionID:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long transactionID; // @synthesize transactionID=_transactionID;
@property(readonly, copy, nonatomic) BBBulletinUpdate *bulletinUpdate; // @synthesize bulletinUpdate=_bulletinUpdate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithBulletinUpdate:(id)arg1 transactionID:(unsigned long long)arg2;

@end
