//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class TSDStroke, TSTStrokeLayerMergedStack;

__attribute__((visibility("hidden")))
@interface TSTStrokeExportCache : NSObject
{
    TSTStrokeLayerMergedStack *_mergedStrokes;
    TSDStroke *_stroke;
    struct TSTSimpleRange _range;
}

@property(retain, nonatomic) TSDStroke *stroke; // @synthesize stroke=_stroke;
@property(nonatomic) struct TSTSimpleRange range; // @synthesize range=_range;
@property(retain, nonatomic) TSTStrokeLayerMergedStack *mergedStrokes; // @synthesize mergedStrokes=_mergedStrokes;
- (id)strokeAtIndex:(unsigned short)arg1;
- (void)dealloc;
- (id)initWithMergedStack:(id)arg1;

@end
