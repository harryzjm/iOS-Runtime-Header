//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCopying-Protocol.h>

@class NSDocInfo, NSString;

@interface NSLeafProxy <NSCopying>
{
    Class isa;
    NSString *dir;
    NSString *file;
    NSDocInfo *docInfo;
    long long refCount;
    id realObject;
}

+ (void)forwardInvocation:(id)arg1;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (_Bool)isProxy;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)autorelease;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (void)release;
- (id)retain;
- (void)reallyDealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initDir:(id)arg1 file:(id)arg2 docInfo:(id)arg3;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;

@end

