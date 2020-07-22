//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesShared/TTMergeableStringUndoCommand-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface TTMergeableStringUndoGroup : NSObject <TTMergeableStringUndoCommand>
{
    NSMutableDictionary *_seen;
    NSMutableArray *_commands;
}

@property(retain, nonatomic) NSMutableArray *commands; // @synthesize commands=_commands;
@property(retain, nonatomic) NSMutableDictionary *seen; // @synthesize seen=_seen;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)addToGroup:(id)arg1;
- (void)applyToString:(id)arg1;
- (_Bool)hasTopoIDsThatCanChange;
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;
- (_Bool)addSeenRange:(struct TopoIDRange)arg1;
- (void)addCommand:(id)arg1;
- (void)closeGroup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

