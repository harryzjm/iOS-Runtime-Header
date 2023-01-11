//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PLManagedObjectContext, PLPhotoLibraryPathManager;

@interface PLManagedObjectLookupItemCache : NSObject
{
    NSMutableDictionary *_objectIDsByKey;
    PLManagedObjectContext *_creationContext;
    PLPhotoLibraryPathManager *_pathManager;
    struct os_unfair_lock_s _cacheLock;
}

- (void).cxx_destruct;
- (id)createObjectIfNecessaryForKey:(id)arg1 withManagedObjectContext:(id)arg2 createBlock:(CDUnknownBlockType)arg3;
- (id)objectIDForKey:(id)arg1;
- (void)setObjectID:(id)arg1 forKey:(id)arg2;
- (void)invalidateWithReason:(id)arg1;
- (id)initWithPathManager:(id)arg1;

@end
