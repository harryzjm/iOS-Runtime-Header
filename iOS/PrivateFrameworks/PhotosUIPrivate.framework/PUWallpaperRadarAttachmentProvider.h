//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHAsset, PHSuggestion;

__attribute__((visibility("hidden")))
@interface PUWallpaperRadarAttachmentProvider : NSObject
{
    PHSuggestion *_suggestion;
    PHAsset *_asset;
}

+ (id)radarConfigurationForAsset:(id)arg1 suggestion:(id)arg2 compoundLayerStack:(id)arg3 segmentationItem:(id)arg4 posterDescriptor:(id)arg5 posterConfiguration:(id)arg6 component:(long long)arg7 completionHandler:(CDUnknownBlockType)arg8;
+ (id)generateDebugDescriptionForSuggestion:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) PHSuggestion *suggestion; // @synthesize suggestion=_suggestion;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (id)initWithSuggestion:(id)arg1 asset:(id)arg2;

@end

