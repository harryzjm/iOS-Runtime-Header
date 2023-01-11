//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SKInstallSheetStatusUpdateRequest
{
    _Bool _isInstallSheetOpen;
    CDUnknownBlockType _completionHandler;
    NSString *_bundleId;
}

@property(nonatomic) _Bool isInstallSheetOpen; // @synthesize isInstallSheetOpen=_isInstallSheetOpen;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)_start;
- (void)_handleReply:(id)arg1;
- (id)initWithAppBundleId:(id)arg1 isInstallSheetOpen:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

