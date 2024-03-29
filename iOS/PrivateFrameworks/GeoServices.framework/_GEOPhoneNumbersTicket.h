//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOAbstractMapServiceTicket.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _GEOPhoneNumbersTicket : GEOAbstractMapServiceTicket
{
    NSArray *_phoneNumbers;
    _Bool _allowCellularDataForLookup;
}

- (void).cxx_destruct;
- (CDStruct_026435ec)dataRequestKind;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (id)description;
- (id)initWithPhoneNumbers:(id)arg1 allowCellularDataForLookup:(_Bool)arg2 traits:(id)arg3;

@end

