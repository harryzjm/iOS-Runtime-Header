//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class WFWorkflow;
@protocol WFGallerySubmissionControllerDelegate;

@protocol WFGallerySubmissionController <NSObject>
@property(nonatomic) __weak id <WFGallerySubmissionControllerDelegate> delegate;
- (id)initWithWorkflow:(WFWorkflow *)arg1;
@end
