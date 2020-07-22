//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLResourceChooser : NSObject
{
}

+ (unsigned long long)cloudResourceTypeForAsset:(id)arg1 format:(id)arg2 filePath:(id *)arg3 imageType:(long long *)arg4;
+ (long long)_fileResourceTypeForCloudResourceType:(unsigned long long)arg1 hasAdjustments:(_Bool)arg2 requiresUnadjustedVersion:(_Bool)arg3;
+ (void)_chooseCloudResourceTypeForFormat:(id)arg1 asset:(id)arg2 optimalCPLResourceType:(unsigned long long *)arg3 localCPLResourceType:(unsigned long long *)arg4 localCPLResourceFilePath:(id *)arg5 fileReservation:(id *)arg6;
+ (id)_itemMatchingFormat:(id)arg1 allItems:(id)arg2 acceptableSortedAlternatives:(id *)arg3;
+ (id)_filteredArrayUsingPredicate:(id)arg1 originalItems:(id)arg2 nonMatchingItems:(id *)arg3;
+ (id)_penultimateItemFromAllItems:(id)arg1;
+ (id)_originalItemFromAllItems:(id)arg1;
+ (id)fileReservationForImageFileForAsset:(id)arg1 format:(id)arg2 outFilePath:(id *)arg3 outImageType:(long long *)arg4;
+ (id)fileReservationForLargeDisplayableImageFileForAsset:(id)arg1 format:(id)arg2 allowMetadataSnapshot:(_Bool)arg3 forceLarge:(_Bool)arg4 outFilePath:(id *)arg5 outImageType:(long long *)arg6;
+ (id)_chooseFileReservationForLargeDisplayableImageFileForAsset:(id)arg1 format:(id)arg2 forceLarge:(_Bool)arg3 allowMetadataSnapshot:(_Bool)arg4 outFilePath:(id *)arg5 outImageType:(long long *)arg6;
- (void)dealloc;
- (id)init;

@end

