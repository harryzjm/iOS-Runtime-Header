//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNAudioDataSourceUtilities : NSObject
{
}

+ (void)setChannelMap:(id)arg1 onQueue:(void *)arg2 session:(id)arg3;
+ (id)builtInMicrophoneDeviceUIDForSession:(id)arg1;
+ (void)enableAlwaysOnAudioRouting:(void *)arg1;
+ (id)audioQueueConfigurationWithAudioConfiguration:(id)arg1;
+ (id)applyUserDefaultOverridesToAudioConfiguration:(id)arg1;
+ (id)defaultAudioConfigurationForCurrentHW;
+ (id)defaultAudioConfigurationForProductType:(int)arg1;
- (id)init;

@end

