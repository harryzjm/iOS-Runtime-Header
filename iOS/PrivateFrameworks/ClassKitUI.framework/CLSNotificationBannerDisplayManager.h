//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface CLSNotificationBannerDisplayManager : NSObject
{
    NSDate *_lastBannerTime;
}

+ (id)shared;
@property(retain, nonatomic) NSDate *lastBannerTime; // @synthesize lastBannerTime=_lastBannerTime;
- (void).cxx_destruct;
- (void)showPrivacyModalView;
- (void)showBannerWithTitle:(id)arg1 message:(id)arg2;

@end

