//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagProtocol-Protocol.h>

@class NSDate, NSString;
@protocol AMSBagDataSourceProtocol;

@interface AMSBag : NSObject <AMSBagProtocol>
{
    id <AMSBagDataSourceProtocol> _dataSource;
}

+ (void)_resetBagCache;
+ (id)bagCacheAccessQueue;
+ (id)bagCache;
+ (id)bagForProfile:(id)arg1 profileVersion:(id)arg2;
@property(retain, nonatomic) id <AMSBagDataSourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)dictionaryForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)integerForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (id)boolForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isLoaded;
@property(readonly, copy, nonatomic) NSString *profileVersion;
@property(readonly, copy, nonatomic) NSString *profile;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, nonatomic) NSDate *expirationDate;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

