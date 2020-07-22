//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, PXPeoplePagingSuggestionProvider, PXSuggestionToken;
@protocol PXPeopleSuggestionManagerDataSource, PXPeopleSuggestionManagerDelegate, PXPerson;

@interface PXPeopleSuggestionManager : NSObject
{
    _Bool _mute;
    _Bool _didReachEnd;
    unsigned int _confirmYesSoundID;
    unsigned int _confirmNoSoundID;
    id <PXPeopleSuggestionManagerDelegate> _delegate;
    id <PXPeopleSuggestionManagerDataSource> _dataSource;
    id <PXPerson> _person;
    unsigned long long _userConfirmationsCount;
    unsigned long long _autoConfirmationsCount;
    NSMutableSet *_skippedSuggestions;
    PXSuggestionToken *_suggestionToken;
    PXPeoplePagingSuggestionProvider *_suggestionProvider;
    NSMutableSet *_confirmedSuggestions;
    NSMutableSet *_rejectedSuggestions;
}

@property(retain, nonatomic) NSMutableSet *rejectedSuggestions; // @synthesize rejectedSuggestions=_rejectedSuggestions;
@property(retain, nonatomic) NSMutableSet *confirmedSuggestions; // @synthesize confirmedSuggestions=_confirmedSuggestions;
@property(retain, nonatomic) PXPeoplePagingSuggestionProvider *suggestionProvider; // @synthesize suggestionProvider=_suggestionProvider;
@property(nonatomic) unsigned int confirmNoSoundID; // @synthesize confirmNoSoundID=_confirmNoSoundID;
@property(nonatomic) unsigned int confirmYesSoundID; // @synthesize confirmYesSoundID=_confirmYesSoundID;
@property(retain, nonatomic) PXSuggestionToken *suggestionToken; // @synthesize suggestionToken=_suggestionToken;
@property(retain, nonatomic) NSMutableSet *skippedSuggestions; // @synthesize skippedSuggestions=_skippedSuggestions;
@property(nonatomic) _Bool didReachEnd; // @synthesize didReachEnd=_didReachEnd;
@property(nonatomic) unsigned long long autoConfirmationsCount; // @synthesize autoConfirmationsCount=_autoConfirmationsCount;
@property(nonatomic) unsigned long long userConfirmationsCount; // @synthesize userConfirmationsCount=_userConfirmationsCount;
@property(retain, nonatomic) id <PXPerson> person; // @synthesize person=_person;
@property(nonatomic) _Bool mute; // @synthesize mute=_mute;
@property(retain, nonatomic) id <PXPeopleSuggestionManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <PXPeopleSuggestionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_fetchingSuggestions;
- (id)_nonSkippedSuggestionsForSuggestions:(id)arg1;
- (void)_notifyDelegateWeHaveMoreSuggestions:(_Bool)arg1;
- (void)_loadMoreSuggestionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_playConfirmNoSound;
- (void)_playConfirmYesSound;
- (unsigned int)_soundIdWithFilename:(id)arg1;
- (void)cancelPendingSuggestionLoading;
- (id)commitUserResponsesToPerson:(id)arg1;
- (void)commitUserResponses;
- (void)undo;
- (void)markSuggestionsAsSkipped:(id)arg1;
- (void)markSuggestions:(id)arg1 confirmed:(_Bool)arg2;
- (_Bool)isSuggestionConfirmed:(id)arg1;
- (void)requestNextSuggestionsWithPageLimit:(unsigned long long)arg1;
- (void)requestNextSuggestion;
- (void)preloadSounds;
@property(readonly, nonatomic) _Bool isLoading;
@property(readonly, nonatomic) _Bool canUndo;
@property(readonly, nonatomic) NSArray *currentSuggestions;
- (void)dealloc;
- (id)init;
- (id)initWithPerson:(id)arg1;

@end
