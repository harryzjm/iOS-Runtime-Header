//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Widgets/WGWidgetVisibilityDelegate-Protocol.h>
#import <Widgets/_WGDataSourceManager-Protocol.h>

@class NSArray, NSString, WGWidgetDataSource, WGWidgetVisibilityManager;
@protocol _WGParentDataSourceManager;

@interface WGWidgetDataSourceManager : NSObject <WGWidgetVisibilityDelegate, _WGDataSourceManager>
{
    WGWidgetDataSource *_widgetDataSource;
    WGWidgetVisibilityManager *_widgetVisbilityManager;
    id _plugInDiscoveryToken;
    _Bool _isPublishing;
    CDUnknownBlockType _didStartBlock;
    id <_WGParentDataSourceManager> _parentDataSourceManager;
}

+ (void)availableWidgetsWithCompletion:(CDUnknownBlockType)arg1;
+ (id)_widgetExtensionsDiscoveryAttributes;
@property(retain, nonatomic, getter=_widgetVisbilityManager) WGWidgetVisibilityManager *widgetVisbilityManager; // @synthesize widgetVisbilityManager=_widgetVisbilityManager;
@property(nonatomic) id <_WGParentDataSourceManager> parentDataSourceManager; // @synthesize parentDataSourceManager=_parentDataSourceManager;
@property(retain, nonatomic, getter=_plugInDiscoveryToken, setter=_setPlugInDiscoveryToken:) id plugInDiscoveryToken; // @synthesize plugInDiscoveryToken=_plugInDiscoveryToken;
- (void).cxx_destruct;
- (void)_endContinuousPlugInDiscovery;
- (void)_beginContinuousPlugInDiscovery;
- (void)_updatePublishedWidgetExtensions;
- (void)_updatePublishedWidgetExtensions:(id)arg1;
- (void)_revokeExtensionWithIdentifier:(id)arg1;
- (void)_updateDataSourceWithExtension:(id)arg1;
- (_Bool)_shouldPublishWidgetExtension:(id)arg1;
- (void)widgetVisibilityDidChange;
- (void)_stop:(CDUnknownBlockType)arg1;
- (void)_start:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *dataSources;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

