//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WatchKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface SPStockListComplicationData <NSSecureCoding>
{
    NSArray *_stockList;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *stockList; // @synthesize stockList=_stockList;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

