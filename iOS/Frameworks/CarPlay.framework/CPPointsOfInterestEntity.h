//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlay/CPPointsOfInterestProviding-Protocol.h>
#import <CarPlay/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CPPointsOfInterestEntity <NSSecureCoding, CPPointsOfInterestProviding>
{
    NSString *_title;
    NSArray *_pointsOfInterest;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *pointsOfInterest; // @synthesize pointsOfInterest=_pointsOfInterest;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)objectForIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 pointsOfInterest:(id)arg2;

@end
