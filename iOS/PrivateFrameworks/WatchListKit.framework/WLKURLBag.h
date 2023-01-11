//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SSURLBag;

@interface WLKURLBag : NSObject
{
    SSURLBag *_impl;
}

+ (id)URLBagForContext:(id)arg1;
- (void).cxx_destruct;
- (id)URLBagContext;
- (void)loadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)existingBagDictionary;
- (id)valueForKey:(id)arg1 error:(id *)arg2;
- (void)loadValueForKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (id)initWithURLBagContext:(id)arg1;

@end

