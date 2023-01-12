//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WBSCoreAnalyticsExtensionsStatistics : NSObject
{
    _Bool _hasExtensionThatCanOverrideNewTabPage;
    _Bool _newTabPageIsOverridden;
    unsigned long long _enabledCount;
    unsigned long long _disabledCount;
    NSArray *_telemetryDataForExtensions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool newTabPageIsOverridden; // @synthesize newTabPageIsOverridden=_newTabPageIsOverridden;
@property(readonly, nonatomic) _Bool hasExtensionThatCanOverrideNewTabPage; // @synthesize hasExtensionThatCanOverrideNewTabPage=_hasExtensionThatCanOverrideNewTabPage;
@property(readonly, nonatomic) NSArray *telemetryDataForExtensions; // @synthesize telemetryDataForExtensions=_telemetryDataForExtensions;
@property(readonly, nonatomic) unsigned long long disabledCount; // @synthesize disabledCount=_disabledCount;
@property(readonly, nonatomic) unsigned long long enabledCount; // @synthesize enabledCount=_enabledCount;
- (id)initWithExtensionsList:(id)arg1 extractDeveloperIdentifier:(CDUnknownBlockType)arg2 extractComposedIdentifier:(CDUnknownBlockType)arg3 extensionTelemetryDataPredicate:(CDUnknownBlockType)arg4 newTabPageIsOverridden:(_Bool)arg5;
- (id)initWithExtensionsList:(id)arg1 extractDeveloperIdentifier:(CDUnknownBlockType)arg2 extractComposedIdentifier:(CDUnknownBlockType)arg3 extensionTelemetryDataPredicate:(CDUnknownBlockType)arg4;

@end
