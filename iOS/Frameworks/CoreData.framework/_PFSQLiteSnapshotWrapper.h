//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreData/NSCopying-Protocol.h>
#import <CoreData/NSMutableCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _PFSQLiteSnapshotWrapper : NSObject <NSCopying, NSMutableCopying>
{
    struct sqlite3_snapshot *_s;
    int _externalReferences;
    int _flags;
}

- (long long)compare:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) const void *bytes;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
