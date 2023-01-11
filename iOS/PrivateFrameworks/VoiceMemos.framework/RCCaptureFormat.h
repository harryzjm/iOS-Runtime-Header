//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RCCaptureFormat : NSObject
{
}

+ (id)AVAssetAuthoringMetadataWithRecordingMetadata:(id)arg1;
+ (id)AVAssetAuthoringMetadataWithComposition:(id)arg1;
+ (id)AVAssetAuthoringMetadataWithCreationDate:(id)arg1 title:(id)arg2 uniqueID:(id)arg3;
+ (id)AVAssetAuthoringMetadataWithCreationDate:(id)arg1 title:(id)arg2 uniqueID:(id)arg3 musicMemoMetadata:(id)arg4;
+ (void)_AVAssetExportDetermineSettingsForExportingAsset:(id)arg1 inputFormat:(unsigned int)arg2 outputExtensionWithFallbacks:(id)arg3 preferredFormat:(unsigned int)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)AVAssetExportDetermineSettingsForExportingAsset:(id)arg1 inputFormat:(unsigned int)arg2 preferredOutputExtension:(id)arg3 preferredFormat:(unsigned int)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (id)AVAssetExportPresetForExportingToExtension:(id)arg1 preferredFormat:(unsigned int)arg2;
+ (id)AVMediaTypeForFileExtension:(id)arg1;
+ (id)AVFileTypeUTIForFileExtension:(id)arg1;
+ (id)fileFormatsDirectlyImportable;
+ (id)fileExtensionsSupported;
+ (id)fileExtensionForAssetExport;
+ (id)fileExtensionForIntermediateAssetCapture;

@end
