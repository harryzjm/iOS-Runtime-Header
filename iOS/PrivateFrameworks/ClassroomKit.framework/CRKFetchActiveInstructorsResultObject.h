//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CATTaskResultObject.h"

@class NSArray;

@interface CRKFetchActiveInstructorsResultObject : CATTaskResultObject
{
    NSArray *_instructors;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *instructors; // @synthesize instructors=_instructors;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

