//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BLImagePatchList, NSMutableData, UIImage;

@interface BLRetouchRepairLayer
{
    struct CGContext *_repairAnalysisImageContextRef;
    NSMutableData *_repairAnalysisImageRasterData;
    int _repairAnalysisBufferWidth;
    int _repairAnalysisBufferHeight;
    int _repairAnalysisBufferRowBytes;
    _Bool _isNotFinalStroke;
    int _totalStrokeArea;
    UIImage *_repairAnalysisImage;
    UIImage *_repairSourceImage;
    BLImagePatchList *_repairPatchList;
    struct CGRect _brushStrokeRect;
}

@property(nonatomic) int totalStrokeArea; // @synthesize totalStrokeArea=_totalStrokeArea;
@property(retain, nonatomic) BLImagePatchList *repairPatchList; // @synthesize repairPatchList=_repairPatchList;
@property(nonatomic) struct CGRect brushStrokeRect; // @synthesize brushStrokeRect=_brushStrokeRect;
@property(retain, nonatomic) UIImage *repairSourceImage; // @synthesize repairSourceImage=_repairSourceImage;
@property(retain, nonatomic) UIImage *repairAnalysisImage; // @synthesize repairAnalysisImage=_repairAnalysisImage;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (_Bool)solidBrush;
- (struct CGContext *)newContextForRect:(struct CGRect)arg1 inDestRect:(struct CGRect)arg2 andScale:(double)arg3;
- (void)strokeDidFinish;
- (void)setBrushStrokes:(id)arg1;
- (struct CGRect)drawBrushAtLocation:(struct CGPoint)arg1 opacity:(float)arg2 erase:(_Bool)arg3 magicEdges:(_Bool)arg4 brushSize:(float)arg5 brushSoftness:(float)arg6;

@end

