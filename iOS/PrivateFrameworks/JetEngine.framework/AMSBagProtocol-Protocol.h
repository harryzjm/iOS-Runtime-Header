//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <JetEngine/NSObject-Protocol.h>

@class ACAccount, AMSBagValue, AMSProcessInfo, NSDate, NSString;

@protocol AMSBagProtocol <NSObject>
@property(readonly, copy, nonatomic) NSString *profileVersion;
@property(readonly, copy, nonatomic) NSString *profile;
@property(readonly, nonatomic) NSDate *expirationDate;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (AMSBagValue *)dictionaryForKey:(NSString *)arg1;
- (AMSBagValue *)URLForKey:(NSString *)arg1;
- (AMSBagValue *)stringForKey:(NSString *)arg1;
- (AMSBagValue *)integerForKey:(NSString *)arg1;
- (AMSBagValue *)doubleForKey:(NSString *)arg1;
- (void)createSnapshotWithCompletion:(void (^)(AMSSnapshotBag *, NSError *))arg1;
- (AMSBagValue *)boolForKey:(NSString *)arg1;
- (AMSBagValue *)arrayForKey:(NSString *)arg1;

@optional
@property(readonly, copy, nonatomic) AMSProcessInfo *processInfo;
- (AMSBagValue *)URLForKey:(NSString *)arg1 account:(ACAccount *)arg2;
@end

