//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class AVAsset, NSError, NSSet;

@interface TSDMovieCompatibilityChecker : NSObject
{
    AVAsset *mAsset;
    long long mCompatibilityLevel;
    NSError *mError;
    CDStruct_79c71658 mCustomMaxPlayableVideoDimensions;
    NSSet *mCustomPlayableVideoCodecTypes;
    int mCustomMaxPlayableVideoPixelsPerFrame;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=mError;
@property(readonly, nonatomic) long long compatibilityLevel; // @synthesize compatibilityLevel=mCompatibilityLevel;
- (_Bool)p_isAudioTrackPlayableOnAllDevices:(id)arg1;
- (id)p_sampleDescriptionExtensionAtomDataFromVideoFormatDescription:(struct opaqueCMFormatDescription *)arg1 forAtomType:(id)arg2;
- (_Bool)p_isH263VideoFormatPlayableOnAllDevices:(struct opaqueCMFormatDescription *)arg1;
- (_Bool)p_isMPEG4VideoFormatPlayableOnAllDevices:(struct opaqueCMFormatDescription *)arg1;
- (_Bool)p_isH264VideoFormatPlayableOnAllDevices:(struct opaqueCMFormatDescription *)arg1;
- (_Bool)p_isSorenson3VideoFormatPlayableOnAllDevices:(struct opaqueCMFormatDescription *)arg1;
- (_Bool)p_isVideoTrackPlayableOnAllDevices:(id)arg1;
- (_Bool)p_assetHasSupportedFileTypeOnAllDevices;
- (_Bool)p_isLoadedAssetPlayableOnAllDevices;
- (void)cancel;
- (void)p_didFinishCheckingCompatibilityUpToLevel:(long long)arg1 actualLevel:(long long)arg2 didCancel:(_Bool)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)checkCustomCompatibilityWithVideoCodecTypes:(id)arg1 maxPlayableVideoDimensions:(struct CGSize)arg2 maxPlayableVideoPixelsPerFrame:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)checkCompatibilityUpToLevel:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithAsset:(id)arg1;

@end

