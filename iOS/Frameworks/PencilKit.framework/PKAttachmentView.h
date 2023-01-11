//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableDictionary, PKDrawing;

@interface PKAttachmentView : UIView
{
    _Bool _contentHidden;
    PKDrawing *_drawing;
    NSMutableDictionary *_tiles;
    NSMutableDictionary *_offscreenTiles;
    NSArray *_additionalStrokes;
    UIView *_tileContainerView;
}

@property(nonatomic) _Bool contentHidden; // @synthesize contentHidden=_contentHidden;
@property(retain, nonatomic) UIView *tileContainerView; // @synthesize tileContainerView=_tileContainerView;
@property(retain, nonatomic) NSArray *additionalStrokes; // @synthesize additionalStrokes=_additionalStrokes;
@property(readonly, nonatomic) NSMutableDictionary *offscreenTiles; // @synthesize offscreenTiles=_offscreenTiles;
@property(readonly, nonatomic) NSMutableDictionary *tiles; // @synthesize tiles=_tiles;
@property(copy, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateTileContainerViewFrame;
- (void)updateDrawingHeight:(double)arg1 notifyDrawingDidChange:(_Bool)arg2;
- (void)updateDrawingHeight:(double)arg1;
- (double)heightFromDrawing:(id)arg1 delta:(double)arg2;
- (void)pixelAlignForContentScale:(double)arg1 enclosingScrollView:(id)arg2;
- (void)updateFrameForTextContainer;
- (void)fingerDrawingEnabledDidChange;
- (void)drawingDidChange;
- (void)drawingWillBegin;
- (_Bool)hitByTouchLocation:(struct CGPoint)arg1 bounds:(struct CGRect)arg2;
- (_Bool)hitChrome:(struct CGPoint)arg1 isStylus:(_Bool)arg2;
@property(readonly, nonatomic) UIView *tileMaskView;
@property(readonly, nonatomic) double drawingScale;
- (_Bool)disableTileAnimations;
- (void)fullyRendered;
- (_Bool)wantsFullyRendered;
@property(readonly, nonatomic) _Bool isAtEndOfDocument;
- (id)initWithFrame:(struct CGRect)arg1 drawing:(id)arg2;

@end
