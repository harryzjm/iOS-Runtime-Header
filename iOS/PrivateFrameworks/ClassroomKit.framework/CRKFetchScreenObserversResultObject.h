//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CATTaskResultObject.h"

@class NSDictionary;

@interface CRKFetchScreenObserversResultObject : CATTaskResultObject
{
    NSDictionary *_observingInstructorIdentifiersByCourseCourseIdentifiers;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *observingInstructorIdentifiersByCourseCourseIdentifiers; // @synthesize observingInstructorIdentifiersByCourseCourseIdentifiers=_observingInstructorIdentifiersByCourseCourseIdentifiers;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

