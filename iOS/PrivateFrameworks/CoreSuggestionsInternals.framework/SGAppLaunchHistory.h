//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _DKKnowledgeStore;

@interface SGAppLaunchHistory : NSObject
{
    _DKKnowledgeStore *_knowledgeStore;
}

- (void).cxx_destruct;
- (unsigned long long)launchCountForBundleId:(id)arg1 afterDate:(id)arg2 limit:(unsigned long long)arg3;
- (id)init;

@end

