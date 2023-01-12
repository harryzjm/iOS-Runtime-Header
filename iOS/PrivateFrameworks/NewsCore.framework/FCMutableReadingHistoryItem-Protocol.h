//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCReadingHistoryItem-Protocol.h>

@class NSDate, NSString;

@protocol FCMutableReadingHistoryItem <FCReadingHistoryItem>
@property(nonatomic, getter=isPruningDisabled) _Bool pruningDisabled;
@property(nonatomic) unsigned long long articleLikingStatus;
@property(nonatomic) _Bool hasArticleBeenRemovedFromAudio;
@property(nonatomic) _Bool hasArticleBeenConsumed;
@property(nonatomic) _Bool hasArticleBeenMarkedOffensive;
@property(nonatomic) _Bool hasArticleCompletedReading;
@property(nonatomic) _Bool hasArticleCompletedListening;
@property(nonatomic) _Bool hasArticleBeenSeen;
@property(nonatomic) _Bool hasArticleBeenRead;
@property(nonatomic) long long readCount;
@property(copy, nonatomic) NSDate *readingPositionSavedAt;
@property(copy, nonatomic) NSString *readingPosition;
@property(copy, nonatomic) NSDate *lastListenedAt;
@property(copy, nonatomic) NSDate *listeningProgressSavedAt;
@property(nonatomic) double listeningProgress;
@property(nonatomic) long long listenedCount;
@property(nonatomic) long long maxVersionSeen;
@property(copy, nonatomic) NSDate *firstSeenAtOfMaxVersionSeen;
@property(copy, nonatomic) NSDate *firstSeenAt;
@property(nonatomic) long long maxVersionRead;
@property(copy, nonatomic) NSDate *lastVisitedAt;
@property(copy, nonatomic) NSString *deviceID;
@property(copy, nonatomic) NSString *sourceChannelTagID;
@property(copy, nonatomic) NSString *articleID;
@property(readonly, copy, nonatomic) NSString *identifier;
@end

