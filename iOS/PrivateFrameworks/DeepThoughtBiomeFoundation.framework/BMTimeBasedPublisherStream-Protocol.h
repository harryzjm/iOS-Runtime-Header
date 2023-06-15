//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeepThoughtBiomeFoundation/BMStream-Protocol.h>

@class NSNumber;
@protocol BMBookmarkablePublisher;

@protocol BMTimeBasedPublisherStream <BMStream>
- (id <BMBookmarkablePublisher>)publisherWithStartTime:(NSNumber *)arg1 endTime:(NSNumber *)arg2 maxEvents:(NSNumber *)arg3 lastN:(NSNumber *)arg4 reversed:(_Bool)arg5;
- (id <BMBookmarkablePublisher>)publisherWithStartTime:(NSNumber *)arg1 endTime:(NSNumber *)arg2 maxEvents:(NSNumber *)arg3 reversed:(_Bool)arg4;
- (id <BMBookmarkablePublisher>)publisherFromStartTime:(double)arg1;
@end

