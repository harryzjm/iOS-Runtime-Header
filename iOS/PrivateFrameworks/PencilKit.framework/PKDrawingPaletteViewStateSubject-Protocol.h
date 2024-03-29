//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/PKPaletteViewStateSubject-Protocol.h>

@class NSArray, NSString, PKTool, UIMenu;

@protocol PKDrawingPaletteViewStateSubject <PKPaletteViewStateSubject>
@property(readonly, nonatomic) _Bool wantsScrollableTools;
@property(readonly, nonatomic) _Bool shouldHideHoverPreviewToggle;
@property(readonly, nonatomic) double _toolsContainerWidth;
@property(readonly, nonatomic) NSString *lassoToolEditingViewIdentifier;
@property(readonly, nonatomic) _Bool showsLassoToolEditingView;
@property(readonly, nonatomic) _Bool prefersLargeContextualEditingUI;
@property(readonly, nonatomic) _Bool colorSwatchesVisible;
@property(readonly, nonatomic) _Bool wantsMulticolorSwatchShadowInCompactSize;
@property(readonly, nonatomic) _Bool useEqualSpacingLayoutInCompactSize;
@property(readonly, nonatomic) double interItemUndoRedoButtonsSpacingInCompactSize;
@property(readonly, nonatomic) double interItemUndoRedoButtonsSpacing;
@property(readonly, nonatomic) double interItemToolsSpacingInCompactSize;
@property(readonly, nonatomic) _Bool wantsEllipsisButtonVisibleInCompactSize;
@property(readonly, nonatomic) _Bool wantsUndoRedoButtonsShadowInCompactSize;
@property(readonly, nonatomic) _Bool wantsUndoRedoButtonsVisibleInCompactSize;
@property(readonly, nonatomic) long long floatingKeyboardType;
@property(readonly, nonatomic) _Bool enableKeyboardButtons;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
@property(readonly, nonatomic) NSArray *inputAssistantItems;
@property(readonly, nonatomic) _Bool showsShapeButton;
@property(readonly, nonatomic) _Bool showsTextButton;
@property(readonly, nonatomic) UIMenu *plusButtonMenu;
@property(readonly, nonatomic) _Bool showsPlusButton;
@property(readonly, nonatomic) _Bool hasHandwritingTool;
@property(readonly, nonatomic) PKTool *selectedTool;
@end

