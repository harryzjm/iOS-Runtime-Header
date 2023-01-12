//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICQOpportunityBubbleDetailsSpecification, ICQOpportunitySheetDetailsSpecification, NSString, _ICQOpportunityBubbleReportingSpecification;

@interface ICQOpportunityBubbleSpecification : NSObject
{
    NSString *_appId;
    ICQOpportunityBubbleDetailsSpecification *_bubbleDetails;
    ICQOpportunitySheetDetailsSpecification *_sheetDetails;
    _ICQOpportunityBubbleReportingSpecification *_reportingDetails;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _ICQOpportunityBubbleReportingSpecification *reportingDetails; // @synthesize reportingDetails=_reportingDetails;
@property(retain, nonatomic) ICQOpportunitySheetDetailsSpecification *sheetDetails; // @synthesize sheetDetails=_sheetDetails;
@property(retain, nonatomic) ICQOpportunityBubbleDetailsSpecification *bubbleDetails; // @synthesize bubbleDetails=_bubbleDetails;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)remoteUIURL;
- (id)initWithOpportunityBubble:(id)arg1 andOpportunitySheet:(id)arg2;

@end
