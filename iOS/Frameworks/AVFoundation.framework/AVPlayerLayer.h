//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

#import <AVFoundation/AVKeyPathDependencyHost-Protocol.h>
#import <AVFoundation/AVWeakObservable-Protocol.h>

@class AVPlayer, AVPlayerLayerInternal, NSDictionary, NSString;

@interface AVPlayerLayer : CALayer <AVKeyPathDependencyHost, AVWeakObservable>
{
    AVPlayerLayerInternal *_playerLayer;
}

+ (void)_swapSublayersBetweenPlayerLayer:(id)arg1 andPlayerLayer:(id)arg2;
+ (id)keyPathsForValuesAffectingVideoRect;
+ (id)makeClosedCaptionLayer;
+ (id)playerLayerWithPlayer:(id)arg1;
- (void)removeFromSuperlayer;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addSublayer:(id)arg1;
- (void)setSublayers:(id)arg1;
- (void)setPlaceholderContentLayerDuringPIPMode:(id)arg1;
- (id)placeholderContentLayerDuringPIPMode;
- (void)_setPreventsChangesToSublayerHierarchy:(_Bool)arg1;
- (_Bool)_preventsChangesToSublayerHierarchy;
- (void)_setWillManageSublayersAsSwappedLayers:(_Bool)arg1;
- (_Bool)_willManageSublayersAsSwappedLayers;
- (void)_setSublayersForPIP:(id)arg1;
- (void)_setSublayersPreventChangesToSublayerHierarchy:(_Bool)arg1;
- (void)_restoreClientLayers:(id)arg1 intoMaskLayer:(id)arg2;
- (void)_mergeClientLayersIntoMaskLayer:(id)arg1;
- (id)_sublayersForPIP;
- (void)_forceLayout;
- (void)setPIPModeEnabled:(_Bool)arg1;
- (_Bool)isPIPModeEnabled;
- (void)leavePIPMode;
- (void)enterPIPModeRedirectingVideoToLayer:(id)arg1;
- (void)_disassociateWithPIPLayer;
- (id)_associatedPIPLayer;
- (void)_associateWithPIPLayer:(id)arg1;
- (void)_setCanEnterPIPMode:(_Bool)arg1;
- (_Bool)canEnterPIPMode;
- (void)_configurePlayerWhenLeavingPIP;
- (void)_configurePlayerWhenEnteringPIP;
- (struct CGRect)_videoRectForBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect videoRect;
- (void)setLanczosFilterDownscaleFactor:(long long)arg1;
- (long long)lanczosFilterDownscaleFactor;
- (void)setLanczosFilterDownscalingEnabled:(_Bool)arg1;
- (_Bool)isLanczosFilterDownscalingEnabled;
- (void)setOverscanSubtitleSupportEnabled:(_Bool)arg1;
- (_Bool)isOverscanSubtitleSupportEnabled;
- (id)_subtitleLayer;
- (id)_closedCaptionLayer;
- (id)_videoLayer;
- (id)_maskLayer;
- (void)_getMaskLayer:(id *)arg1 videoLayer:(id *)arg2 subtitleLayer:(id *)arg3 closedCaptionLayer:(id *)arg4;
@property(copy, nonatomic) NSDictionary *pixelBufferAttributes;
- (void)_setSubtitleGravity:(id)arg1;
- (id)_subtitleGravity;
@property(readonly, nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay;
@property(copy) NSString *videoGravity;
- (void)layerDidBecomeVisible:(_Bool)arg1;
@property(retain, nonatomic) AVPlayer *player;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingPlayer:(id)arg1;
- (void)_startObservingPlayer:(id)arg1;
- (void)_syncToPlayer:(id)arg1;
- (void)_applyCurrentItemPresentationSizeChangeAndForceUpdate:(_Bool)arg1;
- (struct CGSize)_playerCurrentItemPresentationSize;
- (void)declareKeyPathDependenciesWithRegistry:(id)arg1;
- (void)_notifyPlayerOfDisplaySize;
- (struct CGSize)_displaySize;
- (void)finalize;
- (void)dealloc;
- (void)addCallbackToCancelDuringDeallocation:(id)arg1;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)_forBoundsAnimations:(id)arg1 applyBlock:(CDUnknownBlockType)arg2;
- (void)_addAnimationsForVideoLayer:(id)arg1 size:(struct CGSize)arg2 gravity:(id)arg3 forKey:(id)arg4;
- (void)_addAnimationsForClosedCaptionLayer:(id)arg1 gravity:(id)arg2 forKey:(id)arg3;
- (void)_addAnimationsForMaskLayer:(id)arg1 forKey:(id)arg2;
- (void)_addAnimationsForPIPPlaceholderLayer:(id)arg1 forKey:(id)arg2;
- (void)_addSublayerTransformAnimationToLayer:(id)arg1 fromTransform:(struct CATransform3D)arg2 usingAnimation:(id)arg3 gravity:(id)arg4 presentationSize:(struct CGSize)arg5 forKey:(id)arg6;
- (void)_addPositionAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3;
- (void)_addBoundsAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3;
- (void)setContentsScale:(double)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSublayers;
- (id)initWithLayer:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
