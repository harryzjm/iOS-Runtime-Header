//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface PGMusicCache : NSObject
{
    MISSING_TYPE *cacheURL;
    MISSING_TYPE *persistentStoreCoordinator;
    MISSING_TYPE *managedObjectContext;
}

+ (id)cacheAtURL:(id)arg1 error:(id *)arg2;
+ (id)cacheWithPhotoLibrary:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)init;
- (_Bool)removeAllWithProgressReporter:(id)arg1 error:(id *)arg2;

@end
