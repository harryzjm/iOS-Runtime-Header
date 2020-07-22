//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol CNiOSContactPredicate;

__attribute__((visibility("hidden")))
@interface CNiOSPersonFetchRequest : NSObject
{
    id <CNiOSContactPredicate> _predicate;
    _Bool _shouldSort;
    unsigned int _sortOrder;
    unsigned long long _options;
    _Bool _unifiedFetch;
    NSArray *_keysToFetch;
    unsigned long long _batchSize;
}

+ (id)effectivePredicate:(id)arg1;
+ (id)validatePredicate:(id)arg1 error:(id *)arg2;
+ (id)fetchRequestFromCNFetchRequest:(id)arg1 error:(id *)arg2;
+ (long long)resolvedSortOrderFromContactSortOrder:(long long)arg1;
@property(readonly) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(readonly) _Bool unifiedFetch; // @synthesize unifiedFetch=_unifiedFetch;
@property(readonly) NSArray *keysToFetch; // @synthesize keysToFetch=_keysToFetch;
@property(readonly) unsigned long long options; // @synthesize options=_options;
@property(readonly) unsigned int sortOrder; // @synthesize sortOrder=_sortOrder;
@property(readonly) _Bool shouldSort; // @synthesize shouldSort=_shouldSort;
@property(readonly) id <CNiOSContactPredicate> predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
@property(readonly) unsigned int sortOrderIncludingNone;
- (id)initWithPredicate:(id)arg1 keysToFetch:(id)arg2 shouldSort:(_Bool)arg3 sortOrder:(unsigned int)arg4 unifiedFetch:(_Bool)arg5 batchSize:(unsigned long long)arg6 options:(unsigned long long)arg7;

@end

