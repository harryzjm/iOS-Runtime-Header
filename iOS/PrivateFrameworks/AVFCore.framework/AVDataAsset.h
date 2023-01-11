//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetInspectorLoader, AVDispatchOnce, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface AVDataAsset
{
    NSDictionary *_initializationOptions;
    AVAssetInspectorLoader *_loader;
    AVDispatchOnce *_allocateTracksOnceOnly;
    NSArray *_tracks;
}

+ (id)_getFigAssetCreationOptionsFromDataAssetInitializationOptions:(id)arg1 figAssetCreationFlags:(unsigned long long *)arg2;
+ (unsigned long long)_dataLengthLimit;
- (_Bool)_requiresInProcessOperation;
- (unsigned long long)referenceRestrictions;
- (id)tracks;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigFormatReader *)_formatReader;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (void)dealloc;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3;

@end
