//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIContextMenuInteractionDelegate-Protocol.h>

@class NSString, UIContextMenuInteraction;

__attribute__((visibility("hidden")))
@interface _UIContextMenuInteractionBasedTextContextInteraction <UIContextMenuInteractionDelegate>
{
    UIContextMenuInteraction *_contextMenuInteraction;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // @synthesize contextMenuInteraction=_contextMenuInteraction;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (void)_contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didMoveToView:(id)arg1;
- (void)willMoveToView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
