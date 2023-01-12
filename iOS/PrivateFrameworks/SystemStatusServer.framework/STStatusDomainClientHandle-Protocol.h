//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SystemStatusServer/NSObject-Protocol.h>

@protocol STStatusDomainData, STStatusDomainDataChangeContext;

@protocol STStatusDomainClientHandle <NSObject>
- (void)observeData:(id <STStatusDomainData>)arg1 forDomain:(unsigned long long)arg2 withChangeContext:(id <STStatusDomainDataChangeContext>)arg3;
@end

