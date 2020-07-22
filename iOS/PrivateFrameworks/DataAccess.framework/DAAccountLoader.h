//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface DAAccountLoader : NSObject
{
    NSMutableDictionary *_acAccountTypeToAccountFrameworkSubpath;
    NSMutableDictionary *_acAccountTypeToAccountDaemonBundleSubpath;
    NSMutableDictionary *_acAccountTypeToClassNames;
    NSMutableDictionary *_acParentAccountTypeToChildAccountTypes;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *acParentAccountTypeToChildAccountTypes; // @synthesize acParentAccountTypeToChildAccountTypes=_acParentAccountTypeToChildAccountTypes;
@property(retain, nonatomic) NSMutableDictionary *acAccountTypeToClassNames; // @synthesize acAccountTypeToClassNames=_acAccountTypeToClassNames;
@property(retain, nonatomic) NSMutableDictionary *acAccountTypeToAccountDaemonBundleSubpath; // @synthesize acAccountTypeToAccountDaemonBundleSubpath=_acAccountTypeToAccountDaemonBundleSubpath;
@property(retain, nonatomic) NSMutableDictionary *acAccountTypeToAccountFrameworkSubpath; // @synthesize acAccountTypeToAccountFrameworkSubpath=_acAccountTypeToAccountFrameworkSubpath;
- (void).cxx_destruct;
- (Class)daemonAppropriateAccountClassForACAccount:(id)arg1;
- (Class)agentClassForACAccount:(id)arg1;
- (Class)daemonAccountClassForACAccount:(id)arg1;
- (Class)clientAccountClassForACAccount:(id)arg1;
- (Class)accountClassForACAccount:(id)arg1;
- (void)loadDaemonBundleForACAccountType:(id)arg1;
- (void)loadFrameworkForACAccountType:(id)arg1;
- (_Bool)_loadFrameworkAtSubpath:(id)arg1;
- (id)init;
- (void)_addAccountInfo:(id)arg1 forFrameworkNamed:(id)arg2;

@end

