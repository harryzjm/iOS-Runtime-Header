//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPFinder/NSSecureCoding-Protocol.h>

@class NSDate;

@interface SPSearchResultMarker : NSObject <NSSecureCoding>
{
    NSDate *_date;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
