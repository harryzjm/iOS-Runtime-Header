//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, CAShapeLayer, NSArray, NSMutableArray, UIBezierPath, UIColor;
@protocol VKCImageCustomHighlightViewDelegate;

__attribute__((visibility("hidden")))
@interface VKCImageCustomHighlightView
{
    _Bool _isConfiguringHighlights;
    id <VKCImageCustomHighlightViewDelegate> _highlightViewDelegate;
    NSArray *_highlightRanges;
    NSArray *_selectionRects;
    NSArray *_matchedRanges;
    CAShapeLayer *_highlightLayer;
    CALayer *_highlightShadowLayer;
    CAShapeLayer *_highlightColorLayer;
    UIBezierPath *_normalizedHighlightPath;
    UIBezierPath *_borderedNormalizedHighlightPath;
    NSMutableArray *_highlightDots;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *highlightDots; // @synthesize highlightDots=_highlightDots;
@property(nonatomic) _Bool isConfiguringHighlights; // @synthesize isConfiguringHighlights=_isConfiguringHighlights;
@property(retain, nonatomic) UIBezierPath *borderedNormalizedHighlightPath; // @synthesize borderedNormalizedHighlightPath=_borderedNormalizedHighlightPath;
@property(retain, nonatomic) UIBezierPath *normalizedHighlightPath; // @synthesize normalizedHighlightPath=_normalizedHighlightPath;
@property(retain, nonatomic) CAShapeLayer *highlightColorLayer; // @synthesize highlightColorLayer=_highlightColorLayer;
@property(retain, nonatomic) CALayer *highlightShadowLayer; // @synthesize highlightShadowLayer=_highlightShadowLayer;
@property(retain, nonatomic) CAShapeLayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
@property(retain, nonatomic) NSArray *matchedRanges; // @synthesize matchedRanges=_matchedRanges;
@property(retain, nonatomic) NSArray *selectionRects; // @synthesize selectionRects=_selectionRects;
@property(retain, nonatomic) NSArray *highlightRanges; // @synthesize highlightRanges=_highlightRanges;
@property(nonatomic) __weak id <VKCImageCustomHighlightViewDelegate> highlightViewDelegate; // @synthesize highlightViewDelegate=_highlightViewDelegate;
- (void)_configureHighlightDotForRanges:(id)arg1;
- (void)performHighlightForRanges:(id)arg1 animated:(_Bool)arg2 isReplacingResults:(_Bool)arg3;
- (void)beginHighlightWithRanges:(id)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGAffineTransform)transformForHighlightLayerInCurrentBounds;
- (struct CGRect)currentContentsRectInLayerCoordinates;
- (void)updateHighlightLayerGeometry;
- (void)updateHighlightLayerGeometryIfVisible;
- (void)clearHighlightsAnimated:(_Bool)arg1 hideLayers:(_Bool)arg2;
- (void)clearHighlightsAnimated:(_Bool)arg1;
- (void)normalizedVisibleRectDidChange;
@property(readonly, nonatomic) UIColor *highlightColor;
- (id)initWithDelegate:(id)arg1;

@end

