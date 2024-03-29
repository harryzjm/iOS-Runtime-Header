//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHRecognitionSessionResult, NSSet;
@protocol CHStrokeGroupBasedVisualizationDelegate;

@interface CHStrokeGroupBasedVisualization
{
    _Bool _newGroupsDefaultToActive;
    CHRecognitionSessionResult *_resultDrawn;
    NSSet *_activeStrokeGroupAncestorIdentifiers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool newGroupsDefaultToActive; // @synthesize newGroupsDefaultToActive=_newGroupsDefaultToActive;
@property(copy, nonatomic) NSSet *activeStrokeGroupAncestorIdentifiers; // @synthesize activeStrokeGroupAncestorIdentifiers=_activeStrokeGroupAncestorIdentifiers;
@property(retain, nonatomic) CHRecognitionSessionResult *resultDrawn; // @synthesize resultDrawn=_resultDrawn;
- (void)_markStrokeGroupsAsActive:(id)arg1;
- (void)toggleVisualizationRegionAtPoint:(struct CGPoint)arg1;
- (void)drawVisualizationInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 viewBounds:(struct CGRect)arg3;
- (void)recognitionSessionDidUpdateRecognitionResult;
- (struct CGRect)dirtyRectForStrokeGroup:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <CHStrokeGroupBasedVisualizationDelegate> delegate; // @dynamic delegate;

@end

