//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IBWatchKitImageCatalogToolExtensionsForIOS/NSObject-Protocol.h>

@class IBICSchema, NSString;

@protocol IBICSchemaProvider <NSObject>
- (void)registerSchemaComponents:(IBICSchema *)arg1;
- (void)captureExistingSlotComponents:(IBICSchema *)arg1;
- (void)registerSlotComponents:(IBICSchema *)arg1;
- (void)registerClasses:(IBICSchema *)arg1;
- (double)precedence;

@optional
+ (void)setContextDataFromCallingHost:(id)arg1;
+ (id)contextDataForRemoteTool;
+ (_Bool)supportsLARToolsTargetingPlatformNamed:(NSString *)arg1;
+ (_Bool)supportsRemoteToolsTargetingPlatformNamed:(NSString *)arg1;
- (void)registerSystemCatalogColors:(IBICSchema *)arg1;
- (void)registerSuggestionSets:(IBICSchema *)arg1;
- (void)registerFileTypes:(IBICSchema *)arg1;
@end

