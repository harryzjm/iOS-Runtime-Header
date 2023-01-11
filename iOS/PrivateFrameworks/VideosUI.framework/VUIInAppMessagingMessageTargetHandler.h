//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/IAMMessageTarget-Protocol.h>

@class NSString;

@interface VUIInAppMessagingMessageTargetHandler : NSObject <IAMMessageTarget>
{
    NSString *_targetIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *targetIdentifier; // @synthesize targetIdentifier=_targetIdentifier;
- (void)messageCoordinator:(id)arg1 didUpdatePriorityMessage:(id)arg2 forTarget:(id)arg3;
- (id)initWithTargetIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
