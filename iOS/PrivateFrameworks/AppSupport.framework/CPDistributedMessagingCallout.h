//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface CPDistributedMessagingCallout : NSObject
{
    id _target;
    SEL _selector;
    _Bool _returnsVoid;
    _Bool _returnsVoidIsValid;
}

@property(readonly, nonatomic) _Bool returnsVoid; // @synthesize returnsVoid=_returnsVoid;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, retain, nonatomic) id target; // @synthesize target=_target;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end

