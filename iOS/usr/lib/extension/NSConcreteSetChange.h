//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSSetChange.h"

__attribute__((visibility("hidden")))
@interface NSConcreteSetChange : NSSetChange
{
    unsigned long long _changeType;
    id _value;
}

- (id)value;
- (unsigned long long)changeType;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 object:(id)arg2;

@end

