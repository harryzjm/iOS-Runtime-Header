//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MPSStateResourceList : NSObject
{
    struct ResourceListNode *_list;
}

+ (id)resourceListWithBufferSizes:(unsigned long long)arg1;
+ (id)resourceListWithTextureDescriptors:(id)arg1;
+ (id)resourceList;
- (id)debugDescription;
- (void)dealloc;
- (void)appendBuffer:(unsigned long long)arg1;
- (void)appendTexture:(id)arg1;
- (id)init;

@end

