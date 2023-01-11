//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIViewController;
@protocol SXAction, SXActionPreviewActivity;

@interface SXActionManagerPreview : NSObject
{
    id <SXAction> _action;
    id <SXActionPreviewActivity> _previewActivity;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) id <SXActionPreviewActivity> previewActivity; // @synthesize previewActivity=_previewActivity;
@property(readonly, nonatomic) id <SXAction> action; // @synthesize action=_action;
- (id)initWithAction:(id)arg1 viewController:(id)arg2 previewActivity:(id)arg3;

@end
