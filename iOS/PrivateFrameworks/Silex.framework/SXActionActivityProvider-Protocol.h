//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class SXAction;
@protocol SXActionActivityGroup, SXActionPreviewActivity;

@protocol SXActionActivityProvider <NSObject>
- (id <SXActionActivityGroup>)activityGroupForAction:(SXAction *)arg1;

@optional
- (id <SXActionPreviewActivity>)previewActivityForAction:(SXAction *)arg1;
@end
