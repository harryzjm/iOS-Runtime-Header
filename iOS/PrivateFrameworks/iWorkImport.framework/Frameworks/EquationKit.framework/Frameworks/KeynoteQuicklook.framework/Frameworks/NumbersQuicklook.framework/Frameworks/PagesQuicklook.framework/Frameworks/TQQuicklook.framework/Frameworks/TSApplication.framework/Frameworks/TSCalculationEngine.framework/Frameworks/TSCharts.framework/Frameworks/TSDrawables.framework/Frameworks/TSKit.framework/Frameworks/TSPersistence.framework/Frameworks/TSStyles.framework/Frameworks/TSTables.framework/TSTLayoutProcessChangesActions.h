//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSTLayoutProcessChangesActions : NSObject
{
    _Bool _layoutInvalidate;
    _Bool _layoutInvalidateProvider;
    _Bool _layoutInvalidateSize;
    _Bool _layoutInvalidateTableNameVisibility;
    _Bool _layoutSpacesInvalidateCoordinates;
    _Bool _layoutSpacesInvalidateTableOffsets;
    _Bool _layoutInvalidateChildren;
    _Bool _layoutUpdateChildren;
    _Bool _layoutResetScaleToFit;
    unsigned int _layoutSpacesInvalidateCoordinatesAfterRow;
    struct TSUCellCoord _editingCellIDForInvalidation;
}

@property(nonatomic) _Bool layoutResetScaleToFit; // @synthesize layoutResetScaleToFit=_layoutResetScaleToFit;
@property(nonatomic) struct TSUCellCoord editingCellIDForInvalidation; // @synthesize editingCellIDForInvalidation=_editingCellIDForInvalidation;
@property(nonatomic) _Bool layoutUpdateChildren; // @synthesize layoutUpdateChildren=_layoutUpdateChildren;
@property(nonatomic) _Bool layoutInvalidateChildren; // @synthesize layoutInvalidateChildren=_layoutInvalidateChildren;
@property(nonatomic) _Bool layoutSpacesInvalidateTableOffsets; // @synthesize layoutSpacesInvalidateTableOffsets=_layoutSpacesInvalidateTableOffsets;
@property(nonatomic) unsigned int layoutSpacesInvalidateCoordinatesAfterRow; // @synthesize layoutSpacesInvalidateCoordinatesAfterRow=_layoutSpacesInvalidateCoordinatesAfterRow;
@property(nonatomic) _Bool layoutSpacesInvalidateCoordinates; // @synthesize layoutSpacesInvalidateCoordinates=_layoutSpacesInvalidateCoordinates;
@property(nonatomic) _Bool layoutInvalidateTableNameVisibility; // @synthesize layoutInvalidateTableNameVisibility=_layoutInvalidateTableNameVisibility;
@property(nonatomic) _Bool layoutInvalidateSize; // @synthesize layoutInvalidateSize=_layoutInvalidateSize;
@property(nonatomic) _Bool layoutInvalidateProvider; // @synthesize layoutInvalidateProvider=_layoutInvalidateProvider;
@property(nonatomic) _Bool layoutInvalidate; // @synthesize layoutInvalidate=_layoutInvalidate;
- (void)layoutSpacesInvalidateCoordinatesAfterRow:(id)arg1;
- (id)init;

@end

