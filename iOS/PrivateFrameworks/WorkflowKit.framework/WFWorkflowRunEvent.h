//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface WFWorkflowRunEvent
{
    NSString *_source;
    NSDate *_date;
    NSString *_triggerID;
    long long _outcome;
}

@property(readonly, nonatomic) long long outcome; // @synthesize outcome=_outcome;
@property(readonly, copy, nonatomic) NSString *triggerID; // @synthesize triggerID=_triggerID;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSString *source; // @synthesize source=_source;
- (void).cxx_destruct;

@end
