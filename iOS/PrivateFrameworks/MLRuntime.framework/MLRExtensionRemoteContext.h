//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <MLRuntime/MLRExtensionRemoteProtocol-Protocol.h>

@class NSObject, NSString;
@protocol MLRTaskPerforming, OS_os_transaction;

@interface MLRExtensionRemoteContext : NSExtensionContext <MLRExtensionRemoteProtocol>
{
    NSObject<OS_os_transaction> *_transaction;
    id <MLRTaskPerforming> _plugin;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) id <MLRTaskPerforming> plugin; // @synthesize plugin=_plugin;
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
- (void)stop;
- (void)performTrialTask:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)createMLRTrialTaskWithTask:(id)arg1;
- (void)performDodMLTask:(id)arg1 sandBoxExtensions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)processTaskResult:(id)arg1 forTask:(id)arg2 duration:(double)arg3 error:(id *)arg4;
- (id)createDodMLServer;
- (id)privatizeAndEncryptInplace:(id)arg1 forRecipe:(id)arg2 error:(id *)arg3;
- (id)writeBinaryDataAndReturnURL:(id)arg1 error:(id *)arg2;
- (_Bool)loadPluginIfNecessaryWithError:(id *)arg1;
- (id)initWithPlugin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
