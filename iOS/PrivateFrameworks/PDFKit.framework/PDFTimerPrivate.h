//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer;

__attribute__((visibility("hidden")))
@interface PDFTimerPrivate : NSObject
{
    NSObject *target;
    SEL selector;
    NSTimer *timer;
    double timeInterval;
    _Bool isRequested;
}

- (void).cxx_destruct;

@end

