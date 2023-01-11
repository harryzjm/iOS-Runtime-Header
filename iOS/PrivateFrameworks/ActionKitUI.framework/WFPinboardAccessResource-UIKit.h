//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKit/WFPinboardAccessResource.h>

#import <ActionKitUI/WFPinboardLoginViewControllerDelegate-Protocol.h>

@class NSString;

@interface WFPinboardAccessResource (UIKit) <WFPinboardLoginViewControllerDelegate>
- (void)pinboardLoginViewControllerDidCancel:(id)arg1;
- (void)pinboardLoginViewController:(id)arg1 loggedInWithUsername:(id)arg2 password:(id)arg3;
- (void)pinboardLoginViewController:(id)arg1 loggedInWithApiToken:(id)arg2;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType completionHandler;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
