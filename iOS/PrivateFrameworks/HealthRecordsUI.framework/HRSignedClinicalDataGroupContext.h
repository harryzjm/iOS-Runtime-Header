//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKSignedClinicalDataGroup, MISSING_TYPE, NSArray;

@interface HRSignedClinicalDataGroupContext : NSObject
{
    MISSING_TYPE *group;
    MISSING_TYPE *generatedQRImages;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithGroup:(id)arg1;
@property(nonatomic, copy) NSArray *generatedQRImages;
@property(nonatomic, readonly) HKSignedClinicalDataGroup *group; // @synthesize group;

@end
