//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKKnowledgeStore;

@interface INUserContextStore : NSObject
{
    CKKnowledgeStore *_knowledgeStore;
}

+ (id)keyForBundleIdentifier:(id)arg1 andType:(long long)arg2;
+ (id)findDataInValue:(id)arg1;
+ (id)sharedStore;
- (void).cxx_destruct;
- (id)_initWithKnowledgeStore:(id)arg1;
- (id)_init;
- (void)userContextOfClass:(Class)arg1 forBundleIdentifiers:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)storeUserContextViaHelper:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)removeUserContextOfClass:(Class)arg1 forBundleIdentifier:(id)arg2;
- (void)storeUserContext:(id)arg1 forBundleIdentifier:(id)arg2;

@end
