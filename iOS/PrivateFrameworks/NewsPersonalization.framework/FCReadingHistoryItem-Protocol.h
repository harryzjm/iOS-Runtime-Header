//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsPersonalization/NSCopying-Protocol.h>
#import <NewsPersonalization/NSMutableCopying-Protocol.h>
#import <NewsPersonalization/NSObject-Protocol.h>

@class CKRecord, NSDate, NSString;

@protocol FCReadingHistoryItem <NSObject, NSCopying, NSMutableCopying>
@property(readonly, nonatomic) CKRecord *asCKRecord;
@property(readonly, nonatomic, getter=isPruningDisabled) _Bool pruningDisabled;
@property(readonly, nonatomic) unsigned long long articleLikingStatus;
@property(readonly, nonatomic) _Bool hasArticleBeenRemovedFromAudio;
@property(readonly, nonatomic) _Bool hasArticleCompletedReading;
@property(readonly, nonatomic) _Bool hasArticleCompletedListening;
@property(readonly, nonatomic) _Bool hasArticleBeenConsumed;
@property(readonly, nonatomic) _Bool hasArticleBeenMarkedOffensive;
@property(readonly, nonatomic) _Bool hasArticleBeenSeen;
@property(readonly, nonatomic) _Bool hasArticleBeenRead;
@property(readonly, nonatomic) unsigned long long flags;
@property(readonly, nonatomic) long long readCount;
@property(readonly, copy, nonatomic) NSDate *readingPositionSavedAt;
@property(readonly, copy, nonatomic) NSString *readingPosition;
@property(readonly, copy, nonatomic) NSDate *lastListenedAt;
@property(readonly, copy, nonatomic) NSDate *listeningProgressSavedAt;
@property(readonly, nonatomic) double listeningProgress;
@property(readonly, nonatomic) long long listenedCount;
@property(readonly, nonatomic) long long maxVersionSeen;
@property(readonly, copy, nonatomic) NSDate *firstSeenAtOfMaxVersionSeen;
@property(readonly, copy, nonatomic) NSDate *firstSeenAt;
@property(readonly, nonatomic) long long maxVersionRead;
@property(readonly, copy, nonatomic) NSDate *lastVisitedAt;
@property(readonly, copy, nonatomic) NSString *deviceID;
@property(readonly, copy, nonatomic) NSString *sourceChannelTagID;
@property(readonly, copy, nonatomic) NSString *articleID;
@property(readonly, copy, nonatomic) NSString *identifier;
@end

