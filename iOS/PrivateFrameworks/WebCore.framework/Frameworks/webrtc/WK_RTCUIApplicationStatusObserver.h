//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WK_RTCUIApplicationStatusObserver : NSObject
{
    _Bool _isActive;
}

+ (void)prepareForUse;
+ (id)sharedInstance;
- (_Bool)isApplicationActive;
- (void)setInactive;
- (void)setActive;
- (id)init;

@end
