//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class BBBulletin;

@interface BBBulletinUpdate : NSObject <NSCopying, NSSecureCoding>
{
    BBBulletin *_bulletin;
    unsigned long long _feeds;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long feeds; // @synthesize feeds=_feeds;
@property(readonly, copy, nonatomic) BBBulletin *bulletin; // @synthesize bulletin=_bulletin;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)typeDescription;
- (id)initWithBulletin:(id)arg1 feeds:(unsigned long long)arg2;

@end
