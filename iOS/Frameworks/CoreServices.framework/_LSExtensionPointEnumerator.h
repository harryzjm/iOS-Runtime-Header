//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _LSExtensionPointEnumerator
{
    struct vector<const LSExtensionPointData *, std::__1::allocator<const LSExtensionPointData *>> _extensionDatas;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)_getObject:(id *)arg1 atIndex:(unsigned long long)arg2 context:(struct LSContext *)arg3;
- (_Bool)_prepareWithContext:(struct LSContext *)arg1 error:(id *)arg2;

@end
