//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKObjectType, _HKFilter;

__attribute__((visibility("hidden")))
@interface HKQueryServerConfiguration : NSObject <NSSecureCoding>
{
    _Bool _shouldDeactivateAfterInitialResults;
    _Bool _shouldSuppressDataCollection;
    HKObjectType *_objectType;
    _HKFilter *_filter;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool shouldSuppressDataCollection; // @synthesize shouldSuppressDataCollection=_shouldSuppressDataCollection;
@property(nonatomic) _Bool shouldDeactivateAfterInitialResults; // @synthesize shouldDeactivateAfterInitialResults=_shouldDeactivateAfterInitialResults;
@property(retain, nonatomic) _HKFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) HKObjectType *objectType; // @synthesize objectType=_objectType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

