//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, NSMutableArray;
@protocol OS_dispatch_queue;

@interface TUSearchController : NSObject
{
    CNContactStore *_contactStore;
    NSMutableArray *_recentsModules;
    NSMutableArray *_searchModules;
    NSObject<OS_dispatch_queue> *_searchQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *searchQueue; // @synthesize searchQueue=_searchQueue;
@property(retain, nonatomic) NSMutableArray *searchModules; // @synthesize searchModules=_searchModules;
@property(retain, nonatomic) NSMutableArray *recentsModules; // @synthesize recentsModules=_recentsModules;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void).cxx_destruct;
- (CDUnknownBlockType)_searchModuleCompletionWithModules:(id)arg1 searchTerm:(id)arg2 resultsClass:(Class)arg3 completion:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)searchModuleCompletionWithSearchTerm:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)recentsModuleCompletionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cancelSearches;
- (_Bool)_searchIsRunning;
- (void)searchForString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)recentsWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

