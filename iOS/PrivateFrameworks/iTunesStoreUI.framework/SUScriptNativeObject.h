//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, SUScriptObject;

@interface SUScriptNativeObject : NSObject
{
    id _strongObject;
    id _weakObject;
    SUScriptObject *_scriptObject;
    NSLock *_internalLock;
}

+ (id)objectWithNativeObject:(id)arg1 weak:(_Bool)arg2;
+ (id)objectWithNativeObject:(id)arg1;
@property(retain, nonatomic) NSLock *internalLock; // @synthesize internalLock=_internalLock;
- (void).cxx_destruct;
- (void)unlock;
- (void)setupNativeObject;
- (void)lock;
- (void)destroyNativeObject;
@property(nonatomic) __weak id weakObject;
@property(retain, nonatomic) id strongObject;
@property __weak SUScriptObject *scriptObject;
@property(retain) id object;
- (id)init;

@end

