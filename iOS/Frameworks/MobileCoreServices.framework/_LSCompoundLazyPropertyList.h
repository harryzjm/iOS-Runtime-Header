//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface _LSCompoundLazyPropertyList
{
    NSArray *_plists;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_getValue:(id *)arg1 forPropertyListKey:(id)arg2;
- (_Bool)_getPropertyList:(id *)arg1;
- (id)initWithLazyPropertyLists:(id)arg1;

@end

