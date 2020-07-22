//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/TSTFormsSheetProvider-Protocol.h>
#import <iWorkImport/TSTResolverContainerNameProvider-Protocol.h>

@class NSArray, NSMutableArray, NSString, TNTheme, TNUIState, TSKTreeNode, TSSStylesheet;

__attribute__((visibility("hidden")))
@interface TNDocumentRoot <TSTResolverContainerNameProvider, TSTFormsSheetProvider>
{
    NSString *_paperID;
    struct CGSize _pageSize;
    _Bool _printingAllSheets;
    TNTheme *_theme;
    TSKTreeNode *_sidebarOrder;
    TNUIState *_uiState;
    NSMutableArray *_mutableSheets;
    TSSStylesheet *_stylesheet;
}

+ (struct CGSize)previewImageMaxSizeForType:(unsigned long long)arg1;
+ (struct CGSize)previewImageSizeForType:(unsigned long long)arg1;
@property(retain, nonatomic) TSSStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
@property(retain, nonatomic) NSMutableArray *mutableSheets; // @synthesize mutableSheets=_mutableSheets;
@property(nonatomic, getter=isPrintingAllSheets) _Bool printingAllSheets; // @synthesize printingAllSheets=_printingAllSheets;
@property(retain, nonatomic) TNUIState *uiState; // @synthesize uiState=_uiState;
@property(retain, nonatomic) TSKTreeNode *sidebarOrder; // @synthesize sidebarOrder=_sidebarOrder;
@property(readonly, nonatomic) TNTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (int)verticalAlignmentForTextStorage:(id)arg1;
- (int)naturalAlignmentAtCharIndex:(unsigned long long)arg1 inTextStorage:(id)arg2;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (id)UIStateForChart:(id)arg1;
- (_Bool)shouldAllowDrawableInGroups:(id)arg1 forImport:(_Bool)arg2;
- (id)p_previewImageWithImageSize:(struct CGSize)arg1;
- (struct CGSize)p_adjustCapturedContentSize:(struct CGSize)arg1 toAspectRatio:(struct CGSize)arg2;
- (struct CGRect)p_contentFrameToCaptureForSheet:(id)arg1;
- (id)previewImageForSize:(struct CGSize)arg1;
- (double)p_imageBorderForSize:(struct CGSize)arg1;
- (_Bool)prepareAndValidateSidecarViewStateObjectWithVersionUUIDMismatch:(id)arg1 originalDocumentViewStateObject:(id)arg2;
- (id)nearestDisplayableSheetToSheet:(id)arg1;
- (void)collectDocumentOpenAnalyticsWithLogger:(id)arg1;
- (void)documentDidLoad;
- (void)performDeferredUpgradeImportOperationsRequiringCalcEngine;
- (void)performDeferredUpgradeImportOperationsOnNewThreadForCharts:(id)arg1;
- (id)p_chartsWantingDeferredUpgrade;
- (_Bool)isMultiPageForQuickLook;
- (void)sheet:(id)arg1 removedDrawable:(id)arg2;
- (void)sheet:(id)arg1 insertedDrawable:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
@property(nonatomic) _Bool removedAllQuickCalcFunctions;
@property(copy, nonatomic) NSArray *selectedQuickCalcFunctions;
- (id)childEnumerator;
- (_Bool)isPendingTableNameUniquification;
- (id)resolversMatchingPrefix:(id)arg1;
- (id)resolverMatchingName:(id)arg1;
- (id)resolverMatchingName:(id)arg1 contextContainerName:(id)arg2;
- (id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2;
- (id)resolverContainerNamesMatchingPrefix:(id)arg1;
- (id)resolverContainerForName:(id)arg1 caseSensitive:(_Bool)arg2;
- (id)nameForResolverContainer:(id)arg1;
- (id)resolverContainerNameForResolver:(id)arg1;
- (id)p_resolverContainerForResolver:(id)arg1;
- (void)tableUID:(const UUIDData_5fbc143e *)arg1 changedToTableUID:(const UUIDData_5fbc143e *)arg2;
- (_Bool)isTableLinkedToAForm:(const UUIDData_5fbc143e *)arg1;
- (_Bool)containsForms;
- (void)p_buildSidebarOrder;
- (void)p_removeSidebarNodeForSheet:(id)arg1;
- (void)p_addSidebarNodeForSheet:(id)arg1;
- (void)setSidebarChildren:(id)arg1 forSheet:(id)arg2;
@property(readonly, nonatomic, getter=isPrintPreviewSupported) _Bool printPreviewSupported;
@property(copy, nonatomic) NSString *printerID;
- (_Bool)validName:(id)arg1 forRenamingSheet:(id)arg2;
- (_Bool)validNameForNewSheet:(id)arg1;
- (_Bool)shouldShowComments;
- (void)moveSheetFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)insertSheet:(id)arg1 sheetIndex:(unsigned long long)arg2 forPasteOrUndoDelete:(_Bool)arg3 context:(id)arg4;
- (void)removeSheet:(id)arg1;
- (void)addSheet:(id)arg1 dolcContext:(id)arg2;
- (void)removeAllSheets;
- (id)activeSheet;
- (id)uniqueNameForSheet:(id)arg1 appendNewTag:(_Bool)arg2;
- (id)untitledSheetName;
- (void)prepareNewDocumentWithTemplateBundle:(id)arg1 documentLocale:(id)arg2;
- (void)setThemeForTemplateImport:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setStylesheet:(id)arg1 andThemeForImport:(id)arg2;
- (unsigned long long)p_tableCountForSheet:(id)arg1;
@property(readonly, nonatomic) unsigned long long tableCount;
@property(readonly, copy, nonatomic) NSArray *sheets;
- (void)setImportedPaperID:(id)arg1 printerID:(id)arg2;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1;
- (unsigned long long)applicationType;
- (void)initializeForImport;
- (void)initializeHardCodedBlankDocument;
- (id)initWithContext:(id)arg1;
@property(nonatomic) struct CGSize pageSize;
@property(copy, nonatomic) NSString *paperID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

