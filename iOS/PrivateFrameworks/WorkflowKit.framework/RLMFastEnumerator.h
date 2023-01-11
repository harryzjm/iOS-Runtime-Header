//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RLMRealm;
@protocol RLMFastEnumerable;

__attribute__((visibility("hidden")))
@interface RLMFastEnumerator : NSObject
{
    id _strongBuffer[16];
    RLMRealm *_realm;
    struct RLMClassInfo *_info;
    id <RLMFastEnumerable> _collection;
    struct TableView _tableView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 count:(unsigned long long)arg2;
- (void)detach;
- (void)dealloc;
- (id)initWithCollection:(id)arg1 objectSchema:(struct RLMClassInfo *)arg2;

@end
