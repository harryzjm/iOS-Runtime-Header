//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSyncReviewedPlace-Protocol.h>

@class NSDate, NSMutableArray, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface MapsSyncFakeReviewedPlace <MapsSyncReviewedPlace>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_editBlocks;
    _Bool _hasUserReviewed;
    unsigned long long _muid;
    NSDate *_lastSuggestedReviewDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasUserReviewed; // @synthesize hasUserReviewed=_hasUserReviewed;
@property(readonly, nonatomic) NSDate *lastSuggestedReviewDate; // @synthesize lastSuggestedReviewDate=_lastSuggestedReviewDate;
@property(readonly, nonatomic) unsigned long long muid; // @synthesize muid=_muid;
- (void)commitEditsWithCompletion:(CDUnknownBlockType)arg1;
- (void)addEditWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithIdentifier:(id)arg1 createTime:(id)arg2 hasUserReviewed:(_Bool)arg3 lastSuggestedReviewDate:(id)arg4;

// Remaining properties
@property(readonly, copy, nonatomic) NSDate *createTime;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *identifier;
@property(readonly) Class superclass;

@end
