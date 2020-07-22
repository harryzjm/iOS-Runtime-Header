//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class AVPlayerItemErrorLogEvent, NSDate, NSString;

@interface MPMovieErrorLogEvent : NSObject <NSCopying>
{
    AVPlayerItemErrorLogEvent *_event;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *errorComment;
@property(readonly, nonatomic) NSString *errorDomain;
@property(readonly, nonatomic) long long errorStatusCode;
@property(readonly, nonatomic) NSString *playbackSessionID;
@property(readonly, nonatomic) NSString *serverAddress;
@property(readonly, nonatomic) NSString *URI;
@property(readonly, nonatomic) NSDate *date;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithAVItemErrorLogEvent:(id)arg1;

@end

