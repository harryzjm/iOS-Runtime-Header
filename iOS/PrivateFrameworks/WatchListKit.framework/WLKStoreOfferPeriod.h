//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface WLKStoreOfferPeriod : NSObject
{
    NSString *_type;
    NSNumber *_duration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (id)_offerPeriodForString:(id)arg1;
- (id)initWithString:(id)arg1;

@end
