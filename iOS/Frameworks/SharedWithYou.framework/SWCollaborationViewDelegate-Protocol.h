//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SharedWithYou/NSObject-Protocol.h>

@class SWCollaborationView;

@protocol SWCollaborationViewDelegate <NSObject>

@optional
- (void)collaborationViewDidDismissPopover:(SWCollaborationView *)arg1;
- (void)collaborationViewWillPresentPopover:(SWCollaborationView *)arg1;
- (_Bool)collaborationViewShouldPresentPopover:(SWCollaborationView *)arg1;
@end

