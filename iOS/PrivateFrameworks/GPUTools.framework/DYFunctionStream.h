//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DYFunctionStream : NSObject
{
}

- (void)enumerateFunctionsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)readFunctions:(struct Function *)arg1 maxCount:(unsigned long long)arg2;
- (const struct Function *)readFunction;
- (const struct Function *)peekFunction;
- (_Bool)resetToFunction:(const struct Function *)arg1;
- (void)clearResetMarker;
- (void)setResetMarker;
- (void)reset;

@end

