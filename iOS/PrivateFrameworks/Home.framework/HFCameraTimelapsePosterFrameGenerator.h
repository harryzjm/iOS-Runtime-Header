//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFCameraImageGeneratorDelegate-Protocol.h>

@class NSMutableDictionary;
@protocol HFCameraTimelapseClipInfoProvider, HFCameraTimelapsePosterFrameGeneratorDelegate, OS_dispatch_queue;

@interface HFCameraTimelapsePosterFrameGenerator : NSObject <HFCameraImageGeneratorDelegate>
{
    id <HFCameraTimelapsePosterFrameGeneratorDelegate> _delegate;
    id <HFCameraTimelapseClipInfoProvider> _timelapseClipInfoProvider;
    NSObject<OS_dispatch_queue> *_generationQueue;
    NSMutableDictionary *_posterFrameGenerationRequests;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *posterFrameGenerationRequests; // @synthesize posterFrameGenerationRequests=_posterFrameGenerationRequests;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *generationQueue; // @synthesize generationQueue=_generationQueue;
@property(nonatomic) __weak id <HFCameraTimelapseClipInfoProvider> timelapseClipInfoProvider; // @synthesize timelapseClipInfoProvider=_timelapseClipInfoProvider;
@property(nonatomic) __weak id <HFCameraTimelapsePosterFrameGeneratorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_removeGenerationRequestForImageGenerator:(id)arg1 withKey:(id)arg2;
- (id)_generationRequestForImageGenerator:(id)arg1 withKey:(id)arg2;
- (void)imageGenerator:(id)arg1 finishedGeneratingImagesForKey:(id)arg2;
- (void)imageGenerator:(id)arg1 failedToGenerateImageForRequestedTime:(CDStruct_198678f7)arg2 actualTime:(CDStruct_198678f7)arg3 forKey:(id)arg4;
- (void)imageGenerator:(id)arg1 didGenerateImage:(id)arg2 requestedTime:(CDStruct_198678f7)arg3 actualTime:(CDStruct_198678f7)arg4 forKey:(id)arg5;
- (id)_generateTimelapseOffsetsFromOffsets:(id)arg1 forTimelapseDiff:(double)arg2;
- (id)_generateOffsetsForHighQualityClip:(id)arg1 withStep:(unsigned long long)arg2;
- (void)_generatePosterFramesForAsset:(id)arg1 forOffsets:(id)arg2 atSize:(struct CGSize)arg3 withHighQualityClip:(id)arg4 andTimelapseOffset:(double)arg5;
- (void)_generatePosterFramesForTimelapseClip:(id)arg1 withHighQualityClip:(id)arg2 forOffsets:(id)arg3 atSize:(struct CGSize)arg4;
- (id)generatePosterFramesForHighQualityClip:(id)arg1 withStep:(unsigned long long)arg2 atSize:(struct CGSize)arg3;
- (void)dealloc;
- (id)initWithTimelapseClipInfoProvider:(id)arg1 andDelegate:(id)arg2;

@end
