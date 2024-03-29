//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ESDObjectFactory : NSObject
{
    struct EshObjectFactory *eshObjectFactory;
    NSMutableArray *eshObjectFactoryStack;
}

+ (id)threadLocalFactory;
- (void).cxx_destruct;
- (void)setEshFactory:(struct EshObjectFactory *)arg1;
- (void)restoreHostEshFactory;
- (void)replaceHostEshFactoryWith:(struct EshObjectFactory *)arg1;
- (struct EshObject *)createObjectWithType:(unsigned short)arg1 version:(unsigned short)arg2;
- (struct EshObject *)createObjectWithType:(unsigned short)arg1;
- (void)dealloc;
- (id)init;

@end

