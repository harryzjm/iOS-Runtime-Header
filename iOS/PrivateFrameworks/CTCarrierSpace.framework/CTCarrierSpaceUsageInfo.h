//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CTCarrierSpace/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CTCarrierSpaceUsageInfo : NSObject <NSSecureCoding>
{
    NSArray *_accountMetrics;
    NSString *_moreDetailsURL;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *moreDetailsURL; // @synthesize moreDetailsURL=_moreDetailsURL;
@property(retain, nonatomic) NSArray *accountMetrics; // @synthesize accountMetrics=_accountMetrics;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end
