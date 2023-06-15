//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface AMSBagDataSourceChange : NSObject
{
    NSString *_accountIdentifier;
    NSString *_loadedBagIdentifier;
    NSString *_loadedBagPartialIdentifier;
    NSDictionary *_originalData;
    NSDate *_originalExpirationDate;
    NSString *_profile;
    NSString *_profileVersion;
    NSDictionary *_updatedData;
    NSDate *_updatedExpirationDate;
    NSSet *_changedKeys;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *changedKeys; // @synthesize changedKeys=_changedKeys;
@property(readonly, nonatomic) NSDate *updatedExpirationDate; // @synthesize updatedExpirationDate=_updatedExpirationDate;
@property(readonly, nonatomic) NSDictionary *updatedData; // @synthesize updatedData=_updatedData;
@property(readonly, nonatomic) NSString *profileVersion; // @synthesize profileVersion=_profileVersion;
@property(readonly, nonatomic) NSString *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) NSDate *originalExpirationDate; // @synthesize originalExpirationDate=_originalExpirationDate;
@property(readonly, nonatomic) NSDictionary *originalData; // @synthesize originalData=_originalData;
@property(readonly, nonatomic) NSString *loadedBagPartialIdentifier; // @synthesize loadedBagPartialIdentifier=_loadedBagPartialIdentifier;
@property(readonly, nonatomic) NSString *loadedBagIdentifier; // @synthesize loadedBagIdentifier=_loadedBagIdentifier;
@property(readonly, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)initWithProfile:(id)arg1 profileVersion:(id)arg2 originalData:(id)arg3 originalExpirationDate:(id)arg4 updatedData:(id)arg5 updatedExpirationDate:(id)arg6 changedKeys:(id)arg7 loadedBagIdentifier:(id)arg8 loadedBagPartialIdentifier:(id)arg9 accountIdentifier:(id)arg10;

@end

