//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/AVOutputContextCommunicationChannelDelegate-Protocol.h>

@class AVOutputContext, NSString;

__attribute__((visibility("hidden")))
@interface MRAVInputStream <AVOutputContextCommunicationChannelDelegate>
{
    AVOutputContext *_outputContext;
}

@property(readonly, nonatomic) AVOutputContext *outputContext; // @synthesize outputContext=_outputContext;
- (void)outputContext:(id)arg1 didCloseCommunicationChannel:(id)arg2;
- (void)outputContext:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithOutputContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

