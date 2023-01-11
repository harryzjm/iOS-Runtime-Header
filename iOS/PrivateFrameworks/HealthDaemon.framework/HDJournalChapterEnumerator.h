//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, NSURL;
@protocol HDJournalChapterEnumeratorTestsDelegate;

@interface HDJournalChapterEnumerator : NSObject
{
    NSURL *_URL;
    long long _currentIndex;
    _Bool _hasLoadedPersistedJournalNames;
    long long _maxAllowedOpenJournalChapterCount;
    long long _totalJournalChapterCount;
    NSError *_cachedError;
    NSMutableArray *_remainingJournalChapters;
    NSMutableArray *_openJournalChapters;
    id <HDJournalChapterEnumeratorTestsDelegate> _unitTestDelegate;
}

+ (id)_journalChaptersForURL:(id)arg1 sorted:(_Bool)arg2 error:(id *)arg3;
+ (id)_lightweightDirectoryEnumeratorForURL:(id)arg1;
+ (long long)journalChapterCountForURL:(id)arg1;
+ (id)nextJournalChapterNameForURL:(id)arg1;
+ (id)journalChaptersForURL:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <HDJournalChapterEnumeratorTestsDelegate> unitTestDelegate; // @synthesize unitTestDelegate=_unitTestDelegate;
@property(retain, nonatomic) NSMutableArray *openJournalChapters; // @synthesize openJournalChapters=_openJournalChapters;
@property(retain, nonatomic) NSMutableArray *remainingJournalChapters; // @synthesize remainingJournalChapters=_remainingJournalChapters;
@property(nonatomic) long long maxAllowedOpenJournalChapterCount;
@property(readonly, nonatomic, getter=_totalOpenJournalChapterCount) unsigned long long totalOpenJournalChapterCount;
- (id)_openJournalChapters:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned long long currentJournalChapterIndex;
@property(readonly, nonatomic) unsigned long long totalJournalChapterCount;
@property(readonly, nonatomic, getter=hasMoreJournalChapters) _Bool moreJournalChapters;
- (_Bool)_updateRollingBufferIfRequiredWithError:(id *)arg1;
- (id)nextOpenJournalChapterError:(id *)arg1;
- (_Bool)loadSortedJournalChaptersWithError:(id *)arg1;
- (void)closeJournalChapters;
@property(readonly, nonatomic) _Bool hasJournalChapters;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;

@end
