//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HDHRSignedClinicalDataProcessor : NSObject
{
}

- (id)init;
- (id)processContextCollection:(id)arg1 error:(id *)arg2;
- (id)processOriginalSignedClinicalDataRecords:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)reprocessOriginalRecords:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)preprocessFHIRResourceObject:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)preprocessDataInSource:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

@end
