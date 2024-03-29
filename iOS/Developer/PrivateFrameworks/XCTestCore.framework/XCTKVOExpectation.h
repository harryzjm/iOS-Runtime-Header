//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface XCTKVOExpectation
{
    NSString *_keyPath;
    id _observedObject;
    id _expectedValue;
    unsigned long long _options;
    CDUnknownBlockType _handler;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly) unsigned long long options; // @synthesize options=_options;
@property(readonly) id expectedValue; // @synthesize expectedValue=_expectedValue;
@property(readonly) id observedObject; // @synthesize observedObject=_observedObject;
@property(readonly, copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (id)_generateExpectationDescription;
- (void)cleanup:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithKeyPath:(id)arg1 object:(id)arg2;
- (id)initWithKeyPath:(id)arg1 object:(id)arg2 expectedValue:(id)arg3;
- (id)initWithKeyPath:(id)arg1 object:(id)arg2 expectedValue:(id)arg3 options:(unsigned long long)arg4;

@end

