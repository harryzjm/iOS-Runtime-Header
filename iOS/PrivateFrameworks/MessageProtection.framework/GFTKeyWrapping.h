//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GFTKeyWrapping : NSObject
{
}

+ (id)unwrapSeed:(id)arg1 usingKey:(struct __SecKey *)arg2 legacy:(_Bool)arg3 error:(id *)arg4;
+ (id)wrapSeed:(id)arg1 toKeys:(id)arg2 error:(id *)arg3;
+ (id)wrapSeed:(id)arg1 to:(struct __SecKey *)arg2 legacy:(_Bool)arg3 error:(id *)arg4;

@end
