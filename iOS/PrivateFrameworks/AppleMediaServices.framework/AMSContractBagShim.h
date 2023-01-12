//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSProcessInfo, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface AMSContractBagShim : NSObject
{
    NSObject *_bagContract;
}

+ (id)_callSelector:(SEL)arg1 onBagContract:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *bagContract; // @synthesize bagContract=_bagContract;
- (SEL)_selectorForBagKey:(id)arg1;
- (id)_bagValueForBagKey:(id)arg1 bagValueType:(unsigned long long)arg2;
- (id)dictionaryForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)integerForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (id)boolForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
@property(readonly, copy, nonatomic) NSString *profileVersion;
@property(readonly, copy, nonatomic) NSString *profile;
- (_Bool)isLoaded;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, nonatomic) NSDate *expirationDate;
- (id)initWithBagContract:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property(readonly) Class superclass;

@end

