//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCPaidSubscriptionCursor;

@interface FCPaidSubscriptionGroupEmittingOperation
{
}

- (_Bool)unlimitedBackfill;
- (_Bool)alwaysShowExpiredGroups;
- (void)_fetchAdditionalFeedItemsForChannel:(id)arg1 feedRange:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_fetchHeadlinesForFeedItems:(id)arg1 feedContextByFeedID:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_fetchTagForSourceChannelIdentifier:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_feedItemsTransformation;
- (id)_additionalFeedItemsTransformationLimitedToNumberOfFeedItems:(unsigned long long)arg1;
- (void)_constructGroupForChannelWithIdentifier:(id)arg1 usingFeedItems:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)performOperation;

// Remaining properties
@property(retain, nonatomic) FCPaidSubscriptionCursor *cursor; // @dynamic cursor;
@property(retain, nonatomic) FCPaidSubscriptionCursor *resultCursor; // @dynamic resultCursor;
@property(retain, nonatomic) FCPaidSubscriptionCursor *toCursor; // @dynamic toCursor;

@end

