//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPGreenTeaLoggerWrapper;

__attribute__((visibility("hidden")))
@interface MPMediaLibraryPrivacyContext : NSObject
{
    MPGreenTeaLoggerWrapper *_gtLogger;
}

+ (void)setDefaultClientWithAuditToken:(CDStruct_6ad76789)arg1;
+ (id)contextForDefaultClient;
+ (id)sharedContextForCurrentProcess;
+ (void)initialize;
- (void).cxx_destruct;
- (void)endAccessInterval;
- (void)beginAccessInterval;
- (void)logPrivacyAccess;
- (id)initWithPAApplication:(id)arg1;
- (id)initWithAuditToken:(CDStruct_6ad76789)arg1;
- (id)initWithClientIdentity:(id)arg1;
- (id)init;

@end

