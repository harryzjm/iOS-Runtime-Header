//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSSQLConstantValueIntermediate
{
    unsigned char _type;
    id _constantValue;
}

- (id)generateSQLStringInContext:(id)arg1;
- (void)dealloc;
- (id)initWithConstantValue:(id)arg1 inScope:(id)arg2 context:(id)arg3;
- (id)initWithConstantValue:(id)arg1 ofType:(unsigned char)arg2 inScope:(id)arg3 context:(id)arg4;

@end
