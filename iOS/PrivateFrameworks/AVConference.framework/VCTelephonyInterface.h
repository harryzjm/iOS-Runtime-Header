//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol VCTelephonyInterfaceDelegate;

__attribute__((visibility("hidden")))
@interface VCTelephonyInterface : NSObject
{
    id _delegate;
}

- (void)notifyCodecModeChangeEventToCT:(struct _VCAudioCodecModeChangeEvent)arg1;
- (id)translateVocoderTypeToCoreAudioType:(id)arg1;
- (void)handleVocoderNotificationWithInfo:(id)arg1;
- (void)handleTelephonyNotification:(id)arg1 withInfo:(id)arg2;
- (void)queryAnbrBitrateRecommendation:(unsigned int)arg1 direction:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getAnbrActivationStateWithCompletionHandler:(CDUnknownBlockType)arg1;
@property id <VCTelephonyInterfaceDelegate> delegate;
- (void)unregisterForNotifications;
- (_Bool)registerForNotifications;
- (void)dealloc;
- (id)initWithTelephonySubscriptionSlot:(long long)arg1;
- (id)init;

@end

