//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLMomentAssetData-Protocol.h>

@class NSString;

@protocol PLMomentAssetData_Private <PLMomentAssetData>

@optional
- (_Bool)hasChanges;
- (_Bool)isVideo;
- (_Bool)isPhoto;
- (_Bool)isAvalancheStackPhoto;
- (_Bool)isInterestingForAvalanche;
- (NSString *)avalancheUUID;
@end

