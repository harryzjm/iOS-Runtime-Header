//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeUI/HUGridDisplayOptions-Protocol.h>
#import <HomeUI/NSCopying-Protocol.h>

@class HUGridCameraCellLayoutOptions, HUGridHeadlineCellLayoutOptions, HUGridSceneCellLayoutOptions, HUGridServiceCellLayoutOptions, HUNavigationBarLayoutOptions, NSNumber, NSString, UIFont;

@interface HUGridLayoutOptions : NSObject <HUGridDisplayOptions, NSCopying>
{
    _Bool _headlineHidden;
    _Bool _statusHidden;
    _Bool _editing;
    unsigned long long _contentColorStyle;
    long long _scrollDirection;
    unsigned long long _columnStyle;
    UIFont *_headlineFont;
    UIFont *_statusItemFont;
    UIFont *_statusDetailsFont;
    UIFont *_sectionHeaderFont;
    double _headlineBaselineToFirstStatusItemBaselineDistance;
    double _topOfViewToFirstStatusItemBaselineDistance;
    unsigned long long _maxStatusItemCount;
    unsigned long long _maxStatusItemNumberOfLines;
    double _statusItemBaselineToNextStatusItemBaselineDistance;
    double _lastStatusItemBaselineToStatusDetailsBaselineDistance;
    double _statusDetailsBaselineToFirstSectionTitleBaselineDistance;
    double _headlineBaselineToSceneHeaderBaselineDistance;
    double _sectionTopMargin;
    double _sectionBottomMargin;
    double _sectionLeadingMargin;
    double _sectionTrailingMargin;
    double _sectionBottomToNextSectionTitleBaselineDistance;
    double _minimumMarginBelowHeadline;
    double _minimumMarginBelowStatus;
    double _rowSpacing;
    double _columnSpacing;
    NSNumber *_overrideNumberOfColumns;
    HUGridCameraCellLayoutOptions *_cameraCellOptions;
    HUGridHeadlineCellLayoutOptions *_headlineCellOptions;
    HUGridSceneCellLayoutOptions *_sceneCellOptions;
    HUGridServiceCellLayoutOptions *_serviceCellOptions;
    HUNavigationBarLayoutOptions *_navigationBarOptions;
    NSNumber *_overrideViewSizeSubclass;
    struct CGSize _viewSize;
    struct UIEdgeInsets _sectionTitleMargin;
}

