//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "COMeshResponse.h"

@class COBallot;

__attribute__((visibility("hidden")))
@interface COMeshBaseBallotResponse : COMeshResponse
{
    COBallot *_ballot;
    long long _variant;
    unsigned long long _generation;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
@property(readonly, nonatomic) long long variant; // @synthesize variant=_variant;
@property(copy, nonatomic) COBallot *ballot; // @synthesize ballot=_ballot;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBallot:(id)arg1 generation:(unsigned long long)arg2 variant:(long long)arg3;
- (id)initWithBallot:(id)arg1 generation:(unsigned long long)arg2;

@end

