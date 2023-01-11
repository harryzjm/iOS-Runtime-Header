//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray;

@interface CCVegaTransactionCommitter : NSObject
{
    NSHashTable *_renderers;
    NSMutableArray *_mainThreadOperations;
    _Bool _needsCATransaction;
}

- (void).cxx_destruct;
- (void)commit;
- (void)setNeedsCATransaction;
- (id)newMainThreadOperation;
- (id)initWithRenderers:(id)arg1;

@end
