//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, XCTestExpectation;

@interface CLIntersiloServiceMockPayload : NSObject
{
    _Bool _inUse;
    XCTestExpectation *_expectation;
    NSDictionary *_inputDictionary;
    NSDictionary *_outputDictionary;
}

@property(nonatomic) _Bool inUse; // @synthesize inUse=_inUse;
@property(readonly, nonatomic) NSDictionary *outputDictionary; // @synthesize outputDictionary=_outputDictionary;
@property(readonly, nonatomic) NSDictionary *inputDictionary; // @synthesize inputDictionary=_inputDictionary;
@property(readonly, nonatomic) XCTestExpectation *expectation; // @synthesize expectation=_expectation;
- (void).cxx_destruct;
- (void)setOutput:(id)arg1 forKey:(id)arg2;
- (id)initWithExpectation:(id)arg1 inputDictionary:(id)arg2;

@end
