//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetImageGeneratorInternal, AVVideoComposition, NSString;
@protocol AVVideoCompositing;

@interface AVAssetImageGenerator : NSObject
{
    AVAssetImageGeneratorInternal *_priv;
}

+ (id)assetImageGeneratorWithAsset:(id)arg1;
- (id)_NSErrorForError:(int)arg1;
- (struct CGImage *)_copyCGImageAtTime:(CDStruct_1b6d18a9)arg1 usingAssetReader:(id)arg2 error:(id *)arg3;
- (struct CGSize)_scaledSizeForRenderSize:(struct CGSize)arg1;
- (id)_requestWithRequestID:(id)arg1;
- (void)_serverDied;
- (void)_failedToGenerateCGImage:(id)arg1;
- (void)_didGenerateCGImage:(id)arg1;
- (id)_optionsDictionary;
@property(nonatomic) CDStruct_1b6d18a9 requestedTimeToleranceAfter;
@property(nonatomic) CDStruct_1b6d18a9 requestedTimeToleranceBefore;
@property(readonly, nonatomic) id <AVVideoCompositing> customVideoCompositor;
@property(copy, nonatomic) AVVideoComposition *videoComposition;
@property(copy, nonatomic) NSString *apertureMode;
@property(nonatomic) struct CGSize maximumSize;
@property(nonatomic) _Bool appliesPreferredTrackTransform;
- (void)cancelAllCGImageGeneration;
- (void)generateCGImagesAsynchronouslyForTimes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (struct CGImage *)copyCGImageAtTime:(CDStruct_1b6d18a9)arg1 actualTime:(CDStruct_1b6d18a9 *)arg2 error:(id *)arg3;
- (id)_makeAutoreleasedAssetReader;
- (id)_videoSettingWithSize:(struct CGSize)arg1;
- (_Bool)_ensureFigAssetImageGeneratorReturningError:(id *)arg1;
@property(readonly, nonatomic) AVAsset *asset;
- (void)finalize;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;
- (id)init;

@end

