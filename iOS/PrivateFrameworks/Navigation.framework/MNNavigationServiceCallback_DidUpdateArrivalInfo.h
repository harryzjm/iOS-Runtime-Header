//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MNArrivalInfo;

__attribute__((visibility("hidden")))
@interface MNNavigationServiceCallback_DidUpdateArrivalInfo
{
    MNArrivalInfo *_arrivalInfo;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) MNArrivalInfo *arrivalInfo; // @synthesize arrivalInfo=_arrivalInfo;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)type;

@end

