//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _BRKDeviceOrientationNotificationProxy : NSObject
{
}

+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool crownOrientationIsRight;
@property(readonly, nonatomic) _Bool wristOrientationIsRight;
- (void)_logCurrentState;
- (void)_postChangeNotification:(id)arg1;
- (void)_postNotification;
- (id)init;

@end
