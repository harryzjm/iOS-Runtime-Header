//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSNumber, NSString, PLAdditionalAssetAttributes;

@interface PLUnmanagedAdjustment
{
}

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)copyUnmanagedAdjustmentFromSourceAsset:(id)arg1 forPlaceholderAsset:(id)arg2 inLibrary:(id)arg3 error:(id *)arg4;
+ (id)_convertRedEyeCorrection:(id)arg1 withOrientation:(long long)arg2;
+ (id)_convertRedEyeCorrections:(id)arg1 withOrientation:(long long)arg2;
+ (id)addUnmanagedAdjustmentFromXMPDataIfNeededForAsset:(id)arg1;
- (void)willSave;
- (_Bool)isSyncableChange;
- (_Bool)supportsCloudUpload;

// Remaining properties
@property(retain, nonatomic) NSNumber *adjustmentBaseImageFormat; // @dynamic adjustmentBaseImageFormat;
@property(retain, nonatomic) NSString *adjustmentFormatIdentifier; // @dynamic adjustmentFormatIdentifier;
@property(retain, nonatomic) NSString *adjustmentFormatVersion; // @dynamic adjustmentFormatVersion;
@property(nonatomic) unsigned int adjustmentRenderTypes; // @dynamic adjustmentRenderTypes;
@property(retain, nonatomic) NSDate *adjustmentTimestamp; // @dynamic adjustmentTimestamp;
@property(retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes; // @dynamic assetAttributes;
@property(retain, nonatomic) NSString *editorLocalizedName; // @dynamic editorLocalizedName;
@property(retain, nonatomic) NSString *otherAdjustmentsFingerprint; // @dynamic otherAdjustmentsFingerprint;
@property(retain, nonatomic) NSString *similarToOriginalAdjustmentsFingerprint; // @dynamic similarToOriginalAdjustmentsFingerprint;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

