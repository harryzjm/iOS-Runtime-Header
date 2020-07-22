//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLFunctionConstantInternal
{
    NSString *_name;
    unsigned long long _type;
    unsigned long long _index;
    _Bool _required;
}

- (_Bool)required;
- (unsigned long long)index;
- (unsigned long long)type;
- (id)name;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 index:(unsigned long long)arg3 required:(_Bool)arg4;

@end

