//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _DKSyncToggle : NSObject
{
    _Bool _enabled;
    NSObject *_object;
    NSString *_name;
    SEL _enableSelector;
    SEL _disableSelector;
}

+ (id)toggleWithObject:(id)arg1 name:(id)arg2 enableSelector:(SEL)arg3 disableSelector:(SEL)arg4;
@property(readonly, nonatomic) SEL disableSelector; // @synthesize disableSelector=_disableSelector;
@property(readonly, nonatomic) SEL enableSelector; // @synthesize enableSelector=_enableSelector;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) __weak NSObject *object; // @synthesize object=_object;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)_setEnabled:(_Bool)arg1;
- (void)dealloc;
- (id)initWithObject:(id)arg1 name:(id)arg2 enableSelector:(SEL)arg3 disableSelector:(SEL)arg4;

@end

