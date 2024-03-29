//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CPLayoutArea
{
    _Bool isFirstLayout;
    _Bool hasRotatedCharacters;
}

- (id)description;
- (id)properties;
- (_Bool)hasRotatedCharacters;
- (void)setHasRotatedCharacters:(_Bool)arg1;
- (double)selectionBottom;
- (struct CGRect)layoutAreaBounds;
- (_Bool)isShapeRegion;
- (_Bool)isImageRegion;
- (void)setIsImageRegion:(_Bool)arg1;
- (_Bool)isRowRegion;
- (_Bool)isGraphicalRegion;
- (_Bool)isBoxRegion;
- (void)addColumnBreaks;
- (void)setIsFirstLayout:(_Bool)arg1;
- (_Bool)isFirstLayout;
- (_Bool)isSimilarTo:(id)arg1;
- (void)accept:(id)arg1;
- (id)init;

@end

