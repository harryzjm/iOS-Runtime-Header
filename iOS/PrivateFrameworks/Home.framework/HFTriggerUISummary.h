//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol HFIconDescriptor;

@interface HFTriggerUISummary : NSObject
{
    NSString *_triggerTitle;
    NSString *_triggerDescription;
    unsigned long long _triggerType;
    id <HFIconDescriptor> _triggerIconDescriptor;
    NSArray *_triggerSummaryIconDescriptors;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *triggerSummaryIconDescriptors; // @synthesize triggerSummaryIconDescriptors=_triggerSummaryIconDescriptors;
@property(readonly, nonatomic) id <HFIconDescriptor> triggerIconDescriptor; // @synthesize triggerIconDescriptor=_triggerIconDescriptor;
@property(readonly, nonatomic) unsigned long long triggerType; // @synthesize triggerType=_triggerType;
@property(readonly, nonatomic) NSString *triggerDescription; // @synthesize triggerDescription=_triggerDescription;
@property(readonly, nonatomic) NSString *triggerTitle; // @synthesize triggerTitle=_triggerTitle;
- (void)_updateWithTrigger:(id)arg1 inHome:(id)arg2 forceDisabled:(_Bool)arg3 ignoringDisabled:(_Bool)arg4;
- (id)initWithTrigger:(id)arg1 inHome:(id)arg2 forceDisabled:(_Bool)arg3 ignoringDisabled:(_Bool)arg4;
- (id)initWithTrigger:(id)arg1 inHome:(id)arg2 forceDisabled:(_Bool)arg3;

@end
