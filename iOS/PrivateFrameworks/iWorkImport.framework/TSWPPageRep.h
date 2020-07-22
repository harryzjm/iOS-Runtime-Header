//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/CALayerDelegate-Protocol.h>

@class NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface TSWPPageRep <CALayerDelegate>
{
    NSTimer *editingDidBeginTimer;
}

+ (id)p_overflowKnobImage;
@property(retain, nonatomic) NSTimer *editingDidBeginTimer; // @synthesize editingDidBeginTimer;
- (void).cxx_destruct;
- (void)cleanUpTimer;
- (void)p_updateLayoutBordersVisibility;
- (_Bool)p_headerFooterBorderVisibleForType:(int)arg1;
- (void)p_createHeaderFooterOverflowIndicatorLayerIfNecessaryForType:(int)arg1 fragment:(int)arg2;
- (void)p_createHeaderFooterBorderLayerIfNecessaryForType:(int)arg1;
- (id)p_hitRep:(struct CGPoint)arg1 passingTest:(CDUnknownBlockType)arg2;
- (int)p_hitHeaderFooterFragment:(int)arg1 atPoint:(struct CGPoint)arg2;
- (void)p_updateBorderLayers;
- (_Bool)p_hasValidHeaderFooterForType:(int)arg1;
- (_Bool)p_headerFooterIsVisibleAndInteractive:(int)arg1;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (void)updateFromLayout;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
