//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface BBGuaranteedOnceCache : NSObject
{
    NSMapTable *_guaranteedCache;
    NSMapTable *_bestEffortCache;
}

- (void).cxx_destruct;
- (_Bool)attemptToGuaranteeObjectUsingKey:(id)arg1;
- (void)removeObjectUsingKey:(id)arg1;
- (id)objectUsingKeyRemovingGuarantee:(id)arg1;
- (void)cacheObject:(id)arg1 usingKey:(id)arg2;
- (id)init;

@end
