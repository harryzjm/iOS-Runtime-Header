//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (TSUAdditions)
- (unsigned long long)tsu_insertObject:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (void)tsu_trimObjectsFromIndex:(unsigned long long)arg1;
- (void)tsu_removeObjectsIdenticalToObjectsInArray:(id)arg1;
- (void)tsu_addObjectsFromNonNilArray:(id)arg1;
- (void)tsu_addNonNilObject:(id)arg1;
- (void)tsu_addObjects:(id)arg1;
- (id)tsu_peek;
- (id)tsu_pop;
- (void)tsu_push:(id)arg1;
- (id)tsu_dequeue;
- (void)tsu_enqueue:(id)arg1;
@end

