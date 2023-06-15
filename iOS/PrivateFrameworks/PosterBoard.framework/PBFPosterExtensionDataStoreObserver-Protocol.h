//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoard/NSObject-Protocol.h>

@class NSDictionary, NSString, PBFGalleryConfiguration, PBFPosterExtensionDataStore, PBFPosterSnapshotDefinition, PRPosterConfiguration, PRSServerPosterPath, PRSwitcherConfiguration;

@protocol PBFPosterExtensionDataStoreObserver <NSObject>

@optional
- (void)posterExtensionDataStore:(PBFPosterExtensionDataStore *)arg1 didUpdateSnapshotForConfiguration:(PRPosterConfiguration *)arg2;
- (void)posterExtensionDataStore:(PBFPosterExtensionDataStore *)arg1 didUpdateSnapshotForPath:(PRSServerPosterPath *)arg2 forDefinition:(PBFPosterSnapshotDefinition *)arg3;
- (void)posterExtensionDataStore:(PBFPosterExtensionDataStore *)arg1 posterConfiguration:(PRPosterConfiguration *)arg2 didUpdateAssociatedHomeScreenPosterConfigurationTo:(PRPosterConfiguration *)arg3;
- (void)posterExtensionDataStore:(PBFPosterExtensionDataStore *)arg1 didUpdateActiveConfiguration:(PRPosterConfiguration *)arg2 associatedConfiguration:(PRPosterConfiguration *)arg3;
- (void)posterExtensionDataStore:(PBFPosterExtensionDataStore *)arg1 didUpdateSelectedConfiguration:(PRPosterConfiguration *)arg2 associatedConfiguration:(PRPosterConfiguration *)arg3;
- (void)posterExtensionDataStore:(PBFPosterExtensionDataStore *)arg1 didUpdateConfiguration:(PRPosterConfiguration *)arg2;
- (void)posterExtensionDataStore:(PBFPosterExtensionDataStore *)arg1 didAddConfiguration:(PRPosterConfiguration *)arg2;
- (void)posterExtensionDataStore:(PBFPosterExtensionDataStore *)arg1 didDeleteConfiguration:(PRPosterConfiguration *)arg2;
- (void)posterExtensionDataStoreDidUpdateConfigurations:(PBFPosterExtensionDataStore *)arg1;
- (void)posterExtensionDataStore:(PBFPosterExtensionDataStore *)arg1 didUpdateGalleryConfiguration:(PBFGalleryConfiguration *)arg2;
- (void)posterExtensionDataStore:(PBFPosterExtensionDataStore *)arg1 didUpdatePosterDescriptorsForExtensionBundleIdentifier:(NSString *)arg2;
- (void)posterExtensionDataStore:(PBFPosterExtensionDataStore *)arg1 didUpdateSwitcherConfiguration:(PRSwitcherConfiguration *)arg2;
- (void)posterExtensionDataStore:(PBFPosterExtensionDataStore *)arg1 posterCollectionsWereUpdatedForRoles:(NSDictionary *)arg2;
- (void)posterExtensionDataStore:(PBFPosterExtensionDataStore *)arg1 activePostersWereUpdatedForRoles:(NSDictionary *)arg2;
- (void)posterExtensionDataStore:(PBFPosterExtensionDataStore *)arg1 didInitializeActivePosters:(NSDictionary *)arg2 posterCollections:(NSDictionary *)arg3;
- (void)posterExtensionDataStore:(PBFPosterExtensionDataStore *)arg1 didInitializeWithSwitcherConfiguration:(PRSwitcherConfiguration *)arg2 withChanges:(_Bool)arg3;
- (void)posterExtensionDataStoreDidUpdateExtensions:(PBFPosterExtensionDataStore *)arg1;
@end

