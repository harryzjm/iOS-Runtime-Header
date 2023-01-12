//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreData/NSCopying-Protocol.h>
#import <CoreData/NSMutableCopying-Protocol.h>

@class NSManagedObjectID;

__attribute__((visibility("hidden")))
@interface _CDSnapshot : NSObject <NSCopying, NSMutableCopying>
{
    int _cd_rc;
    int _cd_version;
    NSManagedObjectID *_cd_objectID;
    struct _snapshotFlags_st {
        unsigned int _readOnly:1;
        unsigned int _reservedFlags:7;
    } _cd_flags;
    unsigned char _cd_nullFlags_;
}

+ (unsigned int)newBatchAllocation:(id *)arg1 count:(unsigned int)arg2 withOwnedObjectIDs:(id *)arg3;
+ (void)_entityDeallocated;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
+ (Class)classForEntity:(id)arg1;
+ (void)initialize;
+ (void)_invalidateStaticCaches;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)description;
- (void)dealloc;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
