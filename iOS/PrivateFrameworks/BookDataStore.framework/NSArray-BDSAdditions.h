//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (BDSAdditions)
- (void)bds_chainUntilNoErrorCompletionSelectorCallsForSelector:(SEL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)bds_chainSuccessAndErrorCompletionSelectorCallsForSelector:(SEL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)bds_traverseBatchesOfSize:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)bds_arrayByRemovingNSNulls;
- (id)bds_arrayByRemovingNSNullsInvokingBlockForNulls:(CDUnknownBlockType)arg1;
- (id)bds_dictionaryUsingPropertyAsKey:(id)arg1 uniquingKeysWith:(CDUnknownBlockType)arg2;
@end

