//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteObservableBuilderBatchingHelper-Protocol.h>

@class NSString, _CNAutocompleteObservableBuilderBatchingHelper;

@interface _CNAutocompleteStandardObservableBuilderBatchingHelper : NSObject <CNAutocompleteObservableBuilderBatchingHelper>
{
    _CNAutocompleteObservableBuilderBatchingHelper *_helper;
}

@property(retain, nonatomic) _CNAutocompleteObservableBuilderBatchingHelper *helper; // @synthesize helper=_helper;
- (void).cxx_destruct;
- (_Bool)batchAtIndexIncludesServer:(unsigned long long)arg1;
- (void)addCalendarServerObservable:(id)arg1;
- (void)addCachedCalendarServerObservable:(id)arg1;
- (void)addDirectoryServerObservable:(id)arg1;
- (void)addCachedDirectoryServerObservable:(id)arg1;
- (void)addSupplementalObservable:(id)arg1;
- (void)addDuetObservable:(id)arg1;
- (void)addSuggestionsObservable:(id)arg1;
- (void)addCoreRecentsObservable:(id)arg1;
- (void)addContactsObservable:(id)arg1;
- (id)batchedObservables;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