+ (unsigned long long)_numberOfColumnsForFlexibleWidthStyleWithSizeSubclass:(long long)arg1;
+ (id)defaultOptionsForViewSize:(struct CGSize)arg1 columnStyle:(unsigned long long)arg2 overrideSizeSubclass:(id)arg3;
+ (id)defaultOptionsForViewSize:(struct CGSize)arg1 columnStyle:(unsigned long long)arg2;
+ (id)defaultOptionsForViewSize:(struct CGSize)arg1 overrideSizeSubclass:(long long)arg2;
+ (id)defaultOptionsForViewSize:(struct CGSize)arg1;
@property(retain, nonatomic) NSNumber *overrideViewSizeSubclass; // @synthesize overrideViewSizeSubclass=_overrideViewSizeSubclass;
@property(copy, nonatomic) HUNavigationBarLayoutOptions *navigationBarOptions; // @synthesize navigationBarOptions=_navigationBarOptions;
@property(copy, nonatomic) HUGridServiceCellLayoutOptions *serviceCellOptions; // @synthesize serviceCellOptions=_serviceCellOptions;
@property(copy, nonatomic) HUGridSceneCellLayoutOptions *sceneCellOptions; // @synthesize sceneCellOptions=_sceneCellOptions;
@property(copy, nonatomic) HUGridHeadlineCellLayoutOptions *headlineCellOptions; // @synthesize headlineCellOptions=_headlineCellOptions;
@property(copy, nonatomic) HUGridCameraCellLayoutOptions *cameraCellOptions; // @synthesize cameraCellOptions=_cameraCellOptions;
@property(retain, nonatomic) NSNumber *overrideNumberOfColumns; // @synthesize overrideNumberOfColumns=_overrideNumberOfColumns;
@property(nonatomic) double columnSpacing; // @synthesize columnSpacing=_columnSpacing;
@property(nonatomic) double rowSpacing; // @synthesize rowSpacing=_rowSpacing;
@property(nonatomic) double minimumMarginBelowStatus; // @synthesize minimumMarginBelowStatus=_minimumMarginBelowStatus;
@property(nonatomic) double minimumMarginBelowHeadline; // @synthesize minimumMarginBelowHeadline=_minimumMarginBelowHeadline;
@property(nonatomic) struct UIEdgeInsets sectionTitleMargin; // @synthesize sectionTitleMargin=_sectionTitleMargin;
@property(nonatomic) double sectionBottomToNextSectionTitleBaselineDistance; // @synthesize sectionBottomToNextSectionTitleBaselineDistance=_sectionBottomToNextSectionTitleBaselineDistance;
@property(nonatomic) double sectionTrailingMargin; // @synthesize sectionTrailingMargin=_sectionTrailingMargin;
@property(nonatomic) double sectionLeadingMargin; // @synthesize sectionLeadingMargin=_sectionLeadingMargin;
@property(nonatomic) double sectionBottomMargin; // @synthesize sectionBottomMargin=_sectionBottomMargin;
@property(nonatomic) double sectionTopMargin; // @synthesize sectionTopMargin=_sectionTopMargin;
@property(nonatomic) double headlineBaselineToSceneHeaderBaselineDistance; // @synthesize headlineBaselineToSceneHeaderBaselineDistance=_headlineBaselineToSceneHeaderBaselineDistance;
@property(nonatomic) double statusDetailsBaselineToFirstSectionTitleBaselineDistance; // @synthesize statusDetailsBaselineToFirstSectionTitleBaselineDistance=_statusDetailsBaselineToFirstSectionTitleBaselineDistance;
@property(nonatomic) double lastStatusItemBaselineToStatusDetailsBaselineDistance; // @synthesize lastStatusItemBaselineToStatusDetailsBaselineDistance=_lastStatusItemBaselineToStatusDetailsBaselineDistance;
@property(nonatomic) double statusItemBaselineToNextStatusItemBaselineDistance; // @synthesize statusItemBaselineToNextStatusItemBaselineDistance=_statusItemBaselineToNextStatusItemBaselineDistance;
@property(nonatomic) unsigned long long maxStatusItemNumberOfLines; // @synthesize maxStatusItemNumberOfLines=_maxStatusItemNumberOfLines;
@property(nonatomic) unsigned long long maxStatusItemCount; // @synthesize maxStatusItemCount=_maxStatusItemCount;
@property(nonatomic) double topOfViewToFirstStatusItemBaselineDistance; // @synthesize topOfViewToFirstStatusItemBaselineDistance=_topOfViewToFirstStatusItemBaselineDistance;
@property(nonatomic) double headlineBaselineToFirstStatusItemBaselineDistance; // @synthesize headlineBaselineToFirstStatusItemBaselineDistance=_headlineBaselineToFirstStatusItemBaselineDistance;
@property(retain, nonatomic) UIFont *sectionHeaderFont; // @synthesize sectionHeaderFont=_sectionHeaderFont;
@property(retain, nonatomic) UIFont *statusDetailsFont; // @synthesize statusDetailsFont=_statusDetailsFont;
@property(retain, nonatomic) UIFont *statusItemFont; // @synthesize statusItemFont=_statusItemFont;
@property(retain, nonatomic) UIFont *headlineFont; // @synthesize headlineFont=_headlineFont;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) _Bool statusHidden; // @synthesize statusHidden=_statusHidden;
@property(nonatomic) _Bool headlineHidden; // @synthesize headlineHidden=_headlineHidden;
@property(nonatomic) unsigned long long columnStyle; // @synthesize columnStyle=_columnStyle;
@property(nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(readonly, nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(nonatomic) unsigned long long contentColorStyle; // @synthesize contentColorStyle=_contentColorStyle;
- (void).cxx_destruct;
- (id)_childDisplayOptions;
- (double)_preferredSectionHeightForNumberOfRows:(unsigned long long)arg1 withCellHeight:(double)arg2;
- (double)preferredSectionHeightForNumberOfServiceRows:(unsigned long long)arg1 spanningColumns:(unsigned long long)arg2;
- (double)preferredSectionHeightForNumberOfSceneRows:(unsigned long long)arg1;
@property(readonly, nonatomic) double largeTitleCellTopMargin;
@property(readonly, nonatomic) double statusListCellBottomMargin;
@property(readonly, nonatomic) double statusListCellTopMargin;
@property(readonly, nonatomic) double sectionHeaderCellHeight;
@property(readonly, nonatomic) double statusListCellHeight;
@property(readonly, nonatomic) double headlineCellHeight;
@property(readonly, nonatomic) double cameraCellHeight;
@property(readonly, nonatomic) double cameraCellWidth;
- (double)_pointWidthForFlexibleColumnStyleWithFractionalNumberOfColumns:(double)arg1 totalNumberOfColumns:(long long)arg2 totalWidth:(double)arg3;
- (double)_pointWidthForFixedColumnStyleWithFractionalNumberOfColumns:(double)arg1;
- (double)_pointWidthForFractionalNumberOfColumns:(double)arg1;
- (double)pointWidthForNumberOfColumns:(long long)arg1;
@property(readonly, nonatomic) double pointWidthForFullWidthCell;
@property(readonly, nonatomic) long long numberOfColumns;
@property(readonly, nonatomic) long long cellSizeSubclass;
@property(readonly, nonatomic) long long viewSizeSubclass;
- (id)initWithViewSize:(struct CGSize)arg1 columnStyle:(unsigned long long)arg2 overrideSizeSubclass:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

