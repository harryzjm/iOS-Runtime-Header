//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CNContactsLogger;

@interface CNTCC : NSObject
{
    long long _simulateType;
    _Bool _simulateAccessPrompt;
    _Bool _simulateAccessPromptGranted;
    double _simulateAccessPromptDelay;
    id <CNContactsLogger> _logger;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) id <CNContactsLogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (id)_simulateQueue;
- (void)simulateIfAccessPromptDisplayedThenUserGrantedAccess:(_Bool)arg1 withDelay:(double)arg2;
- (void)simulate:(long long)arg1;
- (unsigned char)checkAuditToken:(CDStruct_6ad76789)arg1;
- (void)accessRequestWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned char)isAccessRestricted;
- (int)accessPreflight;
- (id)initWithEnvironment:(id)arg1;
- (id)init;

@end
