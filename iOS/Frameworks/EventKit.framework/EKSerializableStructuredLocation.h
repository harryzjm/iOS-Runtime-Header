//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "EKSerializableObject.h"

@class CalLocation;

__attribute__((visibility("hidden")))
@interface EKSerializableStructuredLocation : EKSerializableObject
{
    CalLocation *_calLocation;
}

+ (id)classesForKey;
- (void).cxx_destruct;
@property(copy, nonatomic) CalLocation *calLocation; // @synthesize calLocation=_calLocation;
- (id)createStructuredLocation;
- (id)initWithStructuredLocation:(id)arg1;

@end

