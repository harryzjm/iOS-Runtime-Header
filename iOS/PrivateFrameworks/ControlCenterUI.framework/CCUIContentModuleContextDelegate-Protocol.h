//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ControlCenterUI/NSObject-Protocol.h>

@class CCUIContentModuleContext, CCUIStatusUpdate;

@protocol CCUIContentModuleContextDelegate <NSObject>
- (void)dismissExpandedViewForContentModuleContext:(CCUIContentModuleContext *)arg1;
- (void)requestExpandModuleForContentModuleContext:(CCUIContentModuleContext *)arg1;
- (void)contentModuleContext:(CCUIContentModuleContext *)arg1 enqueueStatusUpdate:(CCUIStatusUpdate *)arg2;
@end
