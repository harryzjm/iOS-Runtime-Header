//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, STKUSSDFilter;

@interface STKCarrierSubscriptionInfo : NSObject
{
    _Bool _canShowClass0SMSOverInCallAlerts;
    _Bool _showClass0SMSFromField;
    NSArray *_ussdAlwaysFilteredPatterns;
    NSArray *_ussdSometimesFilteredPatterns;
    STKUSSDFilter *_ussdFilter;
}

@property(readonly, nonatomic) STKUSSDFilter *ussdFilter; // @synthesize ussdFilter=_ussdFilter;
@property(readonly, nonatomic) NSArray *ussdSometimesFilteredPatterns; // @synthesize ussdSometimesFilteredPatterns=_ussdSometimesFilteredPatterns;
@property(readonly, nonatomic) NSArray *ussdAlwaysFilteredPatterns; // @synthesize ussdAlwaysFilteredPatterns=_ussdAlwaysFilteredPatterns;
@property(readonly, nonatomic) _Bool showClass0SMSFromField; // @synthesize showClass0SMSFromField=_showClass0SMSFromField;
@property(readonly, nonatomic) _Bool canShowClass0SMSOverInCallAlerts; // @synthesize canShowClass0SMSOverInCallAlerts=_canShowClass0SMSOverInCallAlerts;
- (void).cxx_destruct;
- (id)initWithShowClass0SMSFromField:(_Bool)arg1 canShowClass0SMSOverInCallAlerts:(_Bool)arg2 ussdAlwaysFilteredPatterns:(id)arg3 ussdSometimesFilteredPatterns:(id)arg4;

@end
