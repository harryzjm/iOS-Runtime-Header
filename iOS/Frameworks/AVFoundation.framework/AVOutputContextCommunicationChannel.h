//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class AVOutputContextCommunicationChannelInternal;
@protocol AVOutputContextCommunicationChannelImpl;

@interface AVOutputContextCommunicationChannel : NSObject
{
    AVOutputContextCommunicationChannelInternal *_ivars;
}

- (void)sendData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) id <AVOutputContextCommunicationChannelImpl> impl;
- (void)dealloc;
- (id)initWithOutputContextCommunicationChannelImpl:(id)arg1;
- (id)init;

@end
