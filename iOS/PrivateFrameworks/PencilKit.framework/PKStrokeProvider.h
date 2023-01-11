//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PencilKit/CHStrokeProvider-Protocol.h>

@class NSArray, NSMutableDictionary, NSMutableOrderedSet, NSOrderedSet, NSString, PKDrawing;
@protocol CHStrokeProviderVersion;

@interface PKStrokeProvider : NSObject <CHStrokeProvider>
{
    _Bool _disabled;
    NSMutableOrderedSet *_strokeSlices;
    _Bool _shouldProcessVisibleStrokes;
    NSArray *_visibleOnscreenStrokes;
    NSMutableDictionary *_strokeIdsByEncoding;
    long long groupingPriority;
    PKDrawing *_drawing;
}

+ (id)_identifiersForStrokes:(id)arg1;
+ (id)slicesForStrokes:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
@property(readonly) long long groupingPriority; // @synthesize groupingPriority;
- (id)sliceForIdentifier:(id)arg1;
@property(readonly, copy) NSOrderedSet *visibleStrokeEncodedIdentifiers;
- (id)encodedStrokeIdentifier:(id)arg1;
- (id)strokeIdentifierFromData:(id)arg1;
- (id)_cachedStrokeIdentifier:(id)arg1;
- (void)_cacheStrokeIdentifier:(id)arg1 withEncodedStrokeIdentifier:(id)arg2;
- (id)strokeForIdentifier:(id)arg1;
- (_Bool)isStroke:(id)arg1 versionOfStrokeWithIdentifier:(id)arg2;
- (long long)compareOrderOfStroke:(id)arg1 toStroke:(id)arg2;
@property(readonly) struct CGSize drawingCanvasSize;
- (unsigned long long)compareStyleOfStrokeWithIdentifier:(id)arg1 toStrokeWithIdentifier:(id)arg2;
- (long long)compareOrderOfStrokeWithIdentifier:(id)arg1 toStrokeWithIdentifier:(id)arg2;
- (_Bool)enumerateChangesSinceVersion:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSArray *orderedStrokes;
- (id)slices;
@property(readonly, retain) id <CHStrokeProviderVersion> strokeProviderVersion;
@property(readonly, copy) NSString *description;
- (id)initWithDrawing:(id)arg1 visibleOnscreenStrokes:(id)arg2 shouldProcessVisibleStrokes:(_Bool)arg3;
- (id)initWithDrawing:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
