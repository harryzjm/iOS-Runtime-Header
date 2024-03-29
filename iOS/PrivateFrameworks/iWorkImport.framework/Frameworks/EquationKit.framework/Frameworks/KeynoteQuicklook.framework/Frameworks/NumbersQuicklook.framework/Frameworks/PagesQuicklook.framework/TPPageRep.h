//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSText/TSWPPageRep.h>

@class CALayer, NSString, TPiOSMarginAdjustRep, TSDFill;

@interface TPPageRep : TSWPPageRep
{
    CALayer *_horizontalSeparatorLayer;
    CALayer *_verticalSeparatorLayer;
    _Bool _backgroundFillRequiresLayerUpdate;
    _Bool _fillCanApplyToCALayer;
    TPiOSMarginAdjustRep *_marginAdjustRep;
    TSDFill *_cachedBackgroundFill;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TSDFill *cachedBackgroundFill; // @synthesize cachedBackgroundFill=_cachedBackgroundFill;
@property(readonly, nonatomic) TPiOSMarginAdjustRep *marginAdjustRep; // @synthesize marginAdjustRep=_marginAdjustRep;
- (id)parentRepForMagnification;
- (id)bodyReps;
- (_Bool)masksToBounds;
- (void)drawInContext:(struct CGContext *)arg1;
- (_Bool)directlyManagesLayerContent;
- (_Bool)p_pageRequiresHorizontalSeparator;
- (_Bool)childRepIsMasterDrawable:(id)arg1;
- (_Bool)childRepIsOnDocSetupCanvas:(id)arg1;
- (void)willBeRemoved;
- (id)colorBehindBodyTextLayer:(id)arg1;
- (_Bool)isOpaque;
- (id)backgroundFill;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

