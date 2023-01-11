//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PLCloudSharingEnablingJob
{
    _Bool _enableSharing;
}

+ (void)deleteAllLocalSharedAlbumsInLibrary:(id)arg1 keepPendingAlbums:(_Bool)arg2 withReason:(id)arg3;
+ (void)disableCloudSharingWithLibraryServicesManager:(id)arg1;
+ (void)enableCloudSharing:(_Bool)arg1 withPathManager:(id)arg2;
@property(nonatomic) _Bool enableSharing; // @synthesize enableSharing=_enableSharing;
- (void)runDaemonSide;
- (_Bool)shouldArchiveXPCToDisk;
- (void)run;
- (long long)daemonOperation;
- (id)description;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;

@end
