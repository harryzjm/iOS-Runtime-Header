//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DYDisplayLinkInterposer : NSObject
{
    id _target;
    SEL _sel;
    unsigned long long _endTimestamp;
}

- (void)dealloc;
- (void)forwardDisplayLinkCallback:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end

