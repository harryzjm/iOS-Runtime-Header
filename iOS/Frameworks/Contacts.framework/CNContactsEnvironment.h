//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNiOSABPredicateRunner, CNiOSAddressBook, NSURL;
@protocol CNContactsLoggerProvider, CNSchedulerProvider, SGSuggestionsServiceContactsProtocol;

@interface CNContactsEnvironment : NSObject
{
    CNiOSAddressBook *_addressBook;
    id <CNSchedulerProvider> _schedulerProvider;
    NSURL *_baseURL;
    id <SGSuggestionsServiceContactsProtocol> _suggestionsService;
    CNiOSABPredicateRunner *_abPredicateRunner;
    id <CNContactsLoggerProvider> _loggerProvider;
}

+ (id)baseURLWithDataLocationName:(id)arg1;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)arg1 schedulerProvider:(id)arg2 loggerProvider:(id)arg3;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)arg1 schedulerProvider:(id)arg2;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)arg1;
+ (id)unitTestingEnvironmentWithSchedulerProvider:(id)arg1 loggerProvider:(id)arg2;
+ (id)unitTestingEnvironment;
+ (id)inMemoryURL;
+ (id)currentEnvironment;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) id <CNContactsLoggerProvider> loggerProvider; // @synthesize loggerProvider=_loggerProvider;
@property(retain, nonatomic) CNiOSABPredicateRunner *abPredicateRunner; // @synthesize abPredicateRunner=_abPredicateRunner;
@property(retain, nonatomic) id <SGSuggestionsServiceContactsProtocol> suggestionsService; // @synthesize suggestionsService=_suggestionsService;
@property(copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
- (void).cxx_destruct;
@property(readonly, nonatomic) CNiOSAddressBook *addressBook;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSchedulerProvider:(id)arg1 loggerProvider:(id)arg2;
- (id)init;
@property(readonly, nonatomic) _Bool useInMemoryStores;

@end
