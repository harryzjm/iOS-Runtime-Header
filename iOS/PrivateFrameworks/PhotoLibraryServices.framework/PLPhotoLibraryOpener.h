//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PLLibraryServicesManager;

@interface PLPhotoLibraryOpener : NSObject
{
    _Bool _reportInProgressUpgrades;
    PLLibraryServicesManager *_libraryServicesManager;
}

+ (_Bool)canAutomaticallyCreateLibrary;
- (void).cxx_destruct;
@property(readonly) PLLibraryServicesManager *libraryServicesManager; // @synthesize libraryServicesManager=_libraryServicesManager;
- (_Bool)lightweightPermissionCheckWithPath:(id)arg1 isDir:(_Bool)arg2 error:(id *)arg3;
- (_Bool)lightweightPermissionCheckWithError:(id *)arg1;
- (_Bool)openPhotoLibraryDatabase:(id *)arg1;
- (_Bool)createPhotoLibraryDatabaseWithOptions:(id)arg1 error:(id *)arg2;
- (id)initWithLibraryServicesManager:(id)arg1 reportInProgressUpgrades:(_Bool)arg2;

@end
