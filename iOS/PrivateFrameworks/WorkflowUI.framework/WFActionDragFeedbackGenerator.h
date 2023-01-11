//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface WFActionDragFeedbackGenerator
{
    _Bool _initializedReorderSound;
    unsigned int _reorderSound;
    NSDate *_lastDragStartDate;
}

@property(nonatomic) unsigned int reorderSound; // @synthesize reorderSound=_reorderSound;
@property(nonatomic) _Bool initializedReorderSound; // @synthesize initializedReorderSound=_initializedReorderSound;
@property(retain, nonatomic) NSDate *lastDragStartDate; // @synthesize lastDragStartDate=_lastDragStartDate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)playReorderSound;
- (void)draggingActionsEnteredDeletionZone:(id)arg1;
- (void)draggingMovedActions:(id)arg1 fromIndexes:(id)arg2 toIndexes:(id)arg3 inWorkflow:(id)arg4;
- (void)draggingRemovedActions:(id)arg1;
- (void)draggingInsertedActions:(id)arg1 intoWorkflow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)draggingItemSnapped;
- (void)draggingStarted;

@end
