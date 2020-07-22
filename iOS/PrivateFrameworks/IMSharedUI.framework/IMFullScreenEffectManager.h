//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMSharedUI/IMFullScreenEffectDelegate-Protocol.h>

@class IMFullScreenEffect, IMScheduledUpdater, NSMutableArray, NSString, NSTimer;
@protocol IMFullScreenEffectManagerDelegate;

@interface IMFullScreenEffectManager : NSObject <IMFullScreenEffectDelegate>
{
    IMFullScreenEffect *_currentEffect;
    NSObject<IMFullScreenEffectManagerDelegate> *_delegate;
    NSMutableArray *_effectQueue;
    NSTimer *_effectDurationTimer;
    IMScheduledUpdater *_triggerUpdater;
}

@property(retain, nonatomic) IMScheduledUpdater *triggerUpdater; // @synthesize triggerUpdater=_triggerUpdater;
@property(retain, nonatomic) NSTimer *effectDurationTimer; // @synthesize effectDurationTimer=_effectDurationTimer;
@property(retain, nonatomic) NSMutableArray *effectQueue; // @synthesize effectQueue=_effectQueue;
@property(nonatomic) __weak NSObject<IMFullScreenEffectManagerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IMFullScreenEffect *currentEffect; // @synthesize currentEffect=_currentEffect;
- (void).cxx_destruct;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (void)beginHoldingUpdatesForKey:(id)arg1;
- (void)stopFullscreenEffect;
- (void)fullScreenEffectDidPrepareSoundEffect:(id)arg1;
- (void)triggerNextEffect;
- (void)startFullscreenEffectForChatItem:(id)arg1 language:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
