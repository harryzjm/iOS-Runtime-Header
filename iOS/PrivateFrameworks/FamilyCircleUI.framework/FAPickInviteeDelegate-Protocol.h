//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FamilyCircleUI/NSObject-Protocol.h>

@class FAFamilyPickInviteeViewController;

@protocol FAPickInviteeDelegate <NSObject>
- (void)pickInviteeViewControllerWantsChildAccountFlow:(FAFamilyPickInviteeViewController *)arg1;
- (void)pickInviteeViewController:(FAFamilyPickInviteeViewController *)arg1 didCompleteWithSuccess:(_Bool)arg2;
@end

