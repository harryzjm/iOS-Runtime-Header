//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CLKUIQuadViewDisplayLink, NSArray, NSCountedSet, NSMutableArray, NSString;
@protocol CLKUIQuadViewDelegate;

@interface CLKUIQuadView : UIView
{
    NSMutableArray *_mutableQuads;
    CLKUIQuadViewDisplayLink *_displayLink;
    struct {
        unsigned int quadViewWillDisplay:1;
    } _delegateRespondsTo;
    unsigned long long _frameNum;
    unsigned int _debugId;
    NSCountedSet *_disabledRenderingReasons;
    _Bool _singleBufferMode;
    id <CLKUIQuadViewDelegate> _delegate;
    NSString *_debugIdentifier;
}

+ (id)quadViewWithFrame:(struct CGRect)arg1;
+ (id)quadViewWithFrame:(struct CGRect)arg1 options:(unsigned long long)arg2;
+ (id)quadViewWithFrame:(struct CGRect)arg1 options:(unsigned long long)arg2 colorSpace:(long long)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *debugIdentifier; // @synthesize debugIdentifier=_debugIdentifier;
@property(nonatomic) _Bool singleBufferMode; // @synthesize singleBufferMode=_singleBufferMode;
@property(nonatomic) __weak id <CLKUIQuadViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)discardContents;
- (void)_handleQuadArrayChange:(id)arg1;
- (_Bool)_displayAndCheckForDrawable:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)snapshotInRect:(struct CGRect)arg1 scale:(double)arg2 time:(double)arg3;
- (void)_prerenderForTime:(double)arg1;
- (void)removeAllQuads;
- (void)removeQuad:(id)arg1;
- (void)addQuadsFromArray:(id)arg1;
- (void)addQuad:(id)arg1;
@property(readonly, nonatomic) NSArray *quads;
@property(readonly, nonatomic) unsigned long long frameNum;
@property(nonatomic, getter=isPaused) _Bool paused;
@property(nonatomic) long long preferredFramesPerSecond;
- (_Bool)_prepareAndRenderForTime:(double)arg1 inGroup:(id)arg2 checkForDrawable:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeDisabledRenderingReason:(id)arg1;
- (void)addDisabledRenderingReason:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 options:(unsigned long long)arg2;
- (_Bool)renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1 inGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1 inGroup:(id)arg2;

@end
