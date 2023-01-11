//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActivityAchievements/ACHTemplateEntitySyncedTemplatesObserver-Protocol.h>

@class HDProfile, NSString;
@protocol ACHTemplateEntitySyncedTemplatesObserver;

@interface ACHTemplateEntityWrapper : NSObject <ACHTemplateEntitySyncedTemplatesObserver>
{
    HDProfile *_profile;
    id <ACHTemplateEntitySyncedTemplatesObserver> _syncedTemplatesObserver;
}

@property(nonatomic) __weak id <ACHTemplateEntitySyncedTemplatesObserver> syncedTemplatesObserver; // @synthesize syncedTemplatesObserver=_syncedTemplatesObserver;
@property(retain, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (void)templateEntityDidReceiveSyncedTemplates:(id)arg1 provenance:(long long)arg2;
- (id)allTemplatesWithError:(id *)arg1;
- (_Bool)removeTemplates:(id)arg1 error:(id *)arg2;
- (_Bool)insertTemplates:(id)arg1 provenance:(long long)arg2 error:(id *)arg3;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

