//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CPRegion
{
    _Bool isTextRegion;
    _Bool isImageRegion;
    _Bool isCompoundShape;
    CPRegion *nextRegion;
    int order;
    id link;
}

- (id)link;
- (void)setLink:(id)arg1;
- (void)setOrder:(int)arg1;
- (int)order;
- (void)setNextRegion:(id)arg1;
- (id)nextRegion;
- (_Bool)isIndivisible;
- (_Bool)isRotated;
- (_Bool)isZone;
- (void)setIsCompoundShape:(_Bool)arg1;
- (_Bool)isCompoundShape;
- (_Bool)isGraphicalRegion;
- (void)setIsTextRegion:(_Bool)arg1;
- (_Bool)isBodyZone;
- (_Bool)isTableCellRegion;
- (_Bool)isRowRegion;
- (_Bool)isListItemRegion;
- (_Bool)isParagraphRegion;
- (_Bool)isShapeRegion;
- (void)setIsImageRegion:(_Bool)arg1;
- (_Bool)isImageRegion;
- (_Bool)isBoxRegion;
- (_Bool)isTextRegion;
- (void)accept:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

