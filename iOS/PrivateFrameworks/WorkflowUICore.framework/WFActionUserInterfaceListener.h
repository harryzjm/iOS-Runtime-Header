//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceShortcutClient/WFSingleConnectionXPCListener.h>

@class WFActionUserInterface;

@interface WFActionUserInterfaceListener : WFSingleConnectionXPCListener
{
    WFActionUserInterface *_actionInterface;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WFActionUserInterface *actionInterface; // @synthesize actionInterface=_actionInterface;
- (id)initWithUserInterfaceType:(id)arg1 actionClassName:(id)arg2 classNamesByType:(id)arg3 attribution:(id)arg4;
- (id)initWithUserInterfaceType:(id)arg1 actionClassName:(id)arg2 classNamesByType:(id)arg3;

@end
