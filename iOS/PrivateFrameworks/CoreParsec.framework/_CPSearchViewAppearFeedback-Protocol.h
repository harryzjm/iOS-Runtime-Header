//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary;

@protocol _CPSearchViewAppearFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasReaderTextAvailable;
@property(nonatomic) _Bool readerTextAvailable;
@property(readonly, nonatomic) _Bool hasIsOverApp;
@property(nonatomic) _Bool isOverApp;
@property(readonly, nonatomic) _Bool hasIsOnLockScreen;
@property(nonatomic) _Bool isOnLockScreen;
@property(readonly, nonatomic) _Bool hasViewAppearEvent;
@property(nonatomic) int viewAppearEvent;
@property(readonly, nonatomic) _Bool hasTimestamp;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

