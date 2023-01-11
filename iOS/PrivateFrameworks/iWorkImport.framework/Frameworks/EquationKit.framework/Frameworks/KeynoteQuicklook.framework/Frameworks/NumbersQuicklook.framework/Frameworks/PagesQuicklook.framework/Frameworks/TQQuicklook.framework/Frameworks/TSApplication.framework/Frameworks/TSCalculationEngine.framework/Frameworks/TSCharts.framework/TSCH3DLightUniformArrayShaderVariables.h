//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSCH3DUniformArrayShaderVariables;

@interface TSCH3DLightUniformArrayShaderVariables : NSObject
{
    TSCH3DUniformArrayShaderVariables *mVariables;
}

- (id)variableAtIndex:(unsigned long long)arg1 name:(id)arg2;
- (void)addUniformsToShaderProgram:(id)arg1 size:(unsigned long long)arg2;
- (unsigned long long)arraySize;
- (void)initializeArrayVariables;
- (void)dealloc;
- (void)initializePrefix:(id)arg1;

@end
