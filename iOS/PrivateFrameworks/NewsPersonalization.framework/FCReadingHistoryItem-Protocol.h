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
@property(nonatomic, readonly) CKRecord *asCKRecord;
- (_Bool)isPruningDisabled;
@property(nonatomic, readonly) unsigned long long articleLikingStatus;
@property(nonatomic, readonly) _Bool hasArticleBeenRemovedFromAudio;
@property(nonatomic, readonly) _Bool hasArticleCompletedReading;
@property(nonatomic, readonly) _Bool hasArticleCompletedListening;
@property(nonatomic, readonly) _Bool hasArticleBeenConsumed;
@property(nonatomic, readonly) _Bool hasArticleBeenMarkedOffensive;
@property(nonatomic, readonly) _Bool hasArticleBeenSeen;
@property(nonatomic, readonly) _Bool hasArticleBeenRead;
@property(nonatomic, readonly) unsigned long long flags;
@property(nonatomic, readonly) long long readCount;
@property(nonatomic, readonly) NSDate *readingPositionSavedAt;
@property(nonatomic, readonly) NSString *readingPosition;
@property(nonatomic, readonly) NSDate *lastListenedAt;
@property(nonatomic, readonly) NSDate *listeningProgressSavedAt;
@property(nonatomic, readonly) double listeningProgress;
@property(nonatomic, readonly) long long listenedCount;
@property(nonatomic, readonly) long long maxVersionSeen;
@property(nonatomic, readonly) NSDate *firstSeenAtOfMaxVersionSeen;
@property(nonatomic, readonly) NSDate *firstSeenAt;
@property(nonatomic, readonly) long long maxVersionRead;
@property(nonatomic, readonly) NSDate *lastVisitedAt;
@property(nonatomic, readonly) NSString *deviceID;
@property(nonatomic, readonly) NSString *sourceChannelTagID;
@property(nonatomic, readonly) NSString *articleID;
@property(nonatomic, readonly) NSString *identifier;

// Remaining properties
@property(nonatomic, readonly) _Bool pruningDisabled;
@end

