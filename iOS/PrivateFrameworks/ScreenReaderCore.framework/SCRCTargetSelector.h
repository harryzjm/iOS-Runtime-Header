//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface SCRCTargetSelector : NSObject
{
    id _target;
    SEL _selector;
}

+ (id)targetSelectorWithTarget:(id)arg1 selector:(SEL)arg2;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end

