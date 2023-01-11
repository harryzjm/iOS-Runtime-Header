//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUICore/NSCopying-Protocol.h>

@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface VUICollisionSafeIdentifier : NSObject <NSCopying>
{
    NSObject<NSCopying> *_rootIdentifier;
    unsigned long long _collisionCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long collisionCount; // @synthesize collisionCount=_collisionCount;
@property(copy, nonatomic) NSObject<NSCopying> *rootIdentifier; // @synthesize rootIdentifier=_rootIdentifier;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRootIdentifier:(id)arg1 collisionCount:(unsigned long long)arg2;

@end
