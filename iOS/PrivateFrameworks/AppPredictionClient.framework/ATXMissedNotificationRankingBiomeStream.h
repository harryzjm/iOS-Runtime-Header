//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/BMSourceStream-Protocol.h>
#import <AppPredictionClient/BMStream-Protocol.h>

@class BMSource, BMStoreStream, NSString;

@interface ATXMissedNotificationRankingBiomeStream : NSObject <BMStream, BMSourceStream>
{
    BMStoreStream *_inner;
    BMSource *_source;
}

- (void).cxx_destruct;
- (void)sendEvent:(id)arg1;
- (id)source;
- (id)publisherFromStartTime:(double)arg1;
- (id)initWithStoreConfig:(id)arg1;
- (id)init;
@property(readonly, nonatomic) NSString *identifier;

@end
