//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/NSObject-Protocol.h>

@class CNContact, CNContactFetchRequest, CNResult;

@protocol CNAPITriageLogger <NSObject>
- (void)request:(CNContactFetchRequest *)arg1 willReturnAnchor:(CNResult *)arg2;
- (void)didReturnAllResultsForContactFetchRequest:(CNContactFetchRequest *)arg1;
- (void)clientStoppedEnumerationForRequest:(CNContactFetchRequest *)arg1;
- (void)request:(CNContactFetchRequest *)arg1 containsContact:(CNContact *)arg2;
- (void)didExecuteContactFetchRequest:(CNContactFetchRequest *)arg1;
- (void)willExecuteContactFetchRequest:(CNContactFetchRequest *)arg1;
@end
