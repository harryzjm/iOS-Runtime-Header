//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebFetchMetricsIdentifierAction
{
    _Bool _crossDeviceSync;
    ACAccount *_account;
    NSString *_bagNamespace;
    NSString *_bagProfile;
    NSString *_bagProfileVersion;
    NSString *_identifierKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *identifierKey; // @synthesize identifierKey=_identifierKey;
@property(nonatomic) _Bool crossDeviceSync; // @synthesize crossDeviceSync=_crossDeviceSync;
@property(retain, nonatomic) NSString *bagProfileVersion; // @synthesize bagProfileVersion=_bagProfileVersion;
@property(retain, nonatomic) NSString *bagProfile; // @synthesize bagProfile=_bagProfile;
@property(retain, nonatomic) NSString *bagNamespace; // @synthesize bagNamespace=_bagNamespace;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)runAction;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;

@end

