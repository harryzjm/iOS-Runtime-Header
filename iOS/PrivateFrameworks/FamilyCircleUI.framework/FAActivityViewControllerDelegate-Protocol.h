//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FamilyCircleUI/NSObject-Protocol.h>

@class FAActivityViewController, FAInviteLinkMetadata, NSString, UIActivity;

@protocol FAActivityViewControllerDelegate <NSObject>
- (FAInviteLinkMetadata *)linkMetadataForActivityViewController:(FAActivityViewController *)arg1;
- (void)activityViewController:(FAActivityViewController *)arg1 didCompleteActivityType:(NSString *)arg2;
- (void)activityViewController:(FAActivityViewController *)arg1 willStartAsyncActivity:(UIActivity *)arg2;
@end

