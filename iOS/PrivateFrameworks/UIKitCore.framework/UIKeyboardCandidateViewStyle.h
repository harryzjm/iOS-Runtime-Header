//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIFont, UIImage;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateViewStyle : NSObject
{
    _Bool _doNotClipToBounds;
    _Bool _hasShadow;
    _Bool _roundsArrowButtonEdge;
    _Bool _shouldJustifyRow;
    _Bool _darkBackdrop;
    _Bool _scrollDisabled;
    _Bool _dragGestureDisabled;
    _Bool _allowCandidateGridExpanding;
    _Bool _showsIndex;
    _Bool _showExtraLineBeforeFirstRow;
    _Bool _fillGridWithLines;
    _Bool _dontSelectLastItemByBackwardMoving;
    _Bool _showOneMoreCandidate;
    _Bool _disableSwitchingSortingMethodByTabKey;
    _Bool _skipInlineCandidate;
    _Bool _hidesPartialCandidates;
    UIFont *_candidateFont;
    UIFont *_supplementalLexiconCandidateFont;
    UIFont *_annotationTextFont;
    UIFont *_alternativeTextFont;
    UIFont *_candidateNumberFont;
    UIFont *_sortControlFont;
    UIColor *_textColor;
    UIColor *_highlightedTextColor;
    UIColor *_alternativeTextColor;
    UIColor *_highlightedAlternativeTextColor;
    UIColor *_candidateNumberColor;
    UIColor *_highlightedCandidateNumberColor;
    UIColor *_backgroundColor;
    UIColor *_cellBackgroundColor;
    UIColor *_arrowButtonBackgroundColor;
    UIColor *_arrowButtonColor;
    UIColor *_gridBackgroundColor;
    UIColor *_highlightedBackgroundColor;
    UIColor *_highlightedRowBackgroundColor;
    UIColor *_groupHeaderBackgroundColor;
    UIColor *_transliterationCandidateBackgroundColor;
    UIColor *_lineColor;
    UIColor *_sortControlColor;
    UIColor *_sortControlBackgroundColor;
    NSString *_arrowButtonImageName;
    UIImage *_cellSeparatorImage;
    UIImage *_slottedCellSeparatorImage;
    UIImage *_leftEdgeSeparatorImage;
    UIImage *_rightEdgeSeparatorImage;
    UIImage *_arrowButtonSeparatorImage;
    UIImage *_leftEdgeMaskImage;
    UIImage *_rightEdgeMaskImage;
    UIImage *_cellBackgroundImage;
    UIImage *_highlightedCellBackgroundImage;
    UIImage *_transliterationCandidateBackgroundImage;
    double _rowHeight;
    double _arrowButtonHeight;
    double _cornerRadius;
    double _cellCornerRadius;
    unsigned long long _maskedCorners;
    unsigned long long _gridMaskedCorners;
    double _foregroundOpacity;
    double _backgroundOpacity;
    long long _layoutOrientation;
    unsigned long long _columnsCount;
    unsigned long long _maxNumberOfProactiveCells;
    double _minimumCellPadding;
    double _minimumCellWidth;
    double _minimumInterItemSpacing;
    double _maximumIconWidth;
    double _singleSlottedCellMargin;
    long long _cellTextAlignment;
    long long _alternativeTextAlignment;
    long long _lineBreakMode;
    long long _minimumNumberOfCandidates;
    struct CGPoint _gridLineOffset;
    struct UIEdgeInsets _extraCellPadding;
    struct UIEdgeInsets _arrowButtonPadding;
    struct UIEdgeInsets _gridPadding;
    struct UIEdgeInsets _gridLinePadding;
    struct UIEdgeInsets _sortControlPadding;
}

