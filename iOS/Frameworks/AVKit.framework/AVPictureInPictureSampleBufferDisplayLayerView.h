//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVPictureInPicturePlayerLayerView.h"

@class AVObservationController, AVPictureInPictureIndicatorLayer, AVPictureInPictureSampleBufferDisplayLayerHostView, AVSampleBufferDisplayLayer, AVSampleBufferDisplayLayerPlayerController, CALayerHost;

__attribute__((visibility("hidden")))
@interface AVPictureInPictureSampleBufferDisplayLayerView : AVPictureInPicturePlayerLayerView
{
    _Bool _PIPModeEnabled;
    unsigned int _sourceContextId;
    AVSampleBufferDisplayLayer *_sourceLayer;
    AVObservationController *_observationController;
    AVSampleBufferDisplayLayerPlayerController *_playerController;
    AVPictureInPictureIndicatorLayer *_placeholderLayer;
    AVPictureInPictureSampleBufferDisplayLayerHostView *_sbdlHostView;
    CALayerHost *_sourceLayerHost;
    struct CGSize _lastKnownRenderSize;
    struct CGSize _imageQueueSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize imageQueueSize; // @synthesize imageQueueSize=_imageQueueSize;
@property(nonatomic) struct CGSize lastKnownRenderSize; // @synthesize lastKnownRenderSize=_lastKnownRenderSize;
@property(nonatomic) unsigned int sourceContextId; // @synthesize sourceContextId=_sourceContextId;
@property(nonatomic) __weak CALayerHost *sourceLayerHost; // @synthesize sourceLayerHost=_sourceLayerHost;
@property(retain, nonatomic) AVPictureInPictureSampleBufferDisplayLayerHostView *sbdlHostView; // @synthesize sbdlHostView=_sbdlHostView;
@property(retain, nonatomic) AVPictureInPictureIndicatorLayer *placeholderLayer; // @synthesize placeholderLayer=_placeholderLayer;
@property(retain, nonatomic) AVSampleBufferDisplayLayerPlayerController *playerController; // @synthesize playerController=_playerController;
@property(retain, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property(nonatomic, getter=isPIPModeEnabled) _Bool PIPModeEnabled; // @synthesize PIPModeEnabled=_PIPModeEnabled;
@property(readonly, nonatomic) AVSampleBufferDisplayLayer *sourceLayer; // @synthesize sourceLayer=_sourceLayer;
- (id)_makePictureInPicturePlatformAdapterContentPlaceholderLayer;
- (void)_updateGeometry;
- (void)layoutSubviews;
- (void)_updateSourceLayerHost;
- (void)dealloc;
- (id)initWithSourceLayer:(id)arg1 playerController:(id)arg2;

@end

