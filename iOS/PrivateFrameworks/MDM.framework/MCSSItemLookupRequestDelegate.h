//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MDM/SSItemLookupRequestDelegate-Protocol.h>

@class NSArray, NSString, SSItemLookupRequest;

@interface MCSSItemLookupRequestDelegate <SSItemLookupRequestDelegate>
{
    NSArray *_items;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)itemLookupRequest:(id)arg1 didFindItems:(id)arg2;
- (void)startCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) SSItemLookupRequest *request; // @dynamic request;
@property(readonly) Class superclass;

@end
