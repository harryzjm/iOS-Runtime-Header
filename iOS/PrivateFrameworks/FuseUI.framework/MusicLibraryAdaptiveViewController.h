//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <FuseUI/MusicClientContextConsuming-Protocol.h>
#import <FuseUI/MusicIndexBarDataSource-Protocol.h>
#import <FuseUI/MusicIndexBarScrollDelegate-Protocol.h>
#import <FuseUI/MusicLibraryViewConfigurationConsuming-Protocol.h>

@class MusicClientContext, MusicLibraryAdaptiveViewConfiguration, NSString;
@protocol MusicLibraryViewConfigurationConsuming;

@interface MusicLibraryAdaptiveViewController : UIViewController <MusicClientContextConsuming, MusicIndexBarDataSource, MusicIndexBarScrollDelegate, MusicLibraryViewConfigurationConsuming>
{
    _Bool _isActiveViewControllerIndexBarDataSource;
    _Bool _isActiveViewControllerIndexBarScrollDelegate;
    long long _horizontalSizeClassForActiveView;
    MusicLibraryAdaptiveViewConfiguration *_libraryViewConfiguration;
    UIViewController<MusicLibraryViewConfigurationConsuming> *_activeViewController;
    MusicClientContext *_clientContext;
}

@property(retain, nonatomic) MusicClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(readonly, nonatomic) UIViewController<MusicLibraryViewConfigurationConsuming> *activeViewController; // @synthesize activeViewController=_activeViewController;
@property(readonly, nonatomic) MusicLibraryAdaptiveViewConfiguration *libraryViewConfiguration; // @synthesize libraryViewConfiguration=_libraryViewConfiguration;
- (void).cxx_destruct;
- (void)_applyClientContextToViewController:(id)arg1;
- (void)_applyClientContextToChildViewControllers;
- (void)_tearDownActiveView;
- (void)_reloadActiveViewIfNeeded;
- (void)_activeViewControllerIndexBarDataSourceDidInvalidateNotification:(id)arg1;
- (_Bool)getContentOffset:(struct CGPoint *)arg1 forIndexBarEntryAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfIndexBarEntries;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (_Bool)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void)dealloc;
- (id)initWithLibraryViewConfiguration:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

