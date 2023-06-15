//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _UIEditMenuPresentationServer : NSObject
{
    NSMutableDictionary *_configurations;
    NSMutableDictionary *_presentations;
    NSMutableDictionary *_connections;
}

+ (id)sharedPresentationServer;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSMutableDictionary *presentations; // @synthesize presentations=_presentations;
@property(retain, nonatomic) NSMutableDictionary *configurations; // @synthesize configurations=_configurations;
- (void)_editMenuPresentation:(id)arg1 willDismissMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)_editMenuPresentation:(id)arg1 willPresentMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (struct CGRect)_editMenuPresentation:(id)arg1 targetRectForConfiguration:(id)arg2;
- (void)_editMenuPresentation:(id)arg1 didTransitionMenuForConfiguration:(id)arg2;
- (id)_editMenuPresentation:(id)arg1 titleViewForMenu:(id)arg2 configuration:(id)arg3;
- (void)_editMenuPresentation:(id)arg1 preparedMenuForDisplay:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_editMenuPresentation:(id)arg1 didSelectMenuLeaf:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_sendLifecycleEvent:(long long)arg1 forMenuWithIdentifier:(id)arg2;
- (void)updateUserInterfaceStyleForMenuWithIdentifier:(id)arg1 userInterfaceStyle:(long long)arg2;
- (void)replaceEditMenuForIdentifier:(id)arg1 updatedMenu:(id)arg2 reason:(long long)arg3;
- (void)dismissEditMenuForIdentifier:(id)arg1 hideReason:(long long)arg2;
- (void)presentEditMenuWithConfiguration:(id)arg1 originContext:(id)arg2 inDisplayDelegate:(id)arg3 forConnection:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

