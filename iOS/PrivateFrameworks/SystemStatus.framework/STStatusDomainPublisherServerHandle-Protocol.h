//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SystemStatus/NSObject-Protocol.h>

@protocol STStatusDomainData;

@protocol STStatusDomainPublisherServerHandle <NSObject>
- (void)publishData:(id <STStatusDomainData>)arg1 forDomain:(unsigned long long)arg2;
- (id <STStatusDomainData>)publishedDataForDomain:(unsigned long long)arg1;
@end
