//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface ATXStackConfigStatistics : NSObject
{
    NSString *_widgetBundleId;
    NSString *_widgetKind;
    NSString *_containerBundleIdentifier;
    long long _widgetFamily;
    NSDate *_timestamp;
    long long _countOfSmartStacksWithWidget;
    long long _countOfNonSmartStacksWithWidget;
    long long _countOfStandaloneWidgets;
    long long _countOfWidgetsWithUnknownStackKind;
}

+ (id)stackConfigStatisticsWithWidgetBundleId:(id)arg1 widgetKind:(id)arg2 containerBundleIdentifier:(id)arg3 widgetFamily:(long long)arg4 withBlock:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long countOfWidgetsWithUnknownStackKind; // @synthesize countOfWidgetsWithUnknownStackKind=_countOfWidgetsWithUnknownStackKind;
@property(readonly, nonatomic) long long countOfStandaloneWidgets; // @synthesize countOfStandaloneWidgets=_countOfStandaloneWidgets;
@property(readonly, nonatomic) long long countOfNonSmartStacksWithWidget; // @synthesize countOfNonSmartStacksWithWidget=_countOfNonSmartStacksWithWidget;
@property(readonly, nonatomic) long long countOfSmartStacksWithWidget; // @synthesize countOfSmartStacksWithWidget=_countOfSmartStacksWithWidget;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) long long widgetFamily; // @synthesize widgetFamily=_widgetFamily;
@property(readonly, copy, nonatomic) NSString *containerBundleIdentifier; // @synthesize containerBundleIdentifier=_containerBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *widgetKind; // @synthesize widgetKind=_widgetKind;
@property(readonly, copy, nonatomic) NSString *widgetBundleId; // @synthesize widgetBundleId=_widgetBundleId;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithBuilder:(id)arg1;

@end
