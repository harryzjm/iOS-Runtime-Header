//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SOS/NSObject-Protocol.h>

@class NSDictionary, SOSFlow;

@protocol SOSFlowObserver <NSObject>
- (void)sosFlow:(SOSFlow *)arg1 willHandleEvent:(unsigned long long)arg2 withMetaData:(NSDictionary *)arg3;
- (void)sosFlow:(SOSFlow *)arg1 didChangeToState:(long long)arg2;
@end

