//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSUColor;

__attribute__((visibility("hidden")))
@interface TSDFreehandDrawingToolkitUIState
{
    unsigned long long _currentToolType;
    unsigned long long _mostRecentPenToolType;
    TSUColor *_penToolColor;
    double _penToolOpacity;
    double _penToolUnscaledWidth;
    TSUColor *_pencilToolColor;
    double _pencilToolOpacity;
    double _pencilToolUnscaledWidth;
    TSUColor *_crayonToolColor;
    double _crayonToolOpacity;
    double _crayonToolUnscaledWidth;
    TSUColor *_fillToolColor;
    double _fillToolOpacity;
    double _eraserToolScaledWidth;
    _Bool _eraserToolErasesWholeObjects;
}

@property(readonly, nonatomic) unsigned long long mostRecentPenToolType; // @synthesize mostRecentPenToolType=_mostRecentPenToolType;
@property(nonatomic) unsigned long long currentToolType; // @synthesize currentToolType=_currentToolType;
- (void).cxx_destruct;
- (void)p_setColor:(id)arg1 forToolType:(unsigned long long)arg2;
- (void)saveToArchive:(struct FreehandDrawingToolkitUIState *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct FreehandDrawingToolkitUIState *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copy;
- (void)p_setDefaultToolType:(unsigned long long)arg1;
- (unsigned long long)p_defaultToolType;
- (unsigned long long)p_indexOfDefaultStrokeWidthForFreehandDrawingToolType:(unsigned long long)arg1;
- (_Bool)isEqualToFreehandDrawingToolkitUIState:(id)arg1;
- (id)strokeWidthsForFreehandDrawingToolType:(unsigned long long)arg1;
- (double)p_defaultStrokeWidthForToolType:(unsigned long long)arg1;
- (void)p_setupDefaultValuesFromUnarchive:(_Bool)arg1;
- (id)initWithContext:(id)arg1;

@end

