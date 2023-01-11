//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/NSObject-Protocol.h>
#import <iWorkImport/TSPCopying-Protocol.h>

@class NSArray, NSData, PKDrawing, TSPData, TSUColor;

@protocol TSKPencilAnnotationStorage <NSObject, TSPCopying>
@property(readonly, nonatomic) PKDrawing *drawingForTextRecognition;
@property(readonly, nonatomic) _Bool needsTextRecognition;
@property(readonly, nonatomic) _Bool shouldShowAnchorRect;
@property(readonly, nonatomic) NSArray *subStorages;
@property(readonly, nonatomic) long long toolType;
@property(readonly, nonatomic) TSUColor *penColor;
@property(readonly, nonatomic) _Bool shouldSplitAcrossAnchorRects;
@property(readonly, nonatomic) _Bool shouldResizeWithAnchor;
@property(readonly, nonatomic) struct CGPoint centerOfStrokes;
@property(readonly, nonatomic) struct CGRect unscaledBoundsOfStrokes;
@property(readonly, nonatomic) struct CGPath *path;
@property(readonly, nonatomic) PKDrawing *drawing;
@property(readonly, nonatomic) NSData *encodedDrawing;
@property(readonly, nonatomic) struct CGSize rasterizedImageSize;
@property(readonly, nonatomic) TSPData *rasterizedImageTSPData;
@property(readonly, nonatomic) unsigned long long visibleStrokesCount;
@property(readonly, nonatomic) unsigned long long textBaselinesTouchedCount;
@property(readonly, nonatomic) double percentOfPAContainedInParentRep;
@property(readonly, nonatomic) struct CGSize originalAttachedSize;
@property(readonly, nonatomic) struct CGPoint markupOffset;
@property(readonly, nonatomic) long long attachedType;
@property(readonly, nonatomic) long long attachedLocation;
@end
