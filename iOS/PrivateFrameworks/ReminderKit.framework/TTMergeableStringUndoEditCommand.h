//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TTMergeableStringUndoEditCommand : NSObject
{
    void *_deleteRanges;
    void *_insertStrings;
}

@property(readonly, nonatomic) void *insertStrings; // @synthesize insertStrings=_insertStrings;
@property(readonly, nonatomic) void *deleteRanges; // @synthesize deleteRanges=_deleteRanges;
@property(readonly, copy) NSString *description;
- (_Bool)addToGroup:(id)arg1;
- (void)applyToString:(id)arg1;
- (void)updateInsertTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;
- (_Bool)hasTopoIDsThatCanChange;
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

