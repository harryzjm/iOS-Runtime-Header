//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class AVPictureInPictureCALayerHostView;

__attribute__((visibility("hidden")))
@interface AVPictureInPictureSampleBufferDisplayLayerHostView : UIView
{
    _Bool _needsGeometryUpdate;
    _Bool _deferringGeometryUpdates;
    AVPictureInPictureCALayerHostView *_hostView;
    struct CGSize _imageQueueSize;
    struct CGSize _contentDimensions;
    struct CGRect _lastKnownFrame;
    struct CGRect _lastKnownBounds;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(nonatomic, getter=isDeferringGeometryUpdates) _Bool deferringGeometryUpdates; // @synthesize deferringGeometryUpdates=_deferringGeometryUpdates;
@property(nonatomic) _Bool needsGeometryUpdate; // @synthesize needsGeometryUpdate=_needsGeometryUpdate;
@property(nonatomic) struct CGRect lastKnownBounds; // @synthesize lastKnownBounds=_lastKnownBounds;
@property(nonatomic) struct CGRect lastKnownFrame; // @synthesize lastKnownFrame=_lastKnownFrame;
@property(nonatomic) struct CGSize contentDimensions; // @synthesize contentDimensions=_contentDimensions;
@property(nonatomic) struct CGSize imageQueueSize; // @synthesize imageQueueSize=_imageQueueSize;
@property(readonly, nonatomic) AVPictureInPictureCALayerHostView *hostView; // @synthesize hostView=_hostView;
- (void)_updateGeometryIfNeeded;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1 contentDimensions:(struct CGSize)arg2 imageQueueSize:(struct CGSize)arg3;
@property(nonatomic) double beginTime;
@property(nonatomic) unsigned int contextId;
- (id)initWithFrame:(struct CGRect)arg1;

@end

