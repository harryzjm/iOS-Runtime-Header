//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class THAButton;

__attribute__((visibility("hidden")))
@interface THAButtonEvent : NSObject
{
    THAButton *_button;
    unsigned long long _state;
    double _timestamp;
}

- (void).cxx_destruct;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) THAButton *button; // @synthesize button=_button;
- (id)serialize;

@end

