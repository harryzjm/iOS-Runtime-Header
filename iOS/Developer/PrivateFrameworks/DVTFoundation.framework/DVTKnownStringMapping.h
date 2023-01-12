//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DVTKnownStringMapping : NSObject
{
    CDUnknownFunctionPointerType _strToIdxFunc;
    CDUnknownFunctionPointerType _idxToStrFunc;
}

+ (id)mappingWithKnownStringToIndexFunction:(CDUnknownFunctionPointerType)arg1 indexToKnownStringFunction:(CDUnknownFunctionPointerType)arg2;
- (CDUnknownFunctionPointerType)indexToStringFunction;
- (CDUnknownFunctionPointerType)stringToIndexFunction;
- (unsigned long long)numberOfKnownStrings;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKnownStringToIndexFunction:(CDUnknownFunctionPointerType)arg1 indexToKnownStringFunction:(CDUnknownFunctionPointerType)arg2;

@end

