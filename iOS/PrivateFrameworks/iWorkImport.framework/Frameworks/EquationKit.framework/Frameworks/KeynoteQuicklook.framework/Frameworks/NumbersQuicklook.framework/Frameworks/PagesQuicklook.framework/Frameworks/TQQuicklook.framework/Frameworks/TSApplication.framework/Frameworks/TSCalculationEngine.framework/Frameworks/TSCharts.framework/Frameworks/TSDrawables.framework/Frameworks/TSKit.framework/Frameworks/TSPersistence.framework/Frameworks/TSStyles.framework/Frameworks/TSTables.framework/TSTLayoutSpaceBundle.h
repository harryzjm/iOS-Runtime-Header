//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSTLayout, TSTLayoutSpace;

@interface TSTLayoutSpaceBundle : NSObject
{
    TSTLayout *_layout;
    TSTLayoutSpace *_space;
    TSTLayoutSpace *_frozenHeaderColumnsSpace;
    TSTLayoutSpace *_frozenHeaderRowsSpace;
    TSTLayoutSpace *_frozenHeaderCornerSpace;
    TSTLayoutSpace *_repeatHeaderColumnsSpace;
    TSTLayoutSpace *_repeatHeaderRowsSpace;
    TSTLayoutSpace *_repeatHeaderCornerSpace;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TSTLayoutSpace *repeatHeaderCornerSpace; // @synthesize repeatHeaderCornerSpace=_repeatHeaderCornerSpace;
@property(retain, nonatomic) TSTLayoutSpace *repeatHeaderRowsSpace; // @synthesize repeatHeaderRowsSpace=_repeatHeaderRowsSpace;
@property(retain, nonatomic) TSTLayoutSpace *repeatHeaderColumnsSpace; // @synthesize repeatHeaderColumnsSpace=_repeatHeaderColumnsSpace;
@property(retain, nonatomic) TSTLayoutSpace *frozenHeaderCornerSpace; // @synthesize frozenHeaderCornerSpace=_frozenHeaderCornerSpace;
@property(retain, nonatomic) TSTLayoutSpace *frozenHeaderRowsSpace; // @synthesize frozenHeaderRowsSpace=_frozenHeaderRowsSpace;
@property(retain, nonatomic) TSTLayoutSpace *frozenHeaderColumnsSpace; // @synthesize frozenHeaderColumnsSpace=_frozenHeaderColumnsSpace;
@property(retain, nonatomic) TSTLayoutSpace *space; // @synthesize space=_space;
@property(nonatomic) __weak TSTLayout *layout; // @synthesize layout=_layout;
- (_Bool)enumerateRepeatLayoutSpacesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)enumerateFrozenLayoutSpacesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateLayoutSpacesUsingBlock:(CDUnknownBlockType)arg1;
- (int)validateLayoutSpaces;
- (id)getSpaceContainingCellID:(struct TSUCellCoord)arg1;
- (void)invalidateCoordinatesForEditingCellID:(struct TSUCellCoord)arg1;
- (void)invalidateTableOffsets;
- (void)invalidateCoordinatesAfterRow:(unsigned int)arg1;
- (void)invalidateCoordinatesAfterColumn:(unsigned short)arg1;
- (void)invalidateCoordinates;
- (id)initWithLayout:(id)arg1;

@end

