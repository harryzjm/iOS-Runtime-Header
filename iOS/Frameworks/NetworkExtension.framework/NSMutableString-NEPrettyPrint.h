//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableString.h>

@interface NSMutableString (NEPrettyPrint)
- (void)appendToStringAtColumnWithContent:(int *)arg1 column:(unsigned char)arg2 content:(const char *)arg3 appendAsNewLine:(_Bool)arg4 addNewLine:(_Bool)arg5;
- (void)appendPrettyInt:(long long)arg1 withName:(id)arg2 andIndent:(int)arg3 options:(unsigned long long)arg4;
- (void)appendPrettyBOOL:(_Bool)arg1 withName:(id)arg2 andIndent:(int)arg3 options:(unsigned long long)arg4;
- (void)appendPrettyObject:(id)arg1 withName:(id)arg2 andIndent:(int)arg3 options:(unsigned long long)arg4;
@end

