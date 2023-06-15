//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewController.h"

@class NSMutableDictionary, NSString, SUUIDynamicPageSectionIndexMapper, SUUIHorizontalScrollingContainerViewController, SUUILoadingDocumentViewController, SUUIMenuBarSectionsViewController, SUUIMenuBarTemplateDocumentViewControllerEmbeddedPaletteHost, SUUIMenuBarTemplateElement, SUUIMenuBarViewElementConfiguration, SUUIMenuItemViewElement, SUUIScrollingSegmentedController, SUUIViewElement, UIScrollView, UIView;
@protocol SUUIMenuBarViewElement;

__attribute__((visibility("hidden")))
@interface SUUIMenuBarTemplateDocumentViewController : SUUIViewController
{
    SUUIMenuBarTemplateDocumentViewControllerEmbeddedPaletteHost *_embeddedPaletteHost;
    SUUIDynamicPageSectionIndexMapper *_dynamicPageSectionIndexMapper;
    NSMutableDictionary *_entityUniqueIdentifierToEntityIndex;
    SUUIHorizontalScrollingContainerViewController *_horizontalScrollingContainerViewController;
    SUUILoadingDocumentViewController *_loadingDocumentViewController;
    SUUIMenuBarSectionsViewController *_menuBarSectionsViewController;
    long long _menuBarStyle;
    SUUIViewElement<SUUIMenuBarViewElement> *_menuBarViewElement;
    SUUIMenuBarViewElementConfiguration *_menuBarViewElementConfiguration;
    SUUIMenuItemViewElement *_pendingSelectedMenuItemViewElement;
    SUUIScrollingSegmentedController *_scrollingSegmentedController;
    CDStruct_19149c72 _scrollingTabAppearanceStatus;
    SUUIMenuBarTemplateElement *_templateElement;
}

- (void).cxx_destruct;
- (id)_zoomingShelfPageSplitsDescription;
- (void)_willDisplayViewControllerAtIndex:(unsigned long long)arg1;
- (_Bool)_isFirstViewControllerOnNavigationStack;
- (void)_replaceViewControllerAtIndex:(unsigned long long)arg1 withViewController:(id)arg2;
- (void)_removeContentViewController:(id)arg1;
- (void)_reloadContentViewController;
- (void)_recordEntityUniqueIdentifier:(id)arg1 forEntityIndex:(unsigned long long)arg2;
- (id)_newChildViewControllerForEntityAtIndex:(unsigned long long)arg1;
- (unsigned long long)_menuItemIndexForEntityIndex:(unsigned long long)arg1 entityValueProvider:(out id *)arg2;
- (id)_dynamicPageSectionIndexMapper;
- (id)_contentViewController;
- (id)_colorScheme;
- (id)_childViewControllersForMenuItems;
- (void)_addContentViewController:(id)arg1;
@property(readonly, nonatomic) double titleViewHeight;
@property(readonly, nonatomic) UIView *titleView;
- (id)scrollingTabViewControllerInNestedPagingScrollViewAtPageIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) UIScrollView *scrollingTabNestedPagingScrollView;
- (void)scrollingTabAppearanceStatusWasUpdated:(CDStruct_19149c72)arg1;
- (void)scrollingSegmentedController:(id)arg1 willDisplayViewControllerAtIndex:(unsigned long long)arg2;
- (id)navigationBarControllerWithViewElement:(id)arg1;
- (void)menuBarViewElementConfiguration:(id)arg1 selectMenuItemViewElement:(id)arg2 animated:(_Bool)arg3;
- (void)menuBarViewElementConfiguration:(id)arg1 didReplaceDocumentForMenuItemAtIndex:(unsigned long long)arg2;
- (void)menuBarViewElementConfiguration:(id)arg1 didReplaceDocumentForEntityUniqueIdentifier:(id)arg2;
- (void)horizontalScrollingContainerViewController:(id)arg1 willDisplayViewControllerAtIndex:(unsigned long long)arg2;
- (id)navigationPaletteView;
- (void)documentMediaQueriesDidUpdate:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setClientContext:(id)arg1;
- (id)contentScrollView;
- (void)viewDidLoad;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithTemplateElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

