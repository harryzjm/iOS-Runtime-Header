//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSString;

@protocol PXCPLServiceUIStatus <NSObject>
@property(readonly, nonatomic) NSString *actionConfirmationAlertButtonTitle;
@property(readonly, nonatomic) NSString *actionConfirmationAlertSubtitle;
@property(readonly, nonatomic) NSString *actionConfirmationAlertTitle;
@property(readonly, nonatomic) NSString *actionTitle;
@property(readonly, nonatomic) CDUnknownBlockType action;
@property(readonly, nonatomic) double progress;
@property(readonly, nonatomic, getter=isPaused) _Bool paused;
@property(readonly, nonatomic) NSString *failureDescription;
@property(readonly, nonatomic) NSString *stateDescription;
@property(readonly, nonatomic) NSString *referencedItemsDescription;
@end

