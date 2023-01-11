//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TestFlightCore/TFFeedbackDataContainerObserver-Protocol.h>
#import <TestFlightCore/TFFeedbackDataUpdateProxy-Protocol.h>

@class NSString, TFFeedbackDataContainer, TFFeedbackForm, TFFeedbackSession;
@protocol TFFeedbackDataSource, TFFeedbackFormPresenterView;

__attribute__((visibility("hidden")))
@interface TFFeedbackFormPresenter : NSObject <TFFeedbackDataContainerObserver, TFFeedbackDataUpdateProxy>
{
    id <TFFeedbackFormPresenterView> _presenterView;
    TFFeedbackForm *_form;
    TFFeedbackDataContainer *_dataContainer;
    TFFeedbackSession *_session;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFFeedbackSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) TFFeedbackDataContainer *dataContainer; // @synthesize dataContainer=_dataContainer;
@property(readonly, nonatomic) TFFeedbackForm *form; // @synthesize form=_form;
@property(nonatomic) __weak id <TFFeedbackFormPresenterView> presenterView; // @synthesize presenterView=_presenterView;
- (void)showSubmissionFailureWithMessage:(id)arg1;
- (void)presenterViewDidInitiateFeedbackSubmission:(id)arg1;
- (void)didUpdateEntry:(id)arg1 toString:(id)arg2 editInProgress:(_Bool)arg3;
- (void)didUpdateEntry:(id)arg1 toGroupInclusionBool:(_Bool)arg2;
- (void)feedbackDataContainer:(id)arg1 didUpdateValuesForGroupIdentifiers:(id)arg2 entryIdentifiers:(id)arg3;
- (id)_indexPathsOfVisibleEntriesWithIdentifiers:(id)arg1;
- (id)_indicesOfGroupsWithIdentifiers:(id)arg1;
@property(readonly, nonatomic) id <TFFeedbackDataSource> feedbackDataSource;
- (id)footerTextLinkMapForGroupAtIndex:(long long)arg1;
- (id)footerTextForGroupAtIndex:(long long)arg1;
- (id)headerTextLinkMapForGroupAtIndex:(long long)arg1;
- (id)headerTextForGroupAtIndex:(long long)arg1;
- (id)visibleEntryAtGroupIndex:(long long)arg1 entryIndex:(long long)arg2;
- (unsigned long long)numberOfVisibleItemsInGroupAtIndex:(long long)arg1;
- (unsigned long long)numberOfEntryGroupsInForm;
- (void)prepareViewForForm;
- (id)initWithForm:(id)arg1 dataContainer:(id)arg2 session:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
