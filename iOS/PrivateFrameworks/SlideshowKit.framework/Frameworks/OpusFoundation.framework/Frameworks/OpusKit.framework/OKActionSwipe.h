//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OpusKit/NSSecureCoding-Protocol.h>
#import <OpusKit/OKActionSwipeExports-Protocol.h>

@interface OKActionSwipe <OKActionSwipeExports, NSSecureCoding>
{
    unsigned long long _direction;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)swipeActionWithLocation:(struct CGPoint)arg1 direction:(unsigned long long)arg2 touchCount:(unsigned long long)arg3 context:(id)arg4;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end
