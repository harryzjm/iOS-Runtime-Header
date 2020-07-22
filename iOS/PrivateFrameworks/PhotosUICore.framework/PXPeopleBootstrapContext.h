//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PXPeopleNameSelection, PXPeopleSuggestionManager;
@protocol PXPeopleSuggestionManagerDataSource, PXPerson;

@interface PXPeopleBootstrapContext : NSObject
{
    _Bool _skipInitialAction;
    _Bool _wantsNaming;
    id <PXPerson> _sourcePerson;
    id <PXPerson> _targetPerson;
    unsigned long long _bootstrapType;
    PXPeopleNameSelection *_nameSelection;
    PXPeopleSuggestionManager *_suggestionManager;
    CDUnknownBlockType _preCommitBlock;
    CDUnknownBlockType _cancelBlock;
    id <PXPeopleSuggestionManagerDataSource> _prefetchedDataSource;
}

+ (id)contextWithPerson:(id)arg1 type:(unsigned long long)arg2;
@property(retain, nonatomic) id <PXPeopleSuggestionManagerDataSource> prefetchedDataSource; // @synthesize prefetchedDataSource=_prefetchedDataSource;
@property(nonatomic) _Bool wantsNaming; // @synthesize wantsNaming=_wantsNaming;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType preCommitBlock; // @synthesize preCommitBlock=_preCommitBlock;
@property(nonatomic) _Bool skipInitialAction; // @synthesize skipInitialAction=_skipInitialAction;
@property(retain) PXPeopleSuggestionManager *suggestionManager; // @synthesize suggestionManager=_suggestionManager;
@property(retain) PXPeopleNameSelection *nameSelection; // @synthesize nameSelection=_nameSelection;
@property unsigned long long bootstrapType; // @synthesize bootstrapType=_bootstrapType;
@property(retain) id <PXPerson> targetPerson; // @synthesize targetPerson=_targetPerson;
@property(retain) id <PXPerson> sourcePerson; // @synthesize sourcePerson=_sourcePerson;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *displayName;
- (id)init;

@end

