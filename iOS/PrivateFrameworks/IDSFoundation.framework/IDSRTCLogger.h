//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTMetricLogger-Protocol.h>

@class NSString;

@interface IDSRTCLogger : NSObject <CUTMetricLogger>
{
    unsigned short _category;
}

+ (id)loggerWithCategory:(unsigned short)arg1;
@property(readonly, nonatomic) unsigned short category; // @synthesize category=_category;
- (void)logMetric:(id)arg1;
- (id)initWithCategory:(unsigned short)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

