//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol FBSUIApplicationWorkspaceClientDelegate;

@interface FBSUIApplicationWorkspaceClient
{
}

- (void)_queue_handleAssertionExpirationImminent:(id)arg1;
- (void)_queue_handleExit:(id)arg1;
- (void)_queue_handleLaunch:(id)arg1;
- (_Bool)willObserveLayersManually;
- (_Bool)_queue_handleMessageWithType:(long long)arg1 message:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) id <FBSUIApplicationWorkspaceClientDelegate> delegate; // @dynamic delegate;

@end