+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (id)tvGridStyleForDarkKeyboard:(_Bool)arg1;
+ (id)tvLinearStyleForDarkKeyboard:(_Bool)arg1;
+ (id)disambiguationStyleForDarkKeyboard:(_Bool)arg1;
+ (id)styleForDarkKeyboard:(_Bool)arg1;
+ (id)darkKeyboardStyleForDisambiguation;
+ (id)lightKeyboardStyleForDisambiguation;
+ (id)darkKeyboardStyle;
+ (id)lightKeyboardStyle;
- (void).cxx_destruct;
@property(nonatomic) long long minimumNumberOfCandidates; // @synthesize minimumNumberOfCandidates=_minimumNumberOfCandidates;
@property(nonatomic) _Bool hidesPartialCandidates; // @synthesize hidesPartialCandidates=_hidesPartialCandidates;
@property(nonatomic) _Bool skipInlineCandidate; // @synthesize skipInlineCandidate=_skipInlineCandidate;
@property(nonatomic) _Bool disableSwitchingSortingMethodByTabKey; // @synthesize disableSwitchingSortingMethodByTabKey=_disableSwitchingSortingMethodByTabKey;
@property(nonatomic) _Bool showOneMoreCandidate; // @synthesize showOneMoreCandidate=_showOneMoreCandidate;
@property(nonatomic) _Bool dontSelectLastItemByBackwardMoving; // @synthesize dontSelectLastItemByBackwardMoving=_dontSelectLastItemByBackwardMoving;
@property(nonatomic) _Bool fillGridWithLines; // @synthesize fillGridWithLines=_fillGridWithLines;
@property(nonatomic) _Bool showExtraLineBeforeFirstRow; // @synthesize showExtraLineBeforeFirstRow=_showExtraLineBeforeFirstRow;
@property(nonatomic) _Bool showsIndex; // @synthesize showsIndex=_showsIndex;
@property(nonatomic) _Bool allowCandidateGridExpanding; // @synthesize allowCandidateGridExpanding=_allowCandidateGridExpanding;
@property(nonatomic) _Bool dragGestureDisabled; // @synthesize dragGestureDisabled=_dragGestureDisabled;
@property(nonatomic) _Bool scrollDisabled; // @synthesize scrollDisabled=_scrollDisabled;
@property(nonatomic) _Bool darkBackdrop; // @synthesize darkBackdrop=_darkBackdrop;
@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) long long alternativeTextAlignment; // @synthesize alternativeTextAlignment=_alternativeTextAlignment;
@property(nonatomic) long long cellTextAlignment; // @synthesize cellTextAlignment=_cellTextAlignment;
@property(nonatomic) struct UIEdgeInsets sortControlPadding; // @synthesize sortControlPadding=_sortControlPadding;
@property(nonatomic) struct CGPoint gridLineOffset; // @synthesize gridLineOffset=_gridLineOffset;
@property(nonatomic) struct UIEdgeInsets gridLinePadding; // @synthesize gridLinePadding=_gridLinePadding;
@property(nonatomic) struct UIEdgeInsets gridPadding; // @synthesize gridPadding=_gridPadding;
@property(nonatomic) struct UIEdgeInsets arrowButtonPadding; // @synthesize arrowButtonPadding=_arrowButtonPadding;
@property(nonatomic) struct UIEdgeInsets extraCellPadding; // @synthesize extraCellPadding=_extraCellPadding;
@property(nonatomic) double singleSlottedCellMargin; // @synthesize singleSlottedCellMargin=_singleSlottedCellMargin;
@property(nonatomic) _Bool shouldJustifyRow; // @synthesize shouldJustifyRow=_shouldJustifyRow;
@property(nonatomic) double maximumIconWidth; // @synthesize maximumIconWidth=_maximumIconWidth;
@property(nonatomic) double minimumInterItemSpacing; // @synthesize minimumInterItemSpacing=_minimumInterItemSpacing;
@property(nonatomic) double minimumCellWidth; // @synthesize minimumCellWidth=_minimumCellWidth;
@property(nonatomic) double minimumCellPadding; // @synthesize minimumCellPadding=_minimumCellPadding;
@property(nonatomic) unsigned long long maxNumberOfProactiveCells; // @synthesize maxNumberOfProactiveCells=_maxNumberOfProactiveCells;
@property(nonatomic) unsigned long long columnsCount; // @synthesize columnsCount=_columnsCount;
@property(nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
@property(nonatomic) _Bool roundsArrowButtonEdge; // @synthesize roundsArrowButtonEdge=_roundsArrowButtonEdge;
@property(nonatomic) _Bool hasShadow; // @synthesize hasShadow=_hasShadow;
@property(nonatomic) _Bool doNotClipToBounds; // @synthesize doNotClipToBounds=_doNotClipToBounds;
@property(nonatomic) double backgroundOpacity; // @synthesize backgroundOpacity=_backgroundOpacity;
@property(nonatomic) double foregroundOpacity; // @synthesize foregroundOpacity=_foregroundOpacity;
@property(nonatomic) unsigned long long gridMaskedCorners; // @synthesize gridMaskedCorners=_gridMaskedCorners;
@property(nonatomic) unsigned long long maskedCorners; // @synthesize maskedCorners=_maskedCorners;
@property(nonatomic) double cellCornerRadius; // @synthesize cellCornerRadius=_cellCornerRadius;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double arrowButtonHeight; // @synthesize arrowButtonHeight=_arrowButtonHeight;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(readonly, nonatomic) UIImage *transliterationCandidateBackgroundImage; // @synthesize transliterationCandidateBackgroundImage=_transliterationCandidateBackgroundImage;
@property(retain, nonatomic) UIImage *highlightedCellBackgroundImage; // @synthesize highlightedCellBackgroundImage=_highlightedCellBackgroundImage;
@property(retain, nonatomic) UIImage *cellBackgroundImage; // @synthesize cellBackgroundImage=_cellBackgroundImage;
@property(retain, nonatomic) UIImage *rightEdgeMaskImage; // @synthesize rightEdgeMaskImage=_rightEdgeMaskImage;
@property(retain, nonatomic) UIImage *leftEdgeMaskImage; // @synthesize leftEdgeMaskImage=_leftEdgeMaskImage;
@property(retain, nonatomic) UIImage *arrowButtonSeparatorImage; // @synthesize arrowButtonSeparatorImage=_arrowButtonSeparatorImage;
@property(retain, nonatomic) UIImage *rightEdgeSeparatorImage; // @synthesize rightEdgeSeparatorImage=_rightEdgeSeparatorImage;
@property(retain, nonatomic) UIImage *leftEdgeSeparatorImage; // @synthesize leftEdgeSeparatorImage=_leftEdgeSeparatorImage;
@property(retain, nonatomic) UIImage *slottedCellSeparatorImage; // @synthesize slottedCellSeparatorImage=_slottedCellSeparatorImage;
@property(retain, nonatomic) UIImage *cellSeparatorImage; // @synthesize cellSeparatorImage=_cellSeparatorImage;
@property(copy, nonatomic) NSString *arrowButtonImageName; // @synthesize arrowButtonImageName=_arrowButtonImageName;
@property(retain, nonatomic) UIColor *sortControlBackgroundColor; // @synthesize sortControlBackgroundColor=_sortControlBackgroundColor;
@property(retain, nonatomic) UIColor *sortControlColor; // @synthesize sortControlColor=_sortControlColor;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(retain, nonatomic) UIColor *transliterationCandidateBackgroundColor; // @synthesize transliterationCandidateBackgroundColor=_transliterationCandidateBackgroundColor;
@property(retain, nonatomic) UIColor *groupHeaderBackgroundColor; // @synthesize groupHeaderBackgroundColor=_groupHeaderBackgroundColor;
@property(retain, nonatomic) UIColor *highlightedRowBackgroundColor; // @synthesize highlightedRowBackgroundColor=_highlightedRowBackgroundColor;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *gridBackgroundColor; // @synthesize gridBackgroundColor=_gridBackgroundColor;
@property(retain, nonatomic) UIColor *arrowButtonColor; // @synthesize arrowButtonColor=_arrowButtonColor;
@property(retain, nonatomic) UIColor *arrowButtonBackgroundColor; // @synthesize arrowButtonBackgroundColor=_arrowButtonBackgroundColor;
@property(retain, nonatomic) UIColor *cellBackgroundColor; // @synthesize cellBackgroundColor=_cellBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *highlightedCandidateNumberColor; // @synthesize highlightedCandidateNumberColor=_highlightedCandidateNumberColor;
@property(retain, nonatomic) UIColor *candidateNumberColor; // @synthesize candidateNumberColor=_candidateNumberColor;
@property(retain, nonatomic) UIColor *highlightedAlternativeTextColor; // @synthesize highlightedAlternativeTextColor=_highlightedAlternativeTextColor;
@property(retain, nonatomic) UIColor *alternativeTextColor; // @synthesize alternativeTextColor=_alternativeTextColor;
@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *sortControlFont; // @synthesize sortControlFont=_sortControlFont;
@property(retain, nonatomic) UIFont *candidateNumberFont; // @synthesize candidateNumberFont=_candidateNumberFont;
@property(retain, nonatomic) UIFont *alternativeTextFont; // @synthesize alternativeTextFont=_alternativeTextFont;
@property(retain, nonatomic) UIFont *annotationTextFont; // @synthesize annotationTextFont=_annotationTextFont;
@property(retain, nonatomic) UIFont *supplementalLexiconCandidateFont; // @synthesize supplementalLexiconCandidateFont=_supplementalLexiconCandidateFont;
@property(retain, nonatomic) UIFont *candidateFont; // @synthesize candidateFont=_candidateFont;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

