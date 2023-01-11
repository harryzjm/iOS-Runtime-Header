//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagDataSourceProtocol-Protocol.h>
#import <AppleMediaServices/NSCopying-Protocol.h>
#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class AMSBagKeySet, AMSProcessInfo, NSArray, NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSBagFrozenDataSource : NSObject <AMSBagDataSourceProtocol, NSCopying, NSSecureCoding>
{
    NSDate *_expirationDate;
    AMSProcessInfo *_processInfo;
    NSString *_profile;
    NSString *_profileVersion;
    AMSBagKeySet *_bagKeySet;
    NSArray *_cookies;
    NSDictionary *_data;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSArray *cookies; // @synthesize cookies=_cookies;
@property(readonly, nonatomic) AMSBagKeySet *bagKeySet; // @synthesize bagKeySet=_bagKeySet;
@property(readonly, copy, nonatomic) NSString *profileVersion; // @synthesize profileVersion=_profileVersion;
@property(readonly, copy, nonatomic) NSString *profile; // @synthesize profile=_profile;
@property(readonly, copy, nonatomic) AMSProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)valueForURLVariable:(id)arg1 account:(id)arg2;
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;
- (id)bagKeyInfoForKey:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (id)_initWithProfile:(id)arg1 profileVersion:(id)arg2 data:(id)arg3 expirationDate:(id)arg4 bagKeySet:(id)arg5 cookies:(id)arg6 processInfo:(id)arg7;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType dataSourceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType dataSourceDataInvalidatedHandler;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) NSString *descriptionExtended;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
