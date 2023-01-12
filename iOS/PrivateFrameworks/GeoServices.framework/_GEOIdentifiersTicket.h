//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOAbstractMapServiceTicket.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOIdentifiersTicket : GEOAbstractMapServiceTicket
{
    NSArray *_identifiers;
    id _requestToken;
    int _resultProviderID;
    NSString *_contentProvider;
    unsigned long long _options;
}

- (void).cxx_destruct;
- (void)cancel;
- (CDStruct_d1a7ebee)dataRequestKind;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (id)description;
- (id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 options:(unsigned long long)arg5;
- (id)initWithMUIDs:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 options:(unsigned long long)arg5;
- (id)initWithTraits:(id)arg1;

@end

