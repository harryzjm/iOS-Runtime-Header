//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLPersonClusterUsabilityPreferences-Protocol.h>

@class NSString;

@interface PLPhotoLibraryUsabilityCriteriaPreferences : NSObject <PLPersonClusterUsabilityPreferences>
{
}

@property(readonly, nonatomic) unsigned long long maxUnverifiedClusters;
@property(nonatomic) unsigned long long unverifiedFaceCountThreshold;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

