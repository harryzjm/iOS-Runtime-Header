//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <iTunesStoreUI/SUScriptNativeObject-Protocol.h>

@class NSString, SUClientInterface, SUSection;

@interface SUNavigationController : UINavigationController <SUScriptNativeObject>
{
    _Bool _canBeWeakScriptReference;
    SUClientInterface *_clientInterface;
    SUSection *_section;
    long long _storeBarStyle;
    _Bool _skLoading;
}

@property(nonatomic, getter=isSkLoading) _Bool skLoading; // @synthesize skLoading=_skLoading;
@property(retain, nonatomic) SUSection *section; // @synthesize section=_section;
@property(retain, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
- (void).cxx_destruct;
- (void)_loadingDidChangeNotification:(id)arg1;
- (_Bool)clearsWeakScriptReferences;
- (_Bool)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)_sectionForViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setViewControllers:(id)arg1;
- (void)setToolbarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setToolbarHidden:(_Bool)arg1;
- (void)_setStoreBarStyle:(long long)arg1 clientInterface:(id)arg2;
- (void)setParentViewController:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (void)removeChildViewController:(id)arg1;
- (id)moreListSelectedImage;
- (id)moreListImage;
- (void)loadView;
- (long long)ITunesStoreUIBarStyle;
@property(readonly, copy) NSString *description;
- (id)copyScriptViewController;
- (id)copyArchivableContext;
- (void)addChildViewController:(id)arg1;
- (void)dealloc;
- (id)initWithSection:(id)arg1 rootViewController:(id)arg2;
- (id)initWithSection:(id)arg1;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

