//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HFItem, HUTriggerTimeConditionDetailEditorViewController, UINavigationController;

@interface HUTriggerConditionDetailEditingContext : NSObject
{
    HUTriggerTimeConditionDetailEditorViewController *_viewController;
    UINavigationController *_navigationController;
    HFItem *_optionItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HFItem *optionItem; // @synthesize optionItem=_optionItem;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) HUTriggerTimeConditionDetailEditorViewController *viewController; // @synthesize viewController=_viewController;

@end
