//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/BBSettingsGatewayClientInterface-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface BBSettingsGateway : NSObject <BBSettingsGatewayClientInterface>
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)initialize;
+ (id)serverInterface;
+ (id)clientInterface;
- (void).cxx_destruct;
- (void)getEffectiveGlobalContentPreviewsSettingWithCompletion:(CDUnknownBlockType)arg1;
- (void)setEffectiveGlobalContentPreviewsSetting:(long long)arg1;
- (void)updateSectionInfoForSectionID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)getSectionInfoForActiveSectionsWithCompletion:(CDUnknownBlockType)arg1;
- (id)activeSectionInfo;
- (void)getEffectiveSectionInfoForSectionID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getSectionInfoForSectionID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)sectionInfoForSectionID:(id)arg1;
- (void)getEffectiveSectionInfoForSectionIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getSectionInfoForSectionIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)sectionInfoForSectionIDs:(id)arg1;
- (void)getSectionInfoWithCompletion:(CDUnknownBlockType)arg1;
- (id)allSectionInfo;
- (void)invalidate;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

