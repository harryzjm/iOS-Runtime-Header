//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFClientPluginManager, NSDictionary;
@protocol OS_dispatch_queue;

@interface SiriUISnippetManager : NSObject
{
    AFClientPluginManager *_pluginManager;
    NSDictionary *_snippetExtensionsCache;
    NSObject<OS_dispatch_queue> *_snippetExtensionsQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)speakableProviderForObject:(id)arg1;
- (id)listItemToPickInAutodisambiguationForListItems:(id)arg1;
- (id)disambiguationItemForListItem:(id)arg1 disambiguationKey:(id)arg2;
- (id)filteredDisambiguationListItems:(id)arg1;
- (id)snippetViewControllerForSnippet:(id)arg1;
- (id)transcriptItemForObject:(id)arg1;
- (_Bool)_compareObject:(id)arg1 toObject:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)_listItem:(id)arg1 isPreferredOverListItem:(id)arg2;
- (_Bool)_listItem:(id)arg1 isEqualToListItem:(id)arg2;
- (id)_createDebugViewControllerForAceObject:(id)arg1;
- (id)_snippetExtensionsCache;
- (void)_prewarmSnippetExtensionsCacheSynchronously;
- (id)extensionForSnippet:(id)arg1;
- (void)prewarmSnippetExtensionsCache;
- (void)preloadPluginBundles;
- (id)init;

@end

