//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface TSTTableRepProcessChangesActions : NSObject
{
    _Bool _invalidateAllChrome;
    _Bool _invalidateColumnChrome;
    _Bool _invalidateRowChrome;
    _Bool _hideChromeContextMenuButton;
    _Bool _invalidateKnobs;
    _Bool _invalidateSelection;
    _Bool _invalidateTableName;
    _Bool _updateEditorRemainders;
    _Bool _syncReferenceHighlightState;
    _Bool _setNeedsDisplay;
    _Bool _hideStepperHUD;
    CDStruct_5f1f7aa9 dirtyCellRange;
    CDStruct_5f1f7aa9 dirtyStrokeRange;
}

@property(nonatomic) _Bool hideStepperHUD; // @synthesize hideStepperHUD=_hideStepperHUD;
@property(nonatomic) _Bool setNeedsDisplay; // @synthesize setNeedsDisplay=_setNeedsDisplay;
@property(nonatomic) _Bool syncReferenceHighlightState; // @synthesize syncReferenceHighlightState=_syncReferenceHighlightState;
@property(nonatomic) _Bool updateEditorRemainders; // @synthesize updateEditorRemainders=_updateEditorRemainders;
@property(nonatomic) _Bool invalidateTableName; // @synthesize invalidateTableName=_invalidateTableName;
@property(nonatomic) _Bool invalidateSelection; // @synthesize invalidateSelection=_invalidateSelection;
@property(nonatomic) _Bool invalidateKnobs; // @synthesize invalidateKnobs=_invalidateKnobs;
@property(nonatomic) _Bool hideChromeContextMenuButton; // @synthesize hideChromeContextMenuButton=_hideChromeContextMenuButton;
@property(nonatomic) _Bool invalidateRowChrome; // @synthesize invalidateRowChrome=_invalidateRowChrome;
@property(nonatomic) _Bool invalidateColumnChrome; // @synthesize invalidateColumnChrome=_invalidateColumnChrome;
@property(nonatomic) _Bool invalidateAllChrome; // @synthesize invalidateAllChrome=_invalidateAllChrome;
@property(nonatomic) CDStruct_5f1f7aa9 dirtyStrokeRange; // @synthesize dirtyStrokeRange;
@property(nonatomic) CDStruct_5f1f7aa9 dirtyCellRange; // @synthesize dirtyCellRange;

@end

