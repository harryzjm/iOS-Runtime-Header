//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSValueTransformer;

__attribute__((visibility("hidden")))
@interface VSBindingInfo : NSObject
{
    id _unsafeObservedObject;
    id _weakObservedObject;
    NSString *_keyPath;
    NSDictionary *_options;
    NSValueTransformer *_valueTransformer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSValueTransformer *valueTransformer; // @synthesize valueTransformer=_valueTransformer;
@property(readonly, copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) __weak id weakObservedObject; // @synthesize weakObservedObject=_weakObservedObject;
@property(readonly, nonatomic) id unsafeObservedObject; // @synthesize unsafeObservedObject=_unsafeObservedObject;
- (void)requireExpectedConcurrency;
@property(retain, nonatomic) id value;
- (id)initWithObservedObject:(id)arg1 keyPath:(id)arg2 options:(id)arg3;
- (id)init;

@end

