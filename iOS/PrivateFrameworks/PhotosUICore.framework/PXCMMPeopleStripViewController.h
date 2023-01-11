//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXPeopleBootstrapFlowDelegate-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/UICollectionViewDataSource-Protocol.h>
#import <PhotosUICore/UICollectionViewDelegate-Protocol.h>

@class NSString, PXCMMPeopleStripView, PXCMMPeopleSuggestionsDataSource, PXCMMPeopleSuggestionsDataSourceManager, PXCMMPeopleSuggestionsMediaProvider, PXCMMSession;
@protocol PXCMMPeopleStripViewControllerDelegate;

@interface PXCMMPeopleStripViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, PXSectionedDataSourceManagerObserver, PXPeopleBootstrapFlowDelegate>
{
    struct {
        _Bool didSelectPersonSuggestion;
    } _delegateRespondsTo;
    PXCMMSession *_session;
    id <PXCMMPeopleStripViewControllerDelegate> _delegate;
    PXCMMPeopleSuggestionsDataSource *__peopleSuggestionsDataSource;
    PXCMMPeopleSuggestionsDataSourceManager *__peopleSuggestionsDataSourceManager;
    PXCMMPeopleSuggestionsMediaProvider *__peopleSuggestionsMediaProvider;
}

@property(readonly, nonatomic) PXCMMPeopleSuggestionsMediaProvider *_peopleSuggestionsMediaProvider; // @synthesize _peopleSuggestionsMediaProvider=__peopleSuggestionsMediaProvider;
@property(readonly, nonatomic) PXCMMPeopleSuggestionsDataSourceManager *_peopleSuggestionsDataSourceManager; // @synthesize _peopleSuggestionsDataSourceManager=__peopleSuggestionsDataSourceManager;
@property(retain, nonatomic, setter=_setPeopleSuggestionsDataSource:) PXCMMPeopleSuggestionsDataSource *_peopleSuggestionsDataSource; // @synthesize _peopleSuggestionsDataSource=__peopleSuggestionsDataSource;
@property(nonatomic) __weak id <PXCMMPeopleStripViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PXCMMSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)bootstrapFlowController:(id)arg1 didFinishWithSuccess:(_Bool)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)_presentBootStrapUIForPersonSuggestion:(id)arg1;
- (void)_didSelectPersonSuggestion:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithSession:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) PXCMMPeopleStripView *view; // @dynamic view;

@end

