//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDDataCollectorState : NSObject <NSCopying>
{
    unsigned long long _collectionType;
    unsigned long long _sourceType;
    long long _priority;
}

@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) unsigned long long collectionType; // @synthesize collectionType=_collectionType;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

