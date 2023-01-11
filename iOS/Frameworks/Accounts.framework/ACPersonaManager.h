//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSArray, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface ACPersonaManager : NSObject
{
    NSObject<OS_dispatch_queue> *_backgroundPersonaUpdate;
    _Bool _registered;
    NSString *_enterprisePersonaUID;
    NSString *_personalPersonaUID;
    NSSet *_guestPersonasUID;
    NSArray *_dataSeparatedPersonasUIDs;
    ACAccountStore *_store;
}

+ (_Bool)performWithinPersona:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)performWithinPersonaForAccount:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)performWithinPersonaForAccountIdentifier:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;

@end
