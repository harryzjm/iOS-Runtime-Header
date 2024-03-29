//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_LSRecordEnumerator.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSLinkedChildApplicationRecordEnumerator : _LSRecordEnumerator
{
    struct vector<unsigned int, std::allocator<unsigned int>> _units;
    NSString *_parentBundleID;
    unsigned long long _options;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)_getObject:(id *)arg1 atIndex:(unsigned long long)arg2 context:(struct LSContext *)arg3;
- (_Bool)_prepareWithContext:(struct LSContext *)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContext:(struct LSContext *)arg1 parentBundleID:(id)arg2 options:(unsigned long long)arg3;

@end

