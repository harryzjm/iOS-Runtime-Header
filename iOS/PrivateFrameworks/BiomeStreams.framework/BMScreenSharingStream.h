//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMSourceStream-Protocol.h>
#import <BiomeStreams/BMTimeBasedPublisherStream-Protocol.h>

@class BMStoreStream, NSString;

@interface BMScreenSharingStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream>
{
    BMStoreStream *_storeStream;
}

- (void).cxx_destruct;
- (id)source;
- (id)publisher;
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 lastN:(id)arg4 reversed:(_Bool)arg5;
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 reversed:(_Bool)arg4;
- (id)publisherFromStartTime:(double)arg1;
- (id)init;
@property(readonly, nonatomic) NSString *identifier;

@end
