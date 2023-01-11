//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSTStrokeLayerStrokeAndRange-Protocol.h>

@class NSString, TSDStroke;
@protocol TSTStrokeLayerStrokeAndRange;

__attribute__((visibility("hidden")))
@interface TSTStrokeOrderedLayerToken : NSObject <TSTStrokeLayerStrokeAndRange>
{
    int _order;
    TSDStroke *_stroke;
    id <TSTStrokeLayerStrokeAndRange> _majorStrokeLayerToken;
    id <TSTStrokeLayerStrokeAndRange> _minorStrokeLayerToken;
    struct TSTSimpleRange _range;
}

+ (id)tokenWithStroke:(id)arg1 range:(struct TSTSimpleRange)arg2 order:(int)arg3 majorStrokeLayerToken:(id)arg4 minorStrokeLayerToken:(id)arg5;
@property(retain, nonatomic) id <TSTStrokeLayerStrokeAndRange> minorStrokeLayerToken; // @synthesize minorStrokeLayerToken=_minorStrokeLayerToken;
@property(retain, nonatomic) id <TSTStrokeLayerStrokeAndRange> majorStrokeLayerToken; // @synthesize majorStrokeLayerToken=_majorStrokeLayerToken;
@property(nonatomic) int order; // @synthesize order=_order;
@property(nonatomic) struct TSTSimpleRange range; // @synthesize range=_range;
@property(retain, nonatomic) TSDStroke *stroke; // @synthesize stroke=_stroke;
- (void).cxx_destruct;
- (id)initWithStroke:(id)arg1 range:(struct TSTSimpleRange)arg2 order:(int)arg3 majorStrokeLayerToken:(id)arg4 minorStrokeLayerToken:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

