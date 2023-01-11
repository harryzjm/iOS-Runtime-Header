//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeUI/HUItemTableTextEditingController-Protocol.h>

@class HFItemModule, NSString;
@protocol HUItemTableModuleControllerHosting;

@interface HUItemTableModuleController : NSObject <HUItemTableTextEditingController>
{
    id <HUItemTableModuleControllerHosting> _host;
    HFItemModule *_module;
}

@property(readonly, nonatomic) HFItemModule *module; // @synthesize module=_module;
@property(nonatomic) __weak id <HUItemTableModuleControllerHosting> host; // @synthesize host=_host;
- (void).cxx_destruct;
- (id)textFieldForVisibleItem:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1 item:(id)arg2;
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;
- (id)currentTextForTextField:(id)arg1 item:(id)arg2;
- (id)placeholderTextForTextField:(id)arg1 item:(id)arg2;
- (id)defaultTextForTextField:(id)arg1 item:(id)arg2;
- (_Bool)shouldManageTextFieldForItem:(id)arg1;
- (long long)rowAnimationForOperationType:(unsigned long long)arg1 item:(id)arg2 suggestedAnimation:(long long)arg3;
- (void)accessoryButtonTappedForItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (_Bool)canSelectDisabledItem:(id)arg1;
- (_Bool)canSelectItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(_Bool)arg3;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (Class)cellClassForItem:(id)arg1;
- (id)initWithModule:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

