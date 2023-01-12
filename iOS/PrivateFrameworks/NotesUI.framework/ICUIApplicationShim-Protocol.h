//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesUI/NSObject-Protocol.h>

@class UIWindow;

@protocol ICUIApplicationShim <NSObject>
@property(readonly, nonatomic) UIWindow *keyWindow;
- (_Bool)isQuickNoteSessionActive;
- (_Bool)isSecureScreenShowing;
- (void)endReceivingRemoteControlEvents;
- (void)beginReceivingRemoteControlEvents;
@end

