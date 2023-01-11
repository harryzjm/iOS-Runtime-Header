//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSTLayout, TSTLayoutSpace;

@interface TSTLayoutSpaceBundle : NSObject
{
    TSTLayout *mLayout;
    TSTLayoutSpace *mSpace;
    TSTLayoutSpace *mFrozenHeaderColumnsSpace;
    TSTLayoutSpace *mFrozenHeaderRowsSpace;
    TSTLayoutSpace *mFrozenHeaderCornerSpace;
    TSTLayoutSpace *mRepeatHeaderColumnsSpace;
    TSTLayoutSpace *mRepeatHeaderRowsSpace;
    TSTLayoutSpace *mRepeatHeaderCornerSpace;
}

@property(retain, nonatomic) TSTLayoutSpace *repeatHeaderCornerSpace; // @synthesize repeatHeaderCornerSpace=mRepeatHeaderCornerSpace;
@property(retain, nonatomic) TSTLayoutSpace *repeatHeaderRowsSpace; // @synthesize repeatHeaderRowsSpace=mRepeatHeaderRowsSpace;
@property(retain, nonatomic) TSTLayoutSpace *repeatHeaderColumnsSpace; // @synthesize repeatHeaderColumnsSpace=mRepeatHeaderColumnsSpace;
@property(retain, nonatomic) TSTLayoutSpace *frozenHeaderCornerSpace; // @synthesize frozenHeaderCornerSpace=mFrozenHeaderCornerSpace;
@property(retain, nonatomic) TSTLayoutSpace *frozenHeaderRowsSpace; // @synthesize frozenHeaderRowsSpace=mFrozenHeaderRowsSpace;
@property(retain, nonatomic) TSTLayoutSpace *frozenHeaderColumnsSpace; // @synthesize frozenHeaderColumnsSpace=mFrozenHeaderColumnsSpace;
@property(retain, nonatomic) TSTLayoutSpace *space; // @synthesize space=mSpace;
@property(nonatomic) TSTLayout *layout; // @synthesize layout=mLayout;
- (id)description;
- (_Bool)performActionOnRepeatLayoutSpaces:(CDUnknownBlockType)arg1;
- (_Bool)performActionOnFrozenLayoutSpaces:(CDUnknownBlockType)arg1;
- (void)performActionOnEachLayoutSpace:(CDUnknownBlockType)arg1;
- (int)validateLayoutSpaces;
- (id)getSpaceContainingCellID:(CDStruct_0441cfb5)arg1;
- (void)invalidateTableOffsets;
- (void)invalidateCoordinates;
- (void)dealloc;
- (id)initWithLayout:(id)arg1;

@end

