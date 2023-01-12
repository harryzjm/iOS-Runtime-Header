//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMSourceStream-Protocol.h>
#import <BiomeStreams/BMStream-Protocol.h>

@class BMStoreStream, NSString;

@interface BMHealthKitWorkoutStream : NSObject <BMSourceStream, BMStream>
{
    BMStoreStream *_storeStream;
}

- (void).cxx_destruct;
- (id)source;
- (id)publisher;
- (id)publisherFromStartTime:(double)arg1;
- (id)init;
@property(readonly, nonatomic) NSString *identifier;

@end
