//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileSafariUI/LibraryItemRegistration-Protocol.h>
#import <MobileSafariUI/LibraryViewControllerDelegate-Protocol.h>
#import <MobileSafariUI/UINavigationControllerDelegate-Protocol.h>

@class BrowserRootViewController, LibraryConfiguration, LibraryItemController, LibraryViewController, MainLibrarySectionController, NSMutableDictionary, NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface LibraryController : NSObject <LibraryItemRegistration, UINavigationControllerDelegate, LibraryViewControllerDelegate>
{
    NSMutableDictionary *_itemsByCollection;
    LibraryItemController *_lastSelectedItemController;
    UIViewController *_viewControllerForLastSelectedItemController;
    MainLibrarySectionController *_mainLibrarySectionController;
    LibraryConfiguration *_configuration;
    BrowserRootViewController *_rootViewController;
    LibraryViewController *_sidebarViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LibraryViewController *sidebarViewController; // @synthesize sidebarViewController=_sidebarViewController;
@property(retain, nonatomic) BrowserRootViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(readonly, nonatomic) LibraryConfiguration *configuration; // @synthesize configuration=_configuration;
- (_Bool)libraryViewController:(id)arg1 shouldPersistSelectionForItem:(id)arg2;
- (void)libraryViewControllerDidClearSelection:(id)arg1;
- (void)libraryViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)registerItem:(id)arg1 forCollectionType:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
@property(copy, nonatomic) NSString *currentCollection;
- (void)_updateSidebarButton;
- (void)browserViewControllerDidChangeSidebarStyle;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
