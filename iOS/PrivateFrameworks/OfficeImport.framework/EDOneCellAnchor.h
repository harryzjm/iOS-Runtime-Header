//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface EDOneCellAnchor
{
    struct EDCellAnchorMarker mFrom;
    struct CGSize mSize;
    _Bool mIsRelative;
}

- (id).cxx_construct;
- (void)setRelative:(_Bool)arg1;
- (_Bool)isRelative;
- (void)setSize:(struct CGSize)arg1;
- (struct CGSize)size;
- (void)setFrom:(struct EDCellAnchorMarker)arg1;
- (struct EDCellAnchorMarker)from;

@end
