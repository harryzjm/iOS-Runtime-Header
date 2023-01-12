//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CLFindMyAccessoryFirmwareUpdateDelegate, OS_dispatch_queue;

@interface CLFindMyAccessoryFirmwareUpdateManager : NSObject
{
    id <CLFindMyAccessoryFirmwareUpdateDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct unique_ptr<CLConnectionClient, std::default_delete<CLConnectionClient>> _connection;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <CLFindMyAccessoryFirmwareUpdateDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchWhetherLocalFirmwareAssetIsInUseForProductGroup:(id)arg1 andProductNumber:(id)arg2;
- (void)useDefaultFirmwareAssetSourceForProductGroup:(id)arg1 andProductNumber:(id)arg2;
- (void)useLocalFirmwareAssetFromURL:(id)arg1 forProductGroup:(id)arg2 forProductNumber:(id)arg3 withSandboxExtension:(id)arg4;
- (void)abortFirmwareUpdateForDevice:(id)arg1;
- (void)updateFirmwareForDevice:(id)arg1 withAssetURL:(id)arg2;
- (void)getPersonalizationInfoForDevice:(id)arg1;
- (void)handleMessage:(shared_ptr_bdcc6d0f)arg1;
- (void)handleInterruption;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)init;

@end
