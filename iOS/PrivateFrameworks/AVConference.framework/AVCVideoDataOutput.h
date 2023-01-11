//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVConferenceXPCClient;
@protocol AVCVideoDataOutputDelegate, OS_dispatch_queue;

@interface AVCVideoDataOutput : NSObject
{
    AVConferenceXPCClient *_connection;
    CDStruct_cc9cf49a _videoAttributes;
    id _delegate;
    long long _streamToken;
    _Bool _isValid;
    _Bool _isVideoDegraded;
    _Bool _isVideoSuspended;
    _Bool _isMediaStalled;
    _Bool _isVideoPaused;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_internalReceiverQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalReceiverQueue; // @synthesize internalReceiverQueue=_internalReceiverQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) CDStruct_cc9cf49a videoAttributes; // @synthesize videoAttributes=_videoAttributes;
@property(nonatomic) _Bool isVideoPaused; // @synthesize isVideoPaused=_isVideoPaused;
@property(nonatomic) _Bool isMediaStalled; // @synthesize isMediaStalled=_isMediaStalled;
@property(nonatomic) _Bool isVideoSuspended; // @synthesize isVideoSuspended=_isVideoSuspended;
@property(nonatomic) _Bool isVideoDegraded; // @synthesize isVideoDegraded=_isVideoDegraded;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(readonly, nonatomic) long long streamToken; // @synthesize streamToken=_streamToken;
@property(nonatomic) id <AVCVideoDataOutputDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithStreamToken:(long long)arg1 delegate:(id)arg2 queue:(id)arg3 error:(id *)arg4;

@end
