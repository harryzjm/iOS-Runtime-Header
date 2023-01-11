//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClockKit/CLKTimelineEntry-Protocol.h>

@class CLKComplicationTemplate, NSDate, NSString;

@interface CLKComplicationTimelineEntry : NSObject <CLKTimelineEntry>
{
    _Bool _finalized;
    NSDate *_date;
    CLKComplicationTemplate *_complicationTemplate;
    NSString *_timelineAnimationGroup;
}

+ (_Bool)supportsSecureCoding;
+ (id)entryWithDate:(id)arg1 complicationTemplate:(id)arg2 timelineAnimationGroup:(id)arg3;
+ (id)entryWithDate:(id)arg1 complicationTemplate:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool finalized; // @synthesize finalized=_finalized;
@property(copy, nonatomic) NSString *timelineAnimationGroup; // @synthesize timelineAnimationGroup=_timelineAnimationGroup;
@property(copy, nonatomic) CLKComplicationTemplate *complicationTemplate; // @synthesize complicationTemplate=_complicationTemplate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic, setter=tl_setEntryDate:) NSDate *tl_entryDate;
- (_Bool)tl_validate:(id *)arg1;
- (id)finalizedCopy;
- (void)finalize;
- (_Bool)validateWithError:(id *)arg1;
- (_Bool)validateComplicationFamily:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
