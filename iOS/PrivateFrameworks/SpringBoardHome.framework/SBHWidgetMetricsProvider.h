//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBSWidgetMetricsProviding-Protocol.h>

@class NSString;
@protocol SBHWidgetMetricsProviderDelegate;

@interface SBHWidgetMetricsProvider : NSObject <SBSWidgetMetricsProviding>
{
    id <SBHWidgetMetricsProviderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SBHWidgetMetricsProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)previewMetricsSpecificationForDeviceContext:(id)arg1 displayContext:(id)arg2 bundleIdentifier:(id)arg3;
- (id)previewMetricsSpecificationForBundleIdentifier:(id)arg1;
- (id)systemMetricsForWidget:(id)arg1;
- (id)systemDefaultMetricsSpecification;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
