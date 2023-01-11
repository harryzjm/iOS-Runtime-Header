//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (PFInstanceOnce)
+ (void)handleInvalidExecutionContextForSelector:(SEL)arg1 requirement:(int)arg2;
+ (_Bool)currentContextCanExecuteSelector:(SEL)arg1;
+ (void)setExecutionContextCheck:(int)arg1 forClassMethod:(SEL)arg2;
+ (void)setExecutionContextCheck:(int)arg1 forInstanceMethod:(SEL)arg2;
+ (void)setExecutionContextCheckForAllClassMethods:(int)arg1;
+ (void)setExecutionContextCheckForAllInstanceMethods:(int)arg1;
+ (Class)implementingClassForInstanceMethod:(SEL)arg1;
+ (_Bool)implementsInstanceMethod:(SEL)arg1;
+ (_Bool)implementsClassMethod:(SEL)arg1;
- (void)handleInvalidExecutionContextForSelector:(SEL)arg1 requirement:(int)arg2;
- (_Bool)currentContextCanExecuteSelector:(SEL)arg1;
- (id)multicaster:(id)arg1 queueForSelector:(SEL)arg2;
- (id)associatedObjectForKey:(id)arg1;
- (void)setAssociatedObject:(id)arg1 forKey:(id)arg2;
@end
