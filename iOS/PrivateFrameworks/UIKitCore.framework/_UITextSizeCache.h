//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UITextSizeCache : NSObject
{
    struct ui_size_cache _cache;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (void)removeAllSizes;
- (void)addSize:(struct CGSize)arg1 baselineInfo:(CDStruct_3ae44ac1 *)arg2 forTargetSize:(struct CGSize)arg3;
- (_Bool)getSize:(struct CGSize *)arg1 baselineInfo:(CDStruct_3ae44ac1 *)arg2 forTargetSize:(struct CGSize)arg3 isMultiline:(_Bool)arg4;

@end

