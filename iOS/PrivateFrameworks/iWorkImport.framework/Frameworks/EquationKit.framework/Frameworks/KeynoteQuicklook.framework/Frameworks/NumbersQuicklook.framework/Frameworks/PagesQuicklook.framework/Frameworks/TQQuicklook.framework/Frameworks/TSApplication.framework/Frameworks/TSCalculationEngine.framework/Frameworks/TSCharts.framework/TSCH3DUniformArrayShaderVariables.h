//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TSCH3DUniformArrayShaderVariables : NSObject
{
    NSString *_prefix;
    NSMutableDictionary *_variables;
    unsigned long long _arraySize;
}

+ (id)variablesWithPrefix:(id)arg1 arraySize:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long arraySize; // @synthesize arraySize=_arraySize;
- (void)addUniformsToShaderProgram:(id)arg1 size:(unsigned long long)arg2;
- (id)variableAtIndex:(unsigned long long)arg1 name:(id)arg2;
- (void)addArrayName:(id)arg1 type:(id)arg2;
- (id)p_formatVariableName:(id)arg1;
- (void)setVariable:(id)arg1 forName:(id)arg2;
- (id)variableForName:(id)arg1;
- (id)initWithPrefix:(id)arg1 arraySize:(unsigned long long)arg2;

@end

