//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface TSKACReadArguments : NSObject
{
    SEL _selector;
    id _target;
    void *_argument;
    id _argument2;
}

@property(readonly, nonatomic) id argument2; // @synthesize argument2=_argument2;
@property(readonly, nonatomic) void *argument; // @synthesize argument=_argument;
@property(readonly, nonatomic) id target; // @synthesize target=_target;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
- (void)dealloc;
- (id)initWithSelector:(SEL)arg1 target:(id)arg2 argument:(void *)arg3 argument2:(id)arg4;
- (id)initWithSelector:(SEL)arg1 target:(id)arg2 argument:(void *)arg3;

@end
