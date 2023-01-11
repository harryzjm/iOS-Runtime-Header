//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWAttentionAwarenessClient, AWAttentionAwarenessConfiguration;
@protocol ITAttentionAwarenessClientDelegate;

@interface ITAttentionAwarenessClient : NSObject
{
    struct os_unfair_lock_s _accessLock;
    _Bool _access_enabled;
    AWAttentionAwarenessClient *_access_attentionAwarenessClient;
    id <ITAttentionAwarenessClientDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ITAttentionAwarenessClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AWAttentionAwarenessClient *_access_attentionAwarenessClient; // @synthesize _access_attentionAwarenessClient;
- (void)_handleAttentionAwarenessEvent:(id)arg1;
- (void)_access_suspend;
- (void)_access_resume;
- (void)setConfiguration:(id)arg1 shouldReset:(_Bool)arg2;
@property(retain, nonatomic) AWAttentionAwarenessConfiguration *configuration;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_access_enabled;
- (id)_initWithCalloutQueue:(id)arg1 attentionAwarenessClient:(id)arg2;
- (id)initWithCalloutQueue:(id)arg1;
- (id)init;

@end
