//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UICommandIdentifier;

__attribute__((visibility("hidden")))
@interface _UICommandItemDeletion
{
}

+ (id)deletionWithAnchor:(id)arg1;
- (_Bool)acceptBoolItemInsertionVisit:(CDUnknownBlockType)arg1 itemDeletionVisit:(CDUnknownBlockType)arg2 menuInsertionVisit:(CDUnknownBlockType)arg3 menuDeletionVisit:(CDUnknownBlockType)arg4;
- (void)acceptItemInsertionVisit:(CDUnknownBlockType)arg1 itemDeletionVisit:(CDUnknownBlockType)arg2 menuInsertionVisit:(CDUnknownBlockType)arg3 menuDeletionVisit:(CDUnknownBlockType)arg4;
- (id)initWithAnchor:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) _UICommandIdentifier *anchor; // @dynamic anchor;

@end

