//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/TSWPRep.h>

#import <Silex/SXAXCustomRotorItemProvider-Protocol.h>
#import <Silex/SXTextTangierRepAccessibilityElement-Protocol.h>

@class NSString, SXAXCustomRotor, SXTextTangierInteractiveCanvasController;
@protocol SXTextTangierRepAccessibilityDataSource;

@interface SXTextTangierFlowRep : TSWPRep <SXAXCustomRotorItemProvider, SXTextTangierRepAccessibilityElement>
{
    id <SXTextTangierRepAccessibilityDataSource> accessibilityDataSource;
    SXAXCustomRotor *_linkRotor;
    SXAXCustomRotor *_headingsRotor;
    SXTextTangierInteractiveCanvasController *_icc;
    struct CGRect _frameInCanvas;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect frameInCanvas; // @synthesize frameInCanvas=_frameInCanvas;
@property(nonatomic) __weak SXTextTangierInteractiveCanvasController *icc; // @synthesize icc=_icc;
@property(retain, nonatomic) SXAXCustomRotor *headingsRotor; // @synthesize headingsRotor=_headingsRotor;
@property(retain, nonatomic) SXAXCustomRotor *linkRotor; // @synthesize linkRotor=_linkRotor;
@property(nonatomic) __weak id <SXTextTangierRepAccessibilityDataSource> accessibilityDataSource; // @synthesize accessibilityDataSource;
- (id)sxaxNameForEditRotorAction:(id)arg1;
- (id)sxaxSupportedEditRotorActions;
- (_Bool)accessibilitySupportsTextSelection;
- (id)accessibilityPreviousTextNavigationElement;
- (id)accessibilityNextTextNavigationElement;
- (id)interactiveCanvasController;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (id)accessibilityElements;
- (unsigned long long)accessibilityTraits;
- (struct CGRect)accessibilityFrameForScrolling;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (_Bool)isAccessibilityElement;
- (id)_accessibilityUserTestingChildren;
- (id)sxaxLinkElements;
- (id)itemsForCustomRotor:(id)arg1;
- (id)supportedCustomRotors;
- (void)dealloc;
- (_Bool)updateFromVisualPosition;
- (id)orderedSiblings;
- (id)siblings;
- (unsigned long long)charIndexForPointWithPinning:(struct CGPoint)arg1 isTail:(_Bool)arg2 selectionType:(int)arg3;
- (id)repForCharIndex:(unsigned long long)arg1 isStart:(_Bool)arg2;
- (_Bool)p_doesRep:(id)arg1 containCharIndex:(unsigned long long)arg2 isStart:(_Bool)arg3;
- (id)hitRep:(struct CGPoint)arg1 withGesture:(id)arg2 passingTest:(CDUnknownBlockType)arg3;
- (_Bool)preventClipToColumn;
- (_Bool)forceTiling;
- (Class)wpEditorClass;
- (id)storage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
