//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSUIApplicationWorkspaceClientDelegate-Protocol.h>

@class NSString;
@protocol FBSUIApplicationWorkspaceDelegate;

@interface FBSUIApplicationWorkspace <FBSUIApplicationWorkspaceClientDelegate>
{
}

- (void)clientHandleAssertionExpirationImminent:(id)arg1;
- (void)client:(id)arg1 handleExit:(id)arg2;
- (void)client:(id)arg1 handleLaunch:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)isUIApplicationWorkspace;
- (Class)_clientClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <FBSUIApplicationWorkspaceDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
