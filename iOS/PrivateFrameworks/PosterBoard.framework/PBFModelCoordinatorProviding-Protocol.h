//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoard/PBFExtensionProviding-Protocol.h>
#import <PosterBoard/PBFPosterSnapshotCoordinatorProviding-Protocol.h>

@class NSArray, NSString, PBFPosterExtensionStoreCoordinator;

@protocol PBFModelCoordinatorProviding <PBFPosterSnapshotCoordinatorProviding, PBFExtensionProviding>
- (NSArray *)pbf_posterExtensionStoreCoordinatorsForRole:(NSString *)arg1;
- (PBFPosterExtensionStoreCoordinator *)pbf_posterExtensionStoreCoordinatorForProviderIdentifier:(NSString *)arg1 error:(out id *)arg2;
@end

