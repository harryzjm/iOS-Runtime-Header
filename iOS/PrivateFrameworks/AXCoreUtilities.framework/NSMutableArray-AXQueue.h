//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (AXQueue)
- (id)ax_nextDequeuedObject;
- (id)ax_lastEnqueuedObject;
- (id)ax_dequeueObject;
- (void)ax_enqueueObject:(id)arg1;
- (void)ax_removeObjectsFromArrayUsingBlock:(CDUnknownBlockType)arg1;
@end

