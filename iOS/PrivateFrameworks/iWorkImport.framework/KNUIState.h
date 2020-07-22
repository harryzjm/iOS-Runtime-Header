//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class KNMacUILayout, KNSlideCollectionSelection, NSArray, NSMutableDictionary, NSSet, TSKSelectionPath;

__attribute__((visibility("hidden")))
@interface KNUIState : NSObject <NSCopying>
{
    TSKSelectionPath *_selectionPath;
    double _mobileCanvasViewScale;
    struct CGPoint _mobileCanvasOffset;
    double _desktopCanvasViewScale;
    struct CGPoint _desktopCanvasOffset;
    NSMutableDictionary *_chartUIState;
    _Bool _slideViewFitsContentInWindow;
    _Bool _lightTableHidesSkippedSlides;
    _Bool _showsMobileLightTable;
    _Bool _mobileLightTableHidesSkippedSlides;
    _Bool _desktopOutlineViewDefaultFixed;
    _Bool _showSlideGuides;
    _Bool _showMasterGuides;
    _Bool _showsComments;
    _Bool _showsRuler;
    KNMacUILayout *_documentUILayout;
    double _lightTableZoomScale;
    double _mobileLightTableZoomScale;
    double _desktopElementListViewWidth;
    double _desktopNavigatorViewWidth;
    double _desktopOutlineViewWidth;
    double _desktopPresenterNotesHeight;
    double _desktopPresenterNotesScrollPosition;
    NSSet *_collapsedSlideNodes;
    NSSet *_outlineCollapsedSlideNodes;
    NSSet *_outlineHasBodySlideNodes;
    NSArray *_elementListExpandedGroups;
    struct CGPoint _desktopMainWindowOrigin;
    struct CGSize _desktopMainContentSize;
}

@property(nonatomic) _Bool showsRuler; // @synthesize showsRuler=_showsRuler;
@property(nonatomic) _Bool showsComments; // @synthesize showsComments=_showsComments;
@property(nonatomic) _Bool showMasterGuides; // @synthesize showMasterGuides=_showMasterGuides;
@property(nonatomic) _Bool showSlideGuides; // @synthesize showSlideGuides=_showSlideGuides;
@property(copy, nonatomic) NSArray *elementListExpandedGroups; // @synthesize elementListExpandedGroups=_elementListExpandedGroups;
@property(copy, nonatomic) NSSet *outlineHasBodySlideNodes; // @synthesize outlineHasBodySlideNodes=_outlineHasBodySlideNodes;
@property(copy, nonatomic) NSSet *outlineCollapsedSlideNodes; // @synthesize outlineCollapsedSlideNodes=_outlineCollapsedSlideNodes;
@property(copy, nonatomic) NSSet *collapsedSlideNodes; // @synthesize collapsedSlideNodes=_collapsedSlideNodes;
@property(nonatomic) _Bool desktopOutlineViewDefaultFixed; // @synthesize desktopOutlineViewDefaultFixed=_desktopOutlineViewDefaultFixed;
@property(nonatomic) double desktopPresenterNotesScrollPosition; // @synthesize desktopPresenterNotesScrollPosition=_desktopPresenterNotesScrollPosition;
@property(nonatomic) double desktopPresenterNotesHeight; // @synthesize desktopPresenterNotesHeight=_desktopPresenterNotesHeight;
@property(nonatomic) double desktopOutlineViewWidth; // @synthesize desktopOutlineViewWidth=_desktopOutlineViewWidth;
@property(nonatomic) double desktopNavigatorViewWidth; // @synthesize desktopNavigatorViewWidth=_desktopNavigatorViewWidth;
@property(nonatomic) double desktopElementListViewWidth; // @synthesize desktopElementListViewWidth=_desktopElementListViewWidth;
@property(nonatomic) struct CGSize desktopMainContentSize; // @synthesize desktopMainContentSize=_desktopMainContentSize;
@property(nonatomic) struct CGPoint desktopMainWindowOrigin; // @synthesize desktopMainWindowOrigin=_desktopMainWindowOrigin;
@property(nonatomic) _Bool mobileLightTableHidesSkippedSlides; // @synthesize mobileLightTableHidesSkippedSlides=_mobileLightTableHidesSkippedSlides;
@property(nonatomic) double mobileLightTableZoomScale; // @synthesize mobileLightTableZoomScale=_mobileLightTableZoomScale;
@property(nonatomic) _Bool showsMobileLightTable; // @synthesize showsMobileLightTable=_showsMobileLightTable;
@property(nonatomic) _Bool lightTableHidesSkippedSlides; // @synthesize lightTableHidesSkippedSlides=_lightTableHidesSkippedSlides;
@property(nonatomic) double lightTableZoomScale; // @synthesize lightTableZoomScale=_lightTableZoomScale;
@property(nonatomic) _Bool slideViewFitsContentInWindow; // @synthesize slideViewFitsContentInWindow=_slideViewFitsContentInWindow;
@property(copy, nonatomic) KNMacUILayout *documentUILayout; // @synthesize documentUILayout=_documentUILayout;
@property(retain, nonatomic) TSKSelectionPath *selectionPath; // @synthesize selectionPath=_selectionPath;
- (void).cxx_destruct;
- (void)saveToArchive:(struct UIStateArchive *)arg1 archiver:(id)arg2 context:(id)arg3;
- (void)loadFromArchive:(const struct UIStateArchive *)arg1 unarchiver:(id)arg2 context:(id)arg3;
- (id)debugDescription;
- (void)updateOutlineStateFromSlideTree:(id)arg1;
- (id)archivedUIStateInContext:(id)arg1;
@property(nonatomic) struct CGPoint canvasOffset;
@property(nonatomic) double canvasViewScale;
- (void)setSlideTreeSelection:(id)arg1 withDocumentRoot:(id)arg2;
@property(readonly, nonatomic) KNSlideCollectionSelection *slideTreeSelection;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (id)UIStateForChart:(id)arg1;

@end

