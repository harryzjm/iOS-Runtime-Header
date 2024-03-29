//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VSBinder : NSObject
{
    _Bool _establishmentProhibited;
    id _boundObject;
    NSCountedSet *_currentlyChangingBindings;
    NSMutableDictionary *_establishedBindings;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *establishedBindings; // @synthesize establishedBindings=_establishedBindings;
@property(retain, nonatomic) NSCountedSet *currentlyChangingBindings; // @synthesize currentlyChangingBindings=_currentlyChangingBindings;
@property(nonatomic, getter=isEstablishmentProhibited) _Bool establishmentProhibited; // @synthesize establishmentProhibited=_establishmentProhibited;
@property(readonly, nonatomic) __weak id boundObject; // @synthesize boundObject=_boundObject;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setValue:(id)arg1 forBinding:(id)arg2;
- (id)valueForBinding:(id)arg1;
- (void)tearDownBinding:(id)arg1;
- (void)establishBinding:(id)arg1 withInfo:(id)arg2;
- (id)_infoForBinding:(id)arg1;
- (void)dealloc;
- (id)initWithBoundObject:(id)arg1;
- (id)init;

@end

