//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSApplication/TSKPdfTagger-Protocol.h>

@class TSDFreehandDrawingRep, TSDRep;
@protocol TSKPencilAnnotationStorage;

@protocol TSDPdfTagger <TSKPdfTagger>
- (void)endFreehandDrawing:(TSDFreehandDrawingRep *)arg1;
- (void)beginFreehandDrawing:(TSDFreehandDrawingRep *)arg1;
- (void)endPencilAnnotation:(id <TSKPencilAnnotationStorage>)arg1;
- (void)beginPencilAnnotation:(id <TSKPencilAnnotationStorage>)arg1;
- (void)endObject:(TSDRep *)arg1;
- (void)beginObject:(TSDRep *)arg1;
@end

