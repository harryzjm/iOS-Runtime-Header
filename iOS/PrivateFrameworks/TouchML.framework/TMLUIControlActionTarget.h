//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TMLUIControlActionTarget : NSObject
{
    NSString *_signalName;
    unsigned long long _controlEvent;
}

- (void).cxx_destruct;
- (void)controlAction:(id)arg1 forEvent:(id)arg2;
- (id)initWithSignal:(id)arg1 controlEvent:(unsigned long long)arg2;

@end

