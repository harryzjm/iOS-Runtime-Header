//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FamilyCircleUI/NSObject-Protocol.h>

@class AAFamilyInvite, FAFamilyInvitationsViewController;

@protocol FAFamilyInvitationsViewControllerDelegate <NSObject>
- (void)familyInvitationsViewControllerDidFinish:(FAFamilyInvitationsViewController *)arg1;
- (void)familyInvitationsViewController:(FAFamilyInvitationsViewController *)arg1 didProcessInvite:(AAFamilyInvite *)arg2;
@end
