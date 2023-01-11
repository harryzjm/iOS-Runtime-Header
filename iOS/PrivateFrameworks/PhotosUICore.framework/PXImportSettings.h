//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXImportSettings
{
    _Bool _simulateEmptyImportSource;
    _Bool _showImportItemFilenames;
    _Bool _disableAssetDeletion;
    _Bool _loadActualThumbnails;
    _Bool _lazyLoadAllAssets;
    _Bool _groupItemsByEXIFDate;
    _Bool _showNewestItemsInGridUntilScrolled;
    _Bool _hide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem;
    _Bool _longPressForOneUpInCompactMode;
    _Bool _longPressForOneUpInPadSpec;
    _Bool _useThumbnailSizesAsImageSizeHints;
    _Bool _loadRetinaThumbnails;
    _Bool _showProgressTitles;
    long long _simulatedBatteryLevel;
    long long _alreadyImportedTruncationMode;
    long long _assetEnumerationBehavior;
    double _assetEnumerationBatchInterval;
    unsigned long long _assetEnumerationBatchSize;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool showProgressTitles; // @synthesize showProgressTitles=_showProgressTitles;
@property(nonatomic) unsigned long long assetEnumerationBatchSize; // @synthesize assetEnumerationBatchSize=_assetEnumerationBatchSize;
@property(nonatomic) double assetEnumerationBatchInterval; // @synthesize assetEnumerationBatchInterval=_assetEnumerationBatchInterval;
@property(nonatomic) long long assetEnumerationBehavior; // @synthesize assetEnumerationBehavior=_assetEnumerationBehavior;
@property(nonatomic) _Bool loadRetinaThumbnails; // @synthesize loadRetinaThumbnails=_loadRetinaThumbnails;
@property(nonatomic) _Bool useThumbnailSizesAsImageSizeHints; // @synthesize useThumbnailSizesAsImageSizeHints=_useThumbnailSizesAsImageSizeHints;
@property(nonatomic) _Bool longPressForOneUpInPadSpec; // @synthesize longPressForOneUpInPadSpec=_longPressForOneUpInPadSpec;
@property(nonatomic) _Bool longPressForOneUpInCompactMode; // @synthesize longPressForOneUpInCompactMode=_longPressForOneUpInCompactMode;
@property(nonatomic) _Bool hide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem; // @synthesize hide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem=_hide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem;
@property(nonatomic) long long alreadyImportedTruncationMode; // @synthesize alreadyImportedTruncationMode=_alreadyImportedTruncationMode;
@property(nonatomic) _Bool showNewestItemsInGridUntilScrolled; // @synthesize showNewestItemsInGridUntilScrolled=_showNewestItemsInGridUntilScrolled;
@property(nonatomic) _Bool groupItemsByEXIFDate; // @synthesize groupItemsByEXIFDate=_groupItemsByEXIFDate;
@property(nonatomic) _Bool lazyLoadAllAssets; // @synthesize lazyLoadAllAssets=_lazyLoadAllAssets;
@property(nonatomic) _Bool loadActualThumbnails; // @synthesize loadActualThumbnails=_loadActualThumbnails;
@property(nonatomic) _Bool disableAssetDeletion; // @synthesize disableAssetDeletion=_disableAssetDeletion;
@property(nonatomic) _Bool showImportItemFilenames; // @synthesize showImportItemFilenames=_showImportItemFilenames;
@property(nonatomic) _Bool simulateEmptyImportSource; // @synthesize simulateEmptyImportSource=_simulateEmptyImportSource;
@property(nonatomic) long long simulatedBatteryLevel; // @synthesize simulatedBatteryLevel=_simulatedBatteryLevel;
- (void)setDefaultValues;
- (id)parentSettings;

@end
