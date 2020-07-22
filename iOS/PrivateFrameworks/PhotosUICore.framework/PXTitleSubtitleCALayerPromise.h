//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMutableTitleSubtitleCALayerPromise-Protocol.h>

@class NSArray, NSString, PXTitleSubtitleLabelSpec;

@interface PXTitleSubtitleCALayerPromise <PXMutableTitleSubtitleCALayerPromise>
{
    _Bool _diagnosticsEnabled;
    NSString *_titleText;
    NSString *_subtitleText;
    PXTitleSubtitleLabelSpec *_spec;
    long long _typesettingMode;
    double _layerLastBaseline;
    double __textScaleFactor;
    NSArray *_diagnosticsRenderedLines;
    struct CGRect _layerContentBounds;
}

@property(readonly, copy, nonatomic) NSArray *diagnosticsRenderedLines; // @synthesize diagnosticsRenderedLines=_diagnosticsRenderedLines;
@property(nonatomic) _Bool diagnosticsEnabled; // @synthesize diagnosticsEnabled=_diagnosticsEnabled;
@property(readonly, nonatomic) double _textScaleFactor; // @synthesize _textScaleFactor=__textScaleFactor;
@property(readonly, nonatomic) double layerLastBaseline; // @synthesize layerLastBaseline=_layerLastBaseline;
@property(readonly, nonatomic) struct CGRect layerContentBounds; // @synthesize layerContentBounds=_layerContentBounds;
@property(readonly, nonatomic) long long typesettingMode; // @synthesize typesettingMode=_typesettingMode;
@property(readonly, nonatomic) PXTitleSubtitleLabelSpec *spec; // @synthesize spec=_spec;
@property(readonly, copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(readonly, copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (void)setTypesettingMode:(long long)arg1;
- (void)setSpec:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)_attributedStringForLabelWithText:(id)arg1 spec:(id)arg2;
- (id)_linesToRenderWithContext:(struct CGContext *)arg1;
- (void)drawLayerContentInContext:(struct CGContext *)arg1;
- (id)createCustomLayer;
- (id)init;

// Remaining properties
@property(nonatomic) struct CGRect bounds;
@property(nonatomic) double contentsScale;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool rendersAsynchronously;
@property(readonly) Class superclass;

@end

