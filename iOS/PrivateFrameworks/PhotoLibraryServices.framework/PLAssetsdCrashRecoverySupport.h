//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, PLPhotoLibraryPathManager;

@interface PLAssetsdCrashRecoverySupport : NSObject
{
    PLPhotoLibraryPathManager *_pathManager;
    struct os_unfair_lock_s _recoveryIndicatorCheckLock;
    NSDate *_recoveryJobCreationDate;
}

- (void).cxx_destruct;
- (void)_enqeueRecoveryJob:(id)arg1 date:(id)arg2 toImageWriter:(id)arg3;
- (_Bool)isSafeToRecoverAfterCrash;
- (void)recoverFromCrashIfNeededWithImageWriter:(id)arg1;
- (id)initWithPathManager:(id)arg1;

@end
