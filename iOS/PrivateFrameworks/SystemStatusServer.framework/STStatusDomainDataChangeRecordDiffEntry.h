//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SystemStatusServer/STStatusDomainDataChangeRecordEntry-Protocol.h>

@class NSString;
@protocol STStatusDomainData><STStatusDomainDataDifferencing, STStatusDomainDataDiff;

@interface STStatusDomainDataChangeRecordDiffEntry : NSObject <STStatusDomainDataChangeRecordEntry>
{
    id <STStatusDomainDataDiff> _diff;
    id _clientKey;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id clientKey; // @synthesize clientKey=_clientKey;
@property(readonly, nonatomic) id <STStatusDomainDataDiff> diff; // @synthesize diff=_diff;
@property(readonly, nonatomic) unsigned long long entryType;
@property(readonly, nonatomic) id <STStatusDomainData><STStatusDomainDataDifferencing> data;
- (id)initWithDiff:(id)arg1 clientKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
